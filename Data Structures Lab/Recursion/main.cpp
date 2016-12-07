#include <iostream>

using namespace std;

struct node{
int d;
node *next;
};

struct stack1
{
node *top;
int stackLength;

stack1(){top = nullptr;
stackLength=0;
}

void push(int a)
{

    if(top==nullptr)
    {
    node *x = new node;
    top = x;
    x->next = nullptr;
    x->d = a;
    stackLength++;
    }

    else
    {
        node *y = new node;
        y->next = top;
        top = y;
        y->d = a;
        stackLength++;
    }


}


void pop()
{
    if(top == nullptr)
{

    cout << "Stack is empty. Nothing to pop.";

}

else
{

    node *temp;
    temp = top;
    top = top->next;
    delete temp;
    --stackLength;
}


}


bool isEmpty()
{

    if(stackLength > 0)
    return 0;

    else
    return 1;

}


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
        head = nullptr;

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
cout << "Empty list." << endl;
}


else
{
while(temp->next != nullptr)
{

    cout << temp->d << endl;
    temp = temp->next;

}

cout << temp->d << endl;


}
}


bool seearch(node *ptr, int data)
{
    if(ptr == nullptr)
    {
    cout << "Empty list";
        return 0;

    }

    if(ptr->d == data)
    {
    cout << "Element found in list." << endl;
    return true;
    }

    if(ptr->next!=nullptr)
    {

        seearch(ptr->next,data);

    }



    else
    cout << "Element not found." << endl;
}


void printReverse(node *ptr)
{
    if(ptr == nullptr)
{cout << "Empty list" << endl;}


if(ptr != nullptr)
{
    if(ptr->next!=nullptr)
    {printReverse(ptr->next);}
    cout << ptr->d << endl;
}


}


void stackPrintRev(node *ptr)
{
stack1 recursion;

if(ptr==nullptr)
{
cout << "Empty list." << endl;
}

if(ptr !=nullptr)
{
    recursion.push(ptr->d);
    stackPrintRev(ptr->next);
    cout << ptr->d << endl;
    recursion.pop();

}


}





};

int power(int n, int x)
{

        if( x < 0 )
        {
        cout << "Power must be positive." << endl;
        return 0;
        }

        if(x==1)
        return n;

        if(x==0)
        return 1;

        else
        {

        return n * power(n,x-1);

        }


}



int main()
{
    linkedList myList;
    myList.insertAtStart(1);
    myList.insertAtEnd(2);
    myList.insertAtEnd(3);
    myList.insertAtEnd(4);
    myList.insertAtEnd(5);
    myList.traverse();
    myList.seearch(myList.head,6);
    myList.seearch(myList.head,2);
    cout << power(2,0) << endl;
    power(2,-1);
    cout<< power(2,2) << endl;
    myList.printReverse(myList.head);
    myList.deleteAtStart();
    myList.deleteAtStart();
    myList.deleteAtStart();
    myList.deleteAtStart();
    myList.deleteAtStart();
myList.traverse();
myList.stackPrintRev(myList.head);
    return 0;
}


