#include <iostream>

#define null NULL

using namespace std;

// creating a structure (a data of type `node`)
template <typename T>
struct Node
{
    T data;     //data element of the node
    Node *next; //pointer to the next node

    Node(T data) //constructor to initialise or update the data element
    {
        this->data = data;
    }
};

Node<int> *head = null; //initialising the head pointer

int main()
{
    return 0;
}