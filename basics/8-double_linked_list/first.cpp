#include <iostream>
#include <stack>

using namespace std ;

struct Node
{
    int value ; 
    Node * Next ;
    Node * prev ;
};


Node * CreateNode(int val)
{
    Node * newnode = new Node();

    newnode->value = val;

    newnode->Next = nullptr;
    newnode->prev = nullptr;

    return newnode ;
}

void printForward(Node* head) 
{
    while(head != nullptr)
    {
        cout<<head->value<<" ";
        head = head->Next ;
    }

    cout<<endl;
}



Node * Insert_end(Node* head , int New_Data)
{

    Node *new_node = new Node();

    new_node->value = New_Data ;

    if(head==nullptr)
    {
        head = new_node;
    }
    else
    {
        Node * curr = head ;
        while(curr->Next !=nullptr)
        {
            curr=curr->Next;
        }

        curr->Next = new_node;
        new_node->prev = curr ;
    }

    return head ;
    
}

Node* DeleteEnd(Node * head)
{

    Node *temp = head; //Call by value 
                       //Both of them pointer to one Node to Memory
    while(temp->Next!= nullptr)
    {
        temp = temp->Next ;
    }

    temp->prev->Next = nullptr ; 

    delete temp;
    return head ;
}

bool Search(Node* head,int key)
{
    bool find = false ;
    while(head!=nullptr)
    {
        if(head->value ==key)
        {
            find = true ;
        }
        head = head->Next;
    }
    return find ;
}

int main()
{
    Node * head = nullptr ; 

    Node* node3 = CreateNode(3);
    head = node3 ;
    Node* node4 = CreateNode(4);

    node3->Next = node4 ; 
    node4->prev = node3 ;

    node3->prev = nullptr;
    node4->Next = nullptr;


    printForward(head);

    bool a = Search(head,100);


    Insert_end(head,5);

    printForward(head);

    DeleteEnd(head);

    printForward(head);


    // if(a == true)
    // {
    //     cout<<"Yes , Thats have Value"<<endl;
    // }
    // else
    // {
    //     cout<<"404"<<endl;
    // }


}