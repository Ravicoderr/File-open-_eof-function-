#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // declaring an object of the type ofstream
    ofstream ravi;
    // connecting the object ravi to the text file using the member function open()
    ravi.open("FileOutput.txt"); // using of open method to open the text file in programm
    // writing to the file
    ravi << "i am ravi\n";
    ravi << "i am king";
    // closing the file connection
    ravi.close();

    // declaring an object of the type ifstream
    ifstream cheeku;
    // declaring string variable s
    string s;
    // opening the text file into cheeku
    cheeku.open("FileOutput.txt");
    // giving output the string lines by storing in s until the file reaches the end of it
    while (cheeku.eof() == 0)
    {
        // using getline to fill the whole line in s
        getline(cheeku, s);
        cout << s << endl;
    }

    cheeku.close();

    return 0;
}