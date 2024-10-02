#include<iostream>
using namespace std;

class customer 
{
    private :
    int id;
    string name;
    int age;
    long long int no;
    int year;
    string bname;

    
    public:
    void setdata ()
    {
        cout<<"Enter customer id: ";
        cin>>id;
        cout<<"Enter customer name: ";
        cin>>name;
        cout<<"Enter customer age:";
        cin>>age;
        cout<<"Enter customer no: ";
        cin>>no;
        cout<<"Enter customer year: ";
        cin>>year;
        cout<<"Enter customer card company name: ";
        cin>>bname;
    }
    void getdata()
    {
        cout<<"customer id is "<<id<<endl;
        cout<<"customer name is "<<name<<endl;
        cout<<"customer  age is "<<age<<endl;
        cout<<"customer mobile no is  "<<no<<endl;
        cout<<"customer year is "<<year<<endl;
        cout<<"customer card company name is  "<<bname<<endl;
    }
};
int main()
{
    customer c1;
    customer c2;
    customer c3;
    customer c4;
    customer c5;

    c1.setdata();
    c2.setdata();
    c3.setdata();
    c4.setdata();
    c5.setdata();

    cout<<"Here is details about customer:"<<endl;
    c1.getdata();
    cout<<"-------------------------------------"<<endl;
    c2.getdata();
    cout<<"-------------------------------------"<<endl;
    c3.getdata();
    cout<<"-------------------------------------"<<endl;
    c4.getdata();
    cout<<"-------------------------------------"<<endl;
    c5.getdata();
}