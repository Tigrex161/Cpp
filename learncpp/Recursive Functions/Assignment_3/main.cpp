#include <iostream>

using namespace std;

struct node{

int d;
node *next;

};

struct circularLinkedList{
int length;
node *head = new node;

circularLinkedList()
{
head=nullptr;
length=0;
}

void insertAtStart(int x)
{
    if(head==nullptr)
    {
    node *a = new node;
    a->d = x;
    head = a;
    a->next = a;
    ++length;
    }

    else
    {
        node *temp;
        temp = head;
        while(temp->next!=head)
        {
            temp = temp->next;
        }

        node *a = new node;
        temp->next = a;
        a->d=x;
        a->next = head;
        head =a;
        ++length;
    }


}

void deleteAtStart()
{
    if(head==nullptr)
    {
    cout << "The linked list is empty. Nothing to delete.";
    }


    if(head->next == head)
    {
        delete head;
        head = nullptr;
        --length;
    }

    else
{
    node *temp1;
    node *temp2;
    temp1 = head;
    temp2 = head;
    while(temp1->next!=head)
        {
            temp1 = temp1->next;
        }
    head = head->next;
    temp1->next = head;
    delete temp2;
    --length;
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
    node *a = new node;
    a->d = x;
    ptr = head;
    while(ptr->next != head)

{
         ptr = ptr->next;
}

        ptr->next=a;
        a->next=head;

    ++length;
}



}

void deleteAtEnd()
{
    if(head == nullptr)
        {
          cout << "The linked list is empty. Nothing to delete" << endl;
        }

if (head->next == head)
    {
        cout << "Only one element so deleteAtStart() called." << endl;
        deleteAtStart();
    }


if ((head->next) != head)

    {
        node *ptr;
        node *temp;
        ptr=head;

        while(ptr->next->next != head)

        {
         ptr = ptr->next;
        }

        temp=ptr->next;

        delete temp;
        ptr->next=head;
        --length;
    }

}

void insertAtAnyPosition(int x,int y)
{
    if(x > length)
    {
    cerr << "This position does not exist in the list.";
    }

    if (x<1)
    {
        cerr <<"Positions start from 1.";
    }

    if(x == length)
    {
        insertAtEnd(y);
    }

    if(x==1)
    {
       insertAtStart(y);
    }
    else
    {

        node *ptr1;
        node *ptr2;
        node *a = new node;
        a->d=y;
        ptr1 = head;
        ptr2 = head;
        for(int i = 1; i < x; ++i)
        {
            ptr1 = ptr1->next;
        }
        for(int j = 1; j < (x-1) ;++j)
        {
            ptr2 = ptr2->next;
        }
            a->next  = ptr1;
            ptr2->next = a;

            ++length;
    }


}



void deleteAtAnyPosition(int x)
{
    if(x > length)
    {
    cerr << "This position does not exist in the list.";
    }

    if (x<1)
    {
        cerr <<"Positions start from 1.";
    }

    if(x == length)
    {
        deleteAtEnd();
    }

    if(x==1)
    {
       deleteAtStart();
    }
    if(x>1 && x<length)
    {

        node *ptr1;
        node *ptr2;
        ptr1 = head;
        ptr2 = head;
        for(int i = 1; i < x; ++i)
        {
            ptr1 = ptr1->next;
        }
        for(int j = 1; j < (x-1) ;++j)
        {
            ptr2 = ptr2->next;
        }
            ptr2->next  = ptr1->next;
            delete ptr1;

            --length;
    }



}

circularLinkedList(const circularLinkedList &a)
{



}

~circularLinkedList()
{
    node *temp1=head;
    do
    {
    temp1 = temp1->next;
    node* temp = temp1;
    delete temp;
    }
    while(temp1->next != head);

    delete head;
}


};


struct node2{

int d;
node2 *next;
node2 *prev;

};

struct doublyLinkedList{
int length;
node2 *head = new node2;

doublyLinkedList()
{
head=nullptr;
length=0;
}

void insertAtStart(int x)
{
    if(head==nullptr)
    {
    node2 *a = new node2;
    a->d = x;
    head = a;
    a->next = nullptr;
    a->prev = nullptr;
    ++length;
    }

    else
    {
        node2 *temp = head;
        node2 *a = new node2;
        head = a;
        temp->next = nullptr;
        temp->prev = a;
        a->d = x;
        a->next = temp;
        a->prev=nullptr;
        ++length;
    }


}

void deleteAtStart()
{
    if(head==nullptr)
    {
    cout << "The linked list is empty. Nothing to delete.";
    }


    if(head->next == nullptr)
    {
        delete head;
        head = nullptr;
        --length;
    }

    else
{
    node2 *temp1;
    temp1 = head;

    head = head->next;
    head->prev = nullptr;
    delete temp1;
    --length;
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
    node2 *ptr;
    node2 *a = new node2;
    a->d = x;
    ptr = head;
    while(ptr->next != nullptr)

{
         ptr = ptr->next;
}

        ptr->next = a;
        a->next=nullptr;
        a->prev=ptr;

    ++length;
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


if ((head->next) != nullptr)

    {
        node2 *ptr;
        node2 *temp;
        ptr=head;

        while(ptr->next->next != nullptr)

        {
         ptr = ptr->next;
        }

        temp=ptr->next;

        delete temp;
        ptr->next=nullptr;
        --length;
    }

}

void insertAtAnyPosition(int x,int y)
{
    if(x > length)
    {
    cerr << "This position does not exist in the list.";
    }

    if (x<1)
    {
        cerr <<"Positions start from 1.";
    }

    if(x == length)
    {
        insertAtEnd(y);
    }

    if(x==1)
    {
       insertAtStart(y);
    }
    if (x>1 && x<length)
    {

        node2 *ptr1;
        node2 *ptr2;
        node2 *a = new node2;
        a->d=y;
        ptr1 = head;
        ptr2 = head;
        for(int i = 1; i < x; ++i)
        {
            ptr1 = ptr1->next;
        }
        for(int j = 1; j < (x-1) ;++j)
        {
            ptr2 = ptr2->next;
        }
            ptr1 -> prev  = a;
            ptr2->next = a;
            a->next = ptr1;
            a->prev = ptr2;
            ++length;
    }


}



void deleteAtAnyPosition(int x)
{
    if(x > length)
    {
    cerr << "This position does not exist in the list.";
    }

    if (x<1)
    {
        cerr <<"Positions start from 1.";
    }

    if(x == length)
    {
        deleteAtEnd();
    }

    if(x==1)
    {
       deleteAtStart();
    }
    if(x>1 && x<length)
    {

        node2 *ptr1;
        node2 *ptr2;
        ptr1 = head;
        ptr2 = head;
        for(int i = 1; i < x; ++i)
        {
            ptr1 = ptr1->next;
        }
        for(int j = 1; j < (x-1) ;++j)
        {
            ptr2 = ptr2->next;
        }
            ptr2->next  = ptr1->next;
            ptr1->next->prev=ptr2;
            delete ptr1;

            --length;
    }



}

doublyLinkedList(const doublyLinkedList &a)
{



}






};
int main()
{

    doublyLinkedList a;

    a.insertAtStart(12);
    a.insertAtStart(11);
    a.insertAtStart(10);
    a.insertAtStart(9);
    a.insertAtStart(8);
    a.insertAtAnyPosition(4,2);
    cout << a.head->d;

    return 0;
}
