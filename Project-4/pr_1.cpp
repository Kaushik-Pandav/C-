#include<iostream>
using namespace std;
class  time
{
    int p,q,r,s;
    public:
    void setdata()
    {
        cout<<"Enter time in sec";
        cin>>p;
    }
    void setdata1()
    {
        cout<<"enter data in Time formate "<<endl;
        cout<<"Enter hour"<<endl;
        cin>>q;
        cout<<"Enter minite"<<endl;
        cin>>r;
        cout<<"Enter second"<<endl;
        cin>>s;
    }
    void getdata1()
    {
        cout<<"time in sec will be "<<(q*3600)+(r*60)+(s*1)<<endl;
    }
    void getdata()
    {
        int l=p/3600;
        int m=(p%3600)/60;
        int s=p-(l*3600)-(m*60);
        cout<<"time will be "<<l<<":"<<m<<":"<<s<<endl;
    }

};
int main()
{
    int h;
    time t;
    cout<<"enter 1 for sec to time "<<endl;
    cout<<"enter 2 for time to sec "<<endl;
    cin>>h;
    switch(h)
    {
        case 1:
            t.setdata();
            t.getdata();
            break;
        case 2:
            t.setdata1();
            t.getdata1();
            break;
        default:
            cout<<"invalid code"<<endl;
    }
}