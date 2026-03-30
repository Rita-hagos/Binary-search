#include <iostream>
using namespace std;

struct Node {
 int data;
Node * left;
Node * right;

Node(int value)
{
   data = value;
   left = NULL;
   right = NULL;
}

class BST
{
private:
    Node* root;

    Node* insert(Node* node, int value)
    {
        if (node == NULL)
        {
            return new Node(value);
        }

        if (value < node->data)
        {
            node->left = insert(node->left, value);
        }
        else
        {
            node->right = insert(node->right, value);
        }

        return node;
    }
public:
    BST()
    {
        root = NULL;
    }

    void insert(int value)
    {
        root = insert(root, value);
    }
};

int main()
{
  
    int arr[] = {1, 5, 9, 2, 4, 10, 6, 3, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    BST tree;

    // insert all elements
    for (int i = 0; i < size; i++)
    {
        tree.insert(arr[i]);
    }

    cout << "BST created using insertion." << endl;

    return 0;

