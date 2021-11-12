#pragma once

#include "../Container.hpp"
#include <vector>

using namespace std;

class List : public Container {
private:
    vector<ChimeraObject*> m_list;
    VAR_TYPES m_list_type;
protected:
public:

    List(VAR_TYPES type);
    ~List();

    int PutItem(ChimeraObject *item);
    int SetItem(int64 index, ChimeraObject *item);
    ChimeraObject* GetItem(int64 index);
    size_t Size();
    void SetToNewContainer(Container *new_container);

    string ToStr();
    int64 ToInt();
    float ToFloat();
    dbl128 ToDouble();
    char32_t ToChar();
    bool ToBool();
    ChimeraObject* Clone();

};