#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    int b;
    int c;
    int d;

    void setdata1()
    {
        cout<<"enter 1st no";
        cin>>a;
        cout<<"enter 4th no";
        cin>>d;

    }
};
class B: public A
{
    public:
        void setdata()
        {
            cout<<"enter 3rdst no";
            cin>>b;
        }
};
class C: public A
{
    public:
    void setdata()
    {

        cout<<"enter 2nd no";
        cin>>c;
    }
};
class D: public B, public C
{
    public:
    void sum()
    {   
        cout<<"sum of four numbers = "<<B::a+B::d+B::b+C::c;
    }
};
int main()
{
    D d;
    d.B::setdata1();
    d.B::setdata();
    d.C::setdata();
    d.sum();
}