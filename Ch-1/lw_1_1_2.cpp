#include<iostream>
using namespace std;

int main()
{   
    int a,b;
    cout<<"enter first year :";
    cin>>a;
    cout<<"enter last year :";
    cin>>b;
    cout<<"leap year between "<<a<<" and "<<b<<" is ";
    for(int i=a;i<=b;i++)
    {
        if(i%4==0)
        {
            cout<<i<<",";
        }
    }
}