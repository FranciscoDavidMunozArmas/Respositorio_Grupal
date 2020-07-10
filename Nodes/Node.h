#ifndef NODE_H
#define NODE_H

template<class T>
class Node
{
public:
    Node();
    Node(T _data, Node* _next);

    void _set_data(T _data);
    void _set_node(Node* _node);
    
    T _get_data();
    Node* _get_node();

    virtual ~Node();

protected:
private:
    T data;
    Node* _next;
};

#endif
