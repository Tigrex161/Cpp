#include <iostream>

using namespace std;
struct tnode{

tnode *right;
tnode *left;
int data;

tnode()
{
    right = nullptr;
    left  = nullptr;
    data = 0;
}


};

struct bST{

tnode *root = new tnode;
int length= 0;
bool isEmpty(int a)
{
    if(a == 0)
    {return 1;}

    else
    {return 0;}
}


void inser(int d)
{
    tnode *temp = root;

    if(isEmpty(length))
    {
        root->data = d;
        length++;
    }


else
{

 while (1)
    {

    if(d < temp->data)
    {

        if(temp->left == nullptr && d < temp->data)
            {tnode *ptr1 = new tnode;
            temp->left = ptr1;
            temp = ptr1;
            temp->data=d;
            length++;
            break;}
        temp = temp->left;
        continue;
    }


    if(d > temp->data)
    {

        if(temp->right == nullptr && d > temp->data)
            {tnode *ptr2 = new tnode;
            temp->right = ptr2;
            temp = ptr2;
            temp->data=d;
            length++;
            break;}
        temp = temp->right;
        continue;
    }

    }



}



}


tnode* recursiveInsert(int d, tnode *temp)
{

    if(isEmpty(length))
    {
        root->data = d;
        length++;
    }


    if(d < temp->data)
    {

        if(temp->left == nullptr && d < temp->data)
            {tnode *ptr1 = new tnode;
            temp->left = ptr1;
            ptr1->data=d;
            length++;
            return ptr1;}
        temp = temp->left;
        recursiveInsert(d,temp);
    }


    if(d > temp->data)
    {

        if(temp->right == nullptr && d > temp->data)
            {tnode *ptr2 = new tnode;
            temp->right = ptr2;
            ptr2->data=d;
            length++;
            return ptr2;}
        temp = temp->right;
        recursiveInsert(d,temp);
    }


}


void inOrder(tnode *root)
{

if(root!=nullptr)
{

inOrder(root->left);

inOrder(root->right);
cout << root->data;
}

}




};



int main()
{
    bST one;
    one.inser(2);
    one.inser(3);
    one.inser(4);
    one.inser(1);
    one.inser(0);
    one.inOrder(one.root);
    return 0;
}
