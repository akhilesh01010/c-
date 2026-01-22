#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a=0,b=1,next;
    cout<<a<<" "<<b;
    for(int i=2; i<n; i++)
    {
        next=a+b;
        a=b;
        b=next;
        cout<<" "<<next;
    }
return 0;
}
