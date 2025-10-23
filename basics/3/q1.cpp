#include <iostream>
#include <stdio.h>
using namespace std ;

struct node
{
    int data ;

    node * next ;
};


void fun(struct node* start)
{
    if(start == NULL)
    {
        return ;
    }

    printf("%d",start->data);

    if(start->next != NULL)
    {
        fun(start->next->next);

    }
    printf("%d",start->data);

}
node* createNode(int data)
{
    node* newNode = new node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}
int main()
{
    // Build list: 1 -> 2 -> 3 -> 4 -> 5 -> 6
    node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);
    head->next->next->next->next->next = createNode(6);

    fun(head);
    printf("\n");

    // Optional: free memory (not required for small programs)
    return 0;
}