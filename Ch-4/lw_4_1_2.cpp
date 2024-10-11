#include<iostream>
using namespace std;
class temp
{
    public:
    double t;
    void gettemp()
    {
        cout<<"Enter temp in Celcious: ";
        cin>>t;
    }
};
class fht: public temp
{
    public:
    void feranhit()
    {
        cout<<t<<" in feranhit is : "<<(1.8*t)+32<<"F"<<endl;
    }
};
class kel: public fht
{public:
    void kelvin()
    {
        cout<<t<<" in kelvin is : "<<t+273.15<<"K"<<endl;
    }
};
int main()
{
    kel k;
    k.gettemp();
    k.feranhit();
    k.kelvin();
}