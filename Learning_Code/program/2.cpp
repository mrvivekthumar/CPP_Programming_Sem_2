// Explain Inline Function Using Suitable Exam.

#include<iostream>
using namespace std;
inline void cube(int a)   // inline Function Ma  Function Prototype Na Hoy. Direct Function Define J Thay.
{
    cout<<a*a*a;
}
int main()
{
    int n;
    cout<< "Enter The The Number To FInd The Cube : ";
    cin>>n;
    cube(n);
}
