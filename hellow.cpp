#include<iostream>
#include<conio.h>
int main()
{
    std :: cout <<"\nHow many rows and calumn you want to input\n";
    int a[1000][1000],i,j,R,C,Big,Small;
    std :: cin  >>R;
    std::cin  >>C;
    Big=0;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            if(Big<a[i][j])
            Big=a[i][j];
        }
    }
    std :: cout <<"\nBig Number of given 2D array is :\n"<<Big;
    Small=Big;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            if(Small>a[i][j])
            Small=a[i][j];
        }
    }
    std :: cout <<"\nSmall Number of given 2D array is :\n"<<Small;
    getch();
    return 0;
}