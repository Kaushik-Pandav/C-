#include<iostream>
using namespace std;
class admin
{
    public:
    string cname;
    double mgsalary;
    double emsalary;
    int staff;
    double revenue;

    void myaccess(string a,double b,double c,int d,double e)
    {
        cname=a;
        mgsalary=b;
        emsalary=c;
        staff=d;
        revenue=e;
    }
    void display()
    {
        cout<<cname<<" "<<mgsalary<<" "<<emsalary<<" "<<staff<<" "<<revenue<<endl;
    }

};
class manager:public admin
{
    public:
    void myaccess(string a,double b,int c)
    {
        cname=a;
        mgsalary=b;
        staff=c;
    }
    void display()
    {
        cout<<cname<<" "<<mgsalary<<" "<<" "<<staff<<" "<<endl;
    }
    
};
class emp: public admin
{
    public:
    void myaccess(string a,double b)
    {
        cname=a;
        emsalary=b;
    }
    void display()
    {
        cout<<cname<<" "<<" "<<emsalary<<" "<<endl;
    }
};
main()
{
    int p;
    manager m;
    emp e;
    m.manager::myaccess("hello",50000,60);
    e.myaccess("hello",30000);
    e.admin::myaccess("hello",50000,30000,60,1000000);
    cout<<"1.admin"<<endl;
    cout<<"2.manager"<<endl;
    cout<<"3.employee"<<endl;
    cout<<"choose your type ";
    cin>>p;
    switch (p)
    {
        case 1:
            e.admin::display();
            break;
        case 2:
            m.display();
            break;
        case 3:
            e.emp::display();
            break;
        default:
            cout<<"invalid code!!!!";
    }
}
