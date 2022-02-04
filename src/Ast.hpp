#pragma once

#include <string>
#include <memory>
#include <type_traits>
#include <vector>
#include "Cmds.hpp"
#include "Types.hpp"

using namespace std;

enum DataType {
    INT_NODE_TYPE, 
    FLOAT_NODE_TYPE, 
    DOUBLE_NODE_TYPE, 
    CHAR_NODE_TYPE, 
    STRING_NODE_TYPE, 
    BOOL_NODE_TYPE,
    ARRAY_NODE_TYPE,
    MAP_NODE_TYPE, 
    VAR_TYPE_NODE_TYPE,
    ID_NODE_TYPE,
    NON_DATA_TYPE
};

struct Data
{
    DataType type = NON_DATA_TYPE;
    int64 i;
    float f;
    dbl128 d;
    char32_t c;
    string s;
    bool b;
};

// will be used by the parser to create an abstract syntax tree
// a tree class will not be implemented because there's no one size fit all way of constructing
// all the trees that will represent each line of the code
class AstNode {
private:
    COMMANDS type;
    Data value;
    size_t index;
    vector<AstNode*> left_nodes;
    vector<AstNode*> middle_nodes;
    vector<AstNode*> right_nodes;
    vector<AstNode*> extra_nodes;

    void DeleteNodeList(vector<AstNode*> &node_list);

public:

    static const int RIGHT = 1;
    static const int MIDDLE = 0;
    static const int LEFT = -1;

    ~AstNode();
    void AddToLeftNodes(AstNode *node);
    void AddToLeftNodes(size_t index, AstNode *node);
    void AddToRightNodes(AstNode *node);
    void AddToRightNodes(size_t index, AstNode *node);
    void AddToMiddleNodes(AstNode *node);
    void AddToMiddleNodes(size_t index, AstNode *node);

    void SaveAsExtraNode(AstNode *node);
    AstNode* GetExtraNode(size_t index = 0);
    size_t Extras();
    void NullExtraNode(size_t index);

    COMMANDS& Type();
    Data& Value();
    size_t Size(int which);
    AstNode* GetFromLeftNodes(size_t index = 0);
    AstNode* GetFromMiddleNodes(size_t index = 0);
    AstNode* GetFromRightNodes(size_t index = 0);
    void CopyNodeList(vector<AstNode*> &to, vector<AstNode*> &from);
    AstNode* Copy();
};

AstNode* MakeNode(COMMANDS cmd, string data, DataType d_type);

AstNode* MakeNode(COMMANDS cmd);

template<class T>
AstNode* MakeNode(COMMANDS cmd, T data, DataType d_type) {
    AstNode *new_node = new AstNode();
    new_node->Value().type = d_type;
    new_node->Type() = cmd;
 
    switch(d_type) {
        case INT_NODE_TYPE: {
            new_node->Value().i = data;
            break;
        }
        case FLOAT_NODE_TYPE: {
            new_node->Value().f = data;
            break;
        }
        case DOUBLE_NODE_TYPE: {
            new_node->Value().d = data;
            break;
        }
        case CHAR_NODE_TYPE: {
            new_node->Value().c = data;
            break;
        }
        case BOOL_NODE_TYPE: {
            new_node->Value().b = data;
            break;
        }
        default: {}
    }

    return new_node;
}
