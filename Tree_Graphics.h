/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date viernes, 21 de agosto de 2020 10:07:14
 * @function Declaration of Tree_Graphics
*/

#ifndef TREE_GRAPHICS_H
#define TREE_GRAPHICS_H

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Binary_Tree.h"
#include "Tree_Node.h"

using namespace std;

template<class T>
class Tree_Graphics
{
public:
    Tree_Graphics();
    void _print_tree(Binary_Tree<T>* _tree);
protected:
private:
    sf::RenderWindow* window;
    int height;
    int width;
    void _draw_circle(int x, int y, int radious, sf::Color color);
    void _draw_line(int x, int y, int vec_x, int vec_y, sf::Color color);
    void _draw_text(int x, int y, string _text, sf::Color color);
    void _draw_node(int x, int y, Tree_Node<T>* _node, sf::Color color);
    void _print_tree(int x, int y, int _height, int floor, int _index, Tree_Node<T>* _node);
};

#endif
