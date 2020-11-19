#include <iostream>
#define null NULL

using namespace std;

template <typename T>
// creating a structure (a data of type `node`)
struct Node
{
    T data;            //data element of the node
    Node *next, *prev; //pointers to the next and previous nodes

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