#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void fun1(node* head) {
    if(head == nullptr) return;
    fun1(head->next);
    cout << head->data << " ";
}


void fun2(node* head) {
    if(head == nullptr) return;
    cout << head->data << " ";
    fun2(head->next);
}


int main()
{
    node * head = new node{3,nullptr};

    head->next = new node{2,nullptr};

    head->next->next = new node{1,nullptr};

    cout<<"Main List : "<<endl;

    fun2(head);

    cout<<endl;

    cout<<"Reversed List : "<<endl;

    fun1(head);

    cout<<endl;

    node *temp ;

    while(head!=nullptr)
    {
        temp = head ;
        head = head->next;
        delete temp ;
    }

}