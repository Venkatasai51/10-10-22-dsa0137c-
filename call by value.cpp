#include<iostream>
using namespace std;
void swap(int,int);
void swap(int a,int b)
{
        int c;
        c=a;
        a=b;
        b=c;
        cout<<"\n After Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
}
int main()
{
        int a,b;
        cout<<"Enter Value Of A :: ";
        cin>>a;
        cout<<"\nEnter Value of B :: ";
        cin>>b;
        cout<<"\nBefore Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
        swap(a,b);
}
