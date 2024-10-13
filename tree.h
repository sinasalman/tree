#include <iostream>
using namespace std;
class node
{

public:
    int data;
    node *left;
    node *right;
    node(int value) : data(value), left(nullptr), right(nullptr) {};
};

class tree
{
private:
    node *root;

public:
    tree() : root(nullptr) {}
    void insert(int value , int dir)
    {
        if(dir == 1)
        root->right = insertNode(root, value);
          
        else root->left = insertNode(root , value);
    }
    void DisplayTree()
    {
        displayByOrder(root);
    }

private:
    node *insertNode(node *Node, int value)
    {
        if (Node == nullptr)
        {
            return  new node(value);
        }
    }
   

    void displayByOrder(node *Node)
    {
        if (Node == nullptr)
        {
            return;
        }
        displayByOrder(Node->left);
        cout << Node->data << '\t';
        displayByOrder(Node->right);
    }
};
