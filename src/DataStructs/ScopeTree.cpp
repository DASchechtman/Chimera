#include "ScopeTree.hpp"

ScopeTree::ScopeTree() {}

ScopeTree::~ScopeTree() {
    Clear();
}

void ScopeTree::MoveToLevel(size_t level) {
    while(level != cur_block->depth) {
        if (level > cur_block->depth) {
            if (cur_block->children.empty()) {
                break;
            }
            auto size = cur_block->children.size();
            cur_block = cur_block->children[cur_block->cur_child % size];
        }
        else {
            if (!cur_block->parent) {
                break;
            }
            cur_block = cur_block->parent;
        }
    }
}

void ScopeTree::MoveToNextNode(size_t index) {
    cur_block->parent->cur_child++;
    auto cur_index = cur_block->parent->cur_child;
    auto size = cur_block->parent->children.size();
    cur_block = cur_block->parent->children[cur_index % size];
}

void ScopeTree::RemoveParent(shared_ptr<ScopeBlock> child) {
    for (auto c : child->children) {
        RemoveParent(c);
    }
    child->parent.reset();
}

void ScopeTree::CreateNewBlock(bool is_if_link) {
    if (!cur_block) {
        root = make_shared<ScopeBlock>(ScopeBlock());
        cur_block = root;
        return;
    }
    auto new_block = make_shared<ScopeBlock>(ScopeBlock());

    new_block->depth = cur_block->depth + 1;
    new_block->parent = cur_block;
    new_block->is_if_link = is_if_link;
    cur_block->children.push_back(new_block);
    cur_block = new_block;
}

void ScopeTree::AddJpToBlock(size_t jump_point) {
    cur_block->jump_points.Add(jump_point);
}

void ScopeTree::CloseBlock() {
    if (cur_block->parent) {
        cur_block = cur_block->parent;
    }
}

void ScopeTree::MoveToLastNode(size_t level) {
    if (level >= 1) {
        if (cur_block && level != cur_block->depth) {
            MoveToLevel(level);
            cur_block->parent->cur_child -= 2;
            MoveToNextNode(level);
        }
        else {
            cur_block->parent->cur_child -= 2;
            MoveToNextNode(level);
        }
    }
}

void ScopeTree::Clear() {
    if (root) {
        RemoveParent(root);
        cur_block.reset();
        root.reset();
    }
}

CircularList* ScopeTree::operator[](size_t index) {
    
    MoveToLevel(index);

    auto ret = &cur_block->jump_points;
    if (cur_block->jump_points.IsLastElement() && cur_block->parent) {
        MoveToNextNode(index);
        if (cur_block->is_if_link) {
            ret->Next();
            ret = &cur_block->jump_points;
        }
    }

    return ret;
}