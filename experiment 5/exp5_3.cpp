#include <iostream>
using namespace std;
int main()
{
     string s1("abcdefg");
     string s2("12345");

     s1.insert(2, s2);
     cout << s1 << endl
          << endl;

     s1.erase(2, 3);
     cout << s1 << endl
          << endl;

     s1.replace(3, 3, s2);
     cout << s1 << endl
          << endl;

     cout << s1.size() << endl
          << endl;

     int x = s1.compare(2, 5, s2);
     cout << x << endl
          << endl;

     cout << s2.length() << endl
          << endl;

     s1.swap(s2);

     cout << s1 << endl
          << endl;

     return 0;
}