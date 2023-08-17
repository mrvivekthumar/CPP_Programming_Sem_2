// write UDF(User Define Function) To convert Lower-Case Character Of Given String To Upper-Case  and Upper-Case To Lower-case.

#include <iostream>
using namespace std;
int UpperToLower(char a[]);
int main()
{
    char s1[] = "vivEK";

    cout << "Before String Is = " << s1 << endl;

    UpperToLower(s1);

    cout << " After String Is = " << s1 << endl;

    // puts(s1);
}
int UpperToLower(char a[])
{
    for (int i = 0; i < a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 97)
        {
            a[i] += 32;
        }
        else
            a[i] -= 32;
    }
}
