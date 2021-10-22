#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
    //variable declaration
    ofstream outfile;
    ifstream infile;
    char fname1[10], fname2[20];
    char ch, uch;

    //user Input
    cout << "Enter a file name to be copied ";
    cin >> fname1;
    cout << "Enter new file name";
    cin >> fname2;
    infile.open(fname1);

    if (infile.fail())
    {
        cerr << " No such a file Exit";
        return 0;
    }
    outfile.open(fname2);
    if (outfile.fail())
    {
        cerr << "Unable to create a file";
        return 0;
    }
    while (!infile.eof())
    {
        ch = (char) infile.get();
        uch = (char) toupper(ch);
        outfile.put(uch);
    }
    infile.close();
    outfile.close();

    return 0;
}

/*
Output:
Enter a file name to be copied : old.txt
Enter new file name : new.txt
*/

