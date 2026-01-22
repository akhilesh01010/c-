// CALL BY VALUE
#include<iostream>
#include<conio.h>
using namespace std;
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"A = "<<x<<endl;
    cout<<"B = "<<y<<endl;    
}
void dividant(int a, int b)
{
    int mod;
    cout<<"Enter a number: ";cin>>a;
    cout<<"nter second number: ";cin>>b;
    mod=a/b;
}
int main()
{
    int a,b;
    cout<<"Enter first number: "<<endl; cin>>a;
    cout<<"Enter second number: "<<endl; cin>>b;
    
    cout<<"******ORIGINAL VALUES ARE******"<<endl;
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
    
    

    getch();
}