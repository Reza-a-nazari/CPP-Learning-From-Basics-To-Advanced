#include <iostream>
#include <stack>

using namespace std ;

struct Node
{
    int value ; 
    Node * np[2];
};


Node* CreateNode(int val)
{
    Node * new_node = new Node();

    new_node->value = val ;

    new_node->np[0]= nullptr;//prev 
    new_node->np[1]=nullptr; //next

    return new_node;
}


void printforward(Node* head)
{
    while(head != nullptr)
    {
        cout<<head->value<<" ";

        head = head->np[1];
    }

    cout<<endl;
}

int main()
{
    Node * head = nullptr ; 

    Node* node3 = CreateNode(3);
    head = node3 ;
    Node* node4 = CreateNode(4);

    node3->np[1] = node4 ; 
    node4->np[0] = node3 ;

    node3->np[0] = nullptr;
    node4->np[1] = nullptr;


    printforward(head);
    

}