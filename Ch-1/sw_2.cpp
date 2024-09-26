#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter lenth of array : ";
    cin>> a;
    int ar[a];
    cout<< "enter elements of array"<<endl;
    for(int i=0;i<a;i++)
    {
        cout <<" enter a["<<i<<"] : ";
        cin>>ar[i];
    }
    cout<<"the array is : ";
    for(int i=0;i<a;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<"enter a new element in the array"<<endl;
    cin>>ar[a+1];
    cout<<"now  the array is : ";
    for(int i=0;i<a+1;i++)
    {
        cout<<ar[i]<<" ";
    }
}