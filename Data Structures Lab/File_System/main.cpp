#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct fileName{

string fileName;
string *fileData;

};


struct file{

fileName name;
string *vacantBlocks;
string inputData;

};


struct fileSystem
{

file newFile;
string fileNames[25];
bool nameExists = true;

void createFile(int &numFiles)
{
if(numFiles == 0)
{
cout << "Enter a name for your file: ";
getline(cin,newFile.name.fileName);

fileNames[0] = newFile.name.fileName;
numFiles++;
}

else
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


}


int displayFiles(int numFiles)
{

    if(numFiles == 0)
    cout << "No files currently exist." << endl;

    else
    {
    cout << "Files: \n";

for (int i = 0; i < numFiles; ++i)
{
cout << fileNames[i] << endl;
}

cout << "Enter the name of the file you want to open: ";
string n;
cin >> n;

bool matchFound = false;
for(int j = 0; j<numFiles; ++j)
{
    if(n == fileNames[j])
    {
        string content;
        ifstream output;
        output.open(fileNames[j]);
        getline(output, content);
        cout << "Contents of " << fileNames[j] << ": " << endl << content << endl;
        output.close();
        matchFound = true;
        break;
    }

}

if(matchFound == false)
{
cout << "No such file exists." << endl;
return 0;
}
}
return 0;
}



void addFile(int &numFiles)
{
    cout << "Enter the name of the file to copy: ";
    cin >> newFile.name.fileName;

    numFiles++;
    fileNames[numFiles] = newFile.name.fileName;

    cin.clear();
    cin.ignore(32767,'\n');

    cout << "Enter the full path of the file to copy: " << endl;
    string path;
    getline(cin,path);

    ifstream input;
    input.open(path);
    if (!input) std::cerr << "Could not open the file!" << std::endl;

    else
        {
            string content;
            getline(input, content);
            input.close();
            ofstream copied;
            copied.open(newFile.name.fileName);
            copied<<content;
            copied.close();
        }

}



void exportFile(int numFiles)
{
    string content;
    bool matchFound = false;
    cout << "Files: \n";

    for (int i = 0; i < numFiles; ++i)
    {
        cout << fileNames[i] << endl;
    }


    do
    {
        cout << "Enter the name of the file you want to export: ";
        string n;
        cin >> n;

        for(int j = 0; j < numFiles; ++j)
        {
            if(n == fileNames[j])
            {
                ifstream output;
                output.open(fileNames[j]);
                getline(output, content);
                output.close();
                matchFound = true;
                break;
            }

        }

        if(matchFound == false)
        {
            cout << "No such file exists.";
        }
    }

    while(matchFound == false);

    cin.clear();
    cin.ignore(32767,'\n');

    cout << "Enter the full path where you would like to export the file: ";
    string path;
    getline(cin,path);

    ofstream expor;
    expor.open(path);
    expor << content;
    expor.close();
}



void del(int &numFiles)
{
    bool matchFound = false;
    string name;
    string line;
    cout << "Enter the name of the file you want to delete: ";
    getline(cin, name);

    for(int i = 0; i < numFiles; ++i)
{

        if(name == fileNames[i])
    {

        --numFiles;
        remove(name.c_str());
        matchFound = true;

        ifstream del;
        del.open("fileNames.txt");

        ofstream temp;
        temp.open("temp.txt");

        while(getline(del,line))
    {
        if(line!=name)
            temp << line << endl;

    }

    del.close();
    temp.close();
    remove("fileNames.txt");
    rename("temp.txt","fileNames.txt");

        break;
    }

}

if(matchFound == false)
{
cout << "No such file exists." << endl;
}

}



void modify(int numFiles)
{
bool matchFound = false;
    string name;
    string line;
    cout << "Enter the name of the file you want to modify: ";
    getline(cin, name);

    for(int i = 0; i < numFiles; ++i)
{

        if(name == fileNames[i])
    {

        matchFound = true;
        ofstream mod;
        mod.open(name, ofstream::app);
        cout << "Enter the data that you want to add: " << endl;
        getline(cin, line);
        mod << " " << line;
        break;
    }

}

if(matchFound == false)
{
cout << "No such file exists.";
}

}

};


void readF(int &numFiles) //Reads number of files from a text file numFiles.txt
{
    string num;

    ifstream myfile;
    myfile.open("numFiles.txt");
    getline(myfile,num);

    numFiles = stoi(num); //Converts string num to an integer value

}


void writeF(int numFiles) //Writes new number of files to text file numFiles.txt
{
    ofstream myfile;
    myfile.open("numFiles.txt");
    myfile << numFiles;
}


void readArray(string *fileNames, int numFiles) //Reads the names of the files in the text file fileNames.txt
{
    fstream myfile;
    myfile.open("fileNames.txt");

    for(int i = 0; i < numFiles;++i)
    {
        string name;
        getline(myfile,name,'\n');
        fileNames[i] = name;

    }
}


void writeArray(string *fileNames, int numFiles) //Writes the name of new files to fileNames.txt
{
    fstream myfile;
    myfile.open("fileNames.txt", fstream::app);

    for(int i = numFiles; i <= numFiles; ++i)
    myfile << fileNames[i] << "\n";
}


int main()
{
    char a;
    int x;
    int numFiles(0);
    writeF(numFiles);
    readF(numFiles);

    fileSystem one;

    readArray(one.fileNames,numFiles);

    do{

    cout << "Welcome to this simple filesystem." << endl;
    cout << "You have 6 options to choose from. Enter:- " << endl;
    cout << "1 to create a new file" << endl << "2 to display all existing files" << endl << "3 to delete a file" << endl << "4 to copy an external file" << endl << "5 to export an existing file" << endl << "6 to modify an existing file" << endl;
    cin >> x;
    cin.clear();
    cin.ignore(32767,'\n');

    if(x == 1)
    {
    one.createFile(numFiles);
    writeArray(one.fileNames,numFiles);
    writeF(numFiles);
    }

    if(x == 2)
    {
    readF(numFiles);
    readArray(one.fileNames,numFiles);
    one.displayFiles(numFiles);
    }

    if(x == 3)
    {
    one.del(numFiles);
    writeF(numFiles);
    }

    if(x == 4)
    {
    one.addFile(numFiles);
    writeArray(one.fileNames,numFiles);
    writeF(numFiles);
    }

    if(x == 5)
    {
    one.exportFile(numFiles);
    }

    if(x == 6)
    {
    one.modify(numFiles);
    }

cout << "Would you like to perform another action? Y/N ";
    cin >> a;
    cout << endl << endl;
    }
    while(a == 'y' || a == 'Y');
    return 0;
}
