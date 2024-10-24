#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;

    public:
    void setdata()
    {
        cout<<"Enter real part: ";
        cin>>a;
        cout<<"Enter imaginary part: ";
        cin>>b;
    }

    void operator -(complex c)
    {
        cout<<"after process the complex no is"<<endl;
        cout<<a-c.a<<" + "<<b-c.b<<"i"<<endl;
    }
};
int main()
{
    complex x;
    complex y;
    cout<<"Enter first complex no."<<endl;
    x.setdata();
    cout<<"Enter second complex no."<<endl;
    y.setdata();
    x-y;
}