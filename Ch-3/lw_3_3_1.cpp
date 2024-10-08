#include<iostream>
using namespace std;

class comp{
    int id;
    string name;
    int qty;
    int rev;
    int imp;
    int exp;
    string ceo;


    public:
        comp(int a, string b , int c, int d,int e ,int f ,string g)
        {
            id=a;
            name=b;
            qty=c;
            rev=d;
            imp=e;
            exp=f;
            ceo=g;
        }

    void disply()
    {
        cout<<"company id : "<<id<<endl;
        cout<<"company name : "<<name<<endl;
        cout<<"company staff qty : "<<qty<<endl;
        cout<<"company revnue : "<<rev<<endl;
        cout<<"company imported diamonds : "<<imp<<endl;
        cout<<"company exported diamonds  : "<<exp<<endl;
        cout<<"company ceo  : "<<ceo<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter no of company :";
    cin>>n;

    
}
