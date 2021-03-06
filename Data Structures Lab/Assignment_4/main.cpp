#include <iostream>

using namespace std;





struct printNode{
printNode *nextUser;
printNode *qHead;
int iD;


printNode()
{
qHead = nullptr;
}

};




struct linkedList{

printNode *head;
int length;

linkedList()
{
head = nullptr;
length = 0;
}


void deleteAtStart()
{
    if(head==nullptr)
    {
    cout << "The linked list is empty. Nothing to delete.";
    }


    if(head->nextUser==nullptr)
    {
        delete head;
        --length;
    }

    else
{
    printNode *temp;
    temp = head;
    head = head->nextUser;
    delete temp;
    --length;
}
}


printNode* ins(int v)
{
    printNode *temp = new printNode;
        temp->nextUser=nullptr;
        temp->iD=v;
        ++length;
        return temp;

}




void deleteAtEnd()
{
    if(head == nullptr)
        {
          cout << "The linked list is empty. Nothing to delete" << endl;
        }

if (head->nextUser == nullptr)
    {
        cout << "Only one element so deleteAtStart() called." << endl;
        deleteAtStart();
    }

if (head->nextUser != nullptr)
    {
        printNode *ptr;
        printNode *temp;
        ptr=head;

        while(ptr->nextUser->nextUser != nullptr)

        {
         ptr = ptr->nextUser;
        }

        temp=ptr->nextUser;

        delete temp;
        ptr->nextUser=nullptr;
        --length;
    }
}





};



struct printSpool{

linkedList users;


printNode* createPrintQueue(int x){

linkedList toPrint;

if(toPrint.head==nullptr)
{
    toPrint.head = toPrint.insertAtStart(x);
    return toPrint.head;
}

else
{
    printNode *temp;
    temp = toPrint.insertAtEnd(x);
    return temp;


}





}




int print(int x, int ID)
{
printNode *ptr = users.head;

    if(users.head == nullptr)
        {
            users.head = users.ins(ID);
            users.head->qHead  = createPrintQueue(x);
            return 1;
        }

else{
int f= 0;


while(ptr->nextUser != nullptr)
{

if(ptr->iD == ID)
{
f=1;
break;
}

ptr = ptr->nextUser;

}




if(f==0)
{
printNode *ptr1 = users.head;

printNode *temp = users.ins(ID);

while((ptr1->nextUser)!=nullptr)

{ptr1 = ptr1->nextUser;}

ptr1->nextUser = temp;

temp->qHead = createPrintQueue(x);
}

if(f==1)
{

}


return 0;
}


}















};







int main()
{

printSpool one;

one.print(1,2);

one.print(2,3);

one.print(3,4);

one.print(44,5);
//one.print(54,2);
cout << one.users.head->qHead->iD << endl;
cout << one.users.head->nextUser->qHead->iD << endl;
cout << one.users.head->nextUser->nextUser->qHead->iD << endl;
cout << one.users.head->nextUser->nextUser->nextUser->qHead->iD << endl;



return 0;
}
