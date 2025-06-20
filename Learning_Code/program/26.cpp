#include <iostream>
using namespace std;
class Student
{
public:
    int TotalStudents;
};
static int TotalStudents = 5;
int main()
{
    cout << TotalStudents << endl;
}