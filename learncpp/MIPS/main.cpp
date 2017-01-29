#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int addrs[5];
int addrt[5];
int addrd[5];
int opCode[6];
int shamt[5];
int funct[6];
int offset[16];

int rs;
int rt;
int rd;
int reg[32][32];
int instruction[3][6];
int inst[32];
int PC(0);


int binToDec(int a[], int length)
{

int x(0);
int temp = length-1;
for(int i = 0; i < length; ++i)
{

x += a[i] * pow(2,temp);
--temp;

}

return x;

}


int* iMem()
{

for(int i =0; i<32;++i)
{

inst[i] = instruction[PC][i];

}
++PC;
return inst;

}



void rFile(int addrS[], int addrT[], int addrD[], bool write)
{

rs = binToDec(addrS,5);

rt = binToDec(addrT,5);

rd = binToDec(addrD,5);


if(write==1)
{
//write();
}


}



int ALU(int opcode)
{

if (opcode==0)
{

return rs+rt ;

}

if (opcode==1)
{

return rs-rt;

}

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


void breakInstruction(int *instruction)
{

for (int i = 0; i<6;++i)
{

    opCode[i] = instruction[i];

}

for (int j = 6; j < 11; ++j)
{

    addrs[j] = instruction[j];

}

for (int k = 11; k < 16;++k)
{

    addrt[k] = instruction[k];

}

for (int l = 16; l < 21;++l)
{

    addrd[l] = instruction[l];

}

for (int m = 21; m < 26;++m)
{

    shamt[m] = instruction[m];

}

for (int n = 26 ; n < 32;++n)
{

    funct[n] = instruction[n];

}

for (int o = 16; o < 32; ++o)
{

    offset[o] = instruction[o];

}


}






int main()
{
int oP;
string input;
do
{
cout << "Enter an instruction: " ;
cin >> input;

for(int i = 0; i<32;++i)
instruction[PC][i] = (input[i]-48);


++PC;
}

while (PC != 3);

PC = 0;

do
{

int *temp = iMem();
breakInstruction(temp);
oP = binToDec(opCode,6);


}

while(PC != 3);

return 0;
}
