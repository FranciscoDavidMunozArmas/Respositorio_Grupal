#ifndef LIST_H
#define LIST_H

#include "Node.h"

template<class T>
class List
{
public:
    List();

    void add_begin(T _data);
    void add_end(T _data);
    void _delete_begin();
    void _delete_end();

    bool is_empty();

    void _print_node();

    virtual ~List();

protected:
private:
    Node<T>* _next;
};

#endif
