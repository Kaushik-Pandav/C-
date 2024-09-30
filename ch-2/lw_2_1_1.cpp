#include<iostream>
using namespace std ;
class record
{
    private:
        int id;
        string name;
        int salary;
        string city;
        int exp;
        string cname;
    public:
    void etdtls()
    {
       cout<<"Enter employee id: ";
       cin>>id;
       cout<<"Enter employee name: ";
       cin>>name;
       cout<<"Enter employee salary: ";
       cin>>salary;
       cout<<"Enter employee city: ";
       cin>>city;
       cout<<"Enter employee previous complany name: ";
       cin>>cname;
    }
    void display()
    {
        cout<<"Employee id = "<<id<<endl;
        cout<<"Employee name = "<<name<<endl;
        cout<<"Employee salary = "<<salary<<endl;
        cout<<"Employee experience in years = "<<exp<<endl;
        cout<<"Employee  previous Compant name  = "<<cname<<endl;
    }
};
int main()
{
    record r1;
    record r2;
    record r3;
    record r4;
    record r5;

    r1.etdtls();
    r2.etdtls();
    r3.etdtls();
    r4.etdtls();
    r5.etdtls();
    
    cout<<"here is the enterd details: "<<endl;
    r1.display();
    cout<<"------------------------"<<endl;
    r2.display();
    cout<<"------------------------"<<endl;
    r3.display();
    cout<<"------------------------"<<endl;
    r4.display();
    cout<<"------------------------"<<endl;
    r5.display();
    cout<<"------------------------"<<endl;
}
