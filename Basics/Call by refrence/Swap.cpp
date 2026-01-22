#include<iostream>
#include<conio.h>
using namespace std;
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    return;
}
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    swap(a,b);
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b;
    getch();
}