#include <iostream>

using namespace std;

int rs;
int rt;
int rd;
int reg[32][1];
int instruction[100][32];



int* iMem(int index)
{
return instruction[index];
}



void rFile(int addrS, int addrT, int addD, bool write)
{

rs = reg[addrS][0];
rt = reg[addrT][0];

if(write==1)
{
//write();
}

}



int* ALU(int opcode)
{
    int *ptr= new int;

if (opcode==0)
{*ptr = rs+rt;
return ptr;}

if (opcode==1)
{*ptr = rs-rt;
return ptr;}

}


int dataMem(int *ptr, int write, int read)
{
if(read==1)
{
rs = *ptr;
}

if(write==1)
{
return *ptr;
}

if(read==0 && write == 0)
return 0;
}





int main()
{


    reg[4][0] = 25;
    reg[5][0] = 22;

    rFile(4 , 5, 0, 0);
    cout << rs << "\t" << rt;
return 0;
}
