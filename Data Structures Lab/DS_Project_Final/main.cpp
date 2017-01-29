#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct fileNameADT          //One Instance Takes 500 Bytes
{
	char fileName[496];
	int fileAddress;
	fileNameADT()
	{
		fileAddress = -1;
		for (int i = 0; i < 495; i++)
			fileName[i] = '0';
	}
};


struct AddressADT    //One Instance Takes 4 Bytes
{
	int address;
	AddressADT()
	{
		address = -1;
	}
};


struct FileADT     //One Instance Takes 1024 Bytes
{
	char fileContent[1020];
	int Concatenated_Address;
	bool isEmpty;
	FileADT()
	{
		Concatenated_Address = -1;
		isEmpty = true;
		for (int i = 0; i < 1020; i++)
			fileContent[i] = '0';
	}
};

struct Virtual_File_System    // One Instance Takes 10 MB
{
	fileNameADT FirstPartition[2098]; //This Array takes slightly above 1MB (Ceiling Function)
	AddressADT SecondPartition[262144]; //This Array takes complete 1MB
	FileADT ThirdPartition[8192];   //This Array takes complete 8MBs
    bool nameExists = true;



    void createFile(int &numFiles)
{
if(numFiles == 0)
{
string name;
cout << "Enter a name for your file: ";
getline(cin,name);
for(uint i = 0; i < name.length();++i)
FirstPartition[0].fileName[i] = name[i];
numFiles++;
}

/*else
{
    do
    {
    cout << "Enter a name for your file: ";
    getline(cin,newFile.name.fileName);

for(int i = 0; i < numFiles; ++i)
{
    if(newFile.name.fileName == fileNames[i])
    {
        nameExists = true;
        cout << "That name already exists, Choose another name."<< endl;
        break;
    }
    nameExists = false;
}

}
while(nameExists == true);

numFiles++;

}


fileNames[numFiles] = newFile.name.fileName;

ofstream createFile;
createFile.open(newFile.name.fileName);

cout << "Enter the data to be written to your file: " << endl;

getline(cin, newFile.inputData);

createFile << newFile.inputData;
*/











}





};












int main()
{
    int numFiles(0);
    Virtual_File_System one;


   // one.createFile(numFiles);







    return 0;
}
