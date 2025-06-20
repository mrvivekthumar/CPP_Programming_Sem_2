#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string line;
    int lineCount = 0, wordCount = 0, charCount = 0;

    cout << "Enter text below (end input with Ctrl+Z in Windows or Ctrl+D in Linux/Mac):\n";

    while (getline(cin, line))
    {
        ++lineCount;
        charCount += line.length();

        istringstream iss(line);
        string word;
        while (iss >> word)
        {
            ++wordCount;
        }
    }

    // Displaying results in two columns
    cout << "\n"
         << left << setw(20) << "LINES" << right << setw(10) << lineCount << endl;
    cout << left << setw(20) << "WORDS" << right << setw(10) << wordCount << endl;
    cout << left << setw(20) << "CHARACTERS" << right << setw(10) << charCount << endl;

    return 0;
}
