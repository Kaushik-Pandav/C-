#include<iostream>
using namespace std;
class RBI
{
    public:
    long int a;
    
};
class SBI:public RBI
{
    public:
    void setdata()
    {
        cout<<"enter principal amt ";
        cin>>a;
    }
    void sbi()
    {
        cout<<"intrest on principal in sbi is :"<<(a*0.01)<<endl;
    }
};
class BOB:public RBI
{
    public:
    void setdata()
    {
        cout<<"enter principal amt ";
        cin>>a;
    }
    void bob()
    {
        cout<<"intrest on principal in bob is :"<<(a*0.012)<<endl;
    }

};
class ICICI:public RBI
{
    public:
    void setdata()
    {
        cout<<"enter principal amt ";
        cin>>a;
    }
        void icici()
        {
            cout<<"intrest on principal in icici is :"<<(a*0.015)<<endl;
        }

};
int main()
{
    SBI s;
    BOB b;
    ICICI i;
    int r;
    cout<<"press 1 for ROI of SBI: ";
    cout<<"press 2 for ROI of BOB: ";
    cout<<"press 3 for ROI of ICICI: ";
    cin>>r;
    switch(r)
    {
        case 1:
            s.SBI::setdata();
            s.sbi();
            break;
        case 2:
            b.BOB::setdata();
            b.bob();
            break;
        case 3:
            i.ICICI::setdata();
            i.icici();
        default:
            cout<<"ERROR ....... NOT found!!!!";
    }
       
    
    
}