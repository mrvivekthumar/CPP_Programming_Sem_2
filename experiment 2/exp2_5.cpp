// By Overloading The  Print() Function Display Variables Values Of Differnt Dat Type

#include <iostream>
using namespace std;
void print(int, int);
void print(float);
void print(char, char, char);

int main()
{
    print(5, 7);
    print(5.3);
    print('a', 'a', 'a');
}
void print(int a, int b)
{
    cout << a;
    cout << b << endl;
    ;
}
void print(float a)
{
    cout << a << endl;
}
void print(char a, char b, char c)
{
    cout << a << b << c << endl;
}
