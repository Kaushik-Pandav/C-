#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter lenth of arry ";
   cin>>n;
   int ar[n];
   cout<<"enter elements of arry"<<endl;
   for(int i=0;i<n;i++)
    {
        cout<<"enter ar["<<i<<"]= ";
        cin>>ar[i];
    }
    cout <<"even elements in this array is ";
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
            cout<<ar[i]<<",";
        }
    }
}