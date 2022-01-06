#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};
int main(int argc, char const *argv[])
{
    Node *A;
    A = NULL;
    //Node *temp = (*Node)malloc(sizeof(Node)); in C
    Node *temp = new Node();
    (*temp).data = 2;
    //temp->data=2;
    (*temp).link = NULL;
    //temp->link=NULL;
    A = temp;
    temp = new Node();
    temp->data = 4;
    temp->link = NULL;
    Node *temp1 = A;
    while (temp1->link != NULL)
    {
        temp1 = temp1->link;
        cout << temp->data << endl;
    }
    temp1->link = temp;

    return 0;
}
