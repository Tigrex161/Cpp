#include <iostream>
using namespace std;

struct node{
char data;
node *next;
};


struct stack1
{
node *top;
int stackLength;

stack1(){top = nullptr;
stackLength=0;
}

void push(char a)
{

    if(top==nullptr)
    {
    node *x = new node;
    top = x;
    x->next = nullptr;
    x->data = a;
    stackLength++;
    }

    else
    {
        node *y = new node;
        y->next = top;
        top = y;
        y->data = a;
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


bool balanced()
{

int x = stackLength;
int counter=0;
node *temp = top;

for(int i = 0; i < x; ++i)
{

    if(temp->data == '(')
    {

    ++counter;
    temp = temp->next;
    cout << "Added" << endl;
    continue;
    }


    if(temp->data == ')')
    {
    --counter;
    temp = temp->next;
    cout << "Subtracted" << endl;
    continue;
    }


    if(temp->data!= ')' && temp->data != '(')
    {
        temp = temp->next;
        cout << "Skipped" << endl;
    }

}



if(counter==0)
return 1;

else
return 0;

}

~stack1()
{
    for (int i =0; i <stackLength; ++i)
    {
    pop();
    }

}

};




int main()
{
stack1 a;

a.push('(');
a.push('(');
a.push('a');
a.push(')');
//a.push(')');
cout << a.balanced();
return 0;
}
