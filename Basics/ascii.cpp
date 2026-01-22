#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter Starting number:\n";
    cin>>x;
    cout<<"Enter Last number: \n";
    cin>>y;
    cout<<endl;
    if(x<y)
    {
        for(int i=x; i<=y; i++){
            char ch= (char)i;
            cout<<i<<" "<<ch<<endl;
        }
    }
    if(x>y)
    {
        for(int i=x; i>=y; i--){
            char ch=(char)i;
            cout<<i<<" "<<ch<<endl;
        }
    }
   if(x==y){
    cout<<"Entered Starting and ending point is same";
   }
}