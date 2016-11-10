#include <iostream>

using namespace std;

struct node{

int d;
node *next;

};

struct linkedList{
node *head = new node;

linkedList()
{
head=nullptr;
}

void insertAtStart(int x)
{
    node *a = new node;
    a->d = x;
    a->next = head;
    head = a;
}

void deleteAtStart()
{
    if(head==nullptr)
    {
    cout << "The linked list is empty. Nothing to delete.";
    }


    if(head->next==nullptr)
    {

        delete head;

    }

    else
{
    node *temp;

    temp = head;
    head = head->next;
    delete temp;
}
}


void insertAtEnd(int x)
{
    if(head == nullptr)
        {
        cout << "The linked list was empty so it has been initialized with your input instead of inserting at end.";
        insertAtStart(x);
        }
    else
{
    node *ptr;
    node *temp = new node;
    temp->d = x;
    ptr = head;
    while(ptr->next != nullptr)

{
         ptr = ptr->next;
}

        ptr->next=temp;
        temp->next=nullptr;

}



}

void deleteAtEnd()
{
    if(head == nullptr)
        {
          cout << "The linked list is empty. Nothing to delete" << endl;
        }

if (head->next == nullptr)
    {
        cout << "Only one element so deleteAtStart() called." << endl;
        deleteAtStart();

    }


if (head->next != nullptr)

    {
        node *ptr;
        node *temp;
        ptr=head;

        while(ptr->next->next != nullptr)

        {
         ptr = ptr->next;
        }

        temp=ptr->next;

        delete temp;
        ptr->next=nullptr;
    }





}


void traverse()
{
node *temp;
temp=head;

if(head == nullptr)
{
cout << "Empty list.";
}


else
{
while(temp->next != nullptr)
{

    temp = temp->next;
}




}
}


};





int main()
{
    linkedList one;
    one.insertAtStart(2);
    one.insertAtStart(3);
    one.deleteAtEnd();
    one.deleteAtStart();
    one.traverse();
    return 0;
}
/*insertatstart
deleteatstart
insertatend
deleteatend
traverse*/
