#include<iostream>
using namespace std;
class at
{   
    public:
    int a;
    int b;
    int c;
};
class cb : public at
{
    public:
    void setdata()
    {
        cout<<"Enter no 1: ";
        cin>>a;
        cout<<"enter No 2: ";
        cin>>b;
        cout<<"Enter No 3: ";
        cin>>c;
    }
    void getdata()
    {
        cout<<"Sum of all numbers cube is : "<<(a*a*a)+(b*b*b)+(c*c*c);
    }
};
int main()
{
    cb c;
    c.setdata();
    c.getdata();
}