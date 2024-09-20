#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    if(n>51)
    {
        cout<<(n-51)*(n-51)*(n-51);
    }
    else
    {
        cout<<(51-n);
    }
}