#include<iostream>
using namespace std;
class Emp
{
    int id;
    string name;
    int age;
    long int salary;

    public:
        void setdata()
        {
            cout<<"enter employee id";
            cin>>id;
            cout<<"enter employee name";
            cin>>name;
            cout<<"enter employee age";
            cin>>age;
            cout<<"enter employee salary";
            cin>>salary;
        }
        void display()
        {
            cout<<"Employee id : "<<id<<endl;
            cout<<"Employee name : "<<name<<endl;
            cout<<"Employee age : "<<age<<endl;
            cout<<"Employee salary : "<<salary<<endl;
        }
};

class fulltime
{
    int bonus;
    public:
    Emp e;
    void st()
    {
        e.setdata();
        cout<<"Enter bonus : ";
        cin>>bonus;
    }
    void ds()
    {
        cout<<"employee is full time worker "<<endl;
        e.display();
        cout<<"Employee Bonus is : "<<bonus;
    }
};
class parttime
{
    int work;
    public:
    Emp e1;
    void stp()
    {
        e1.setdata();
        cout<<"enter worked hours: ";
        cin>>work;
    }
    void dsp()
    {
        cout<<"employee is part time worker "<<endl;
        e1.display();
        cout<<"Employee Total worked hours is "<<endl;
    }
};
int main()
{
    int a,n;
    cout<<"enter no of employee : ";
    cin>>n;
    cout<<"enter 1 for full time employee";
    cout<<"enter 2 for part time employee ";
    cin>>a;
    switch (a)
    {
    case 1:
        fulltime *f=new fulltime[n];
        for(int i=0;i<n;i++)
        {
            f->st();
            f++;
        }
        for(int i=0;i<n;i++)
        {
            f--;
            f->ds();
        }
        delete[] f;
        break;
    case 2:
        parttime *p=new parttime[n];
        for(int i=0;i<n;i++)
        {
            p->stp();
            p++;
        }
        for(int i=0;i<n;i++)
        {
            p--;
            p->dsp();
        }
        delete[] p;
        break;
    default:
        cout<<"enter valid number!!!!";
    }
}