#include<iostream>
using namespace std ;

class car
{
    private:
    int id;
    string carname;
    string col;
    string model;
    int year;

    public:
    void etdtls()
    {
        cout<<"Enter car id: ";
        cin>>id;
        cout<<"Enter car company name: ";
        cin>>carname;
        cout<<"Enter car model: ";
        cin>>model;
        cout<<"Enter car regestration year: ";
        cin>>year;
    }
    void print()
    {
        cout<<"Car id="<<id<<endl;
        cout<<"Car Company name="<<carname<<endl;
        cout<<"Car color="<<col<<endl;
        cout<<"Car model="<<model<<endl;
        cout<<"Car lunched in ="<<year<<endl;
    }

};
int main()
{
    car c1;
    car c2;
    car c3;
    car c4;
    
    c1.etdtls();
    cout<<"-------------------------"<<endl;
    c2.etdtls();
    cout<<"-------------------------"<<endl;
    c3.etdtls();
    cout<<"-------------------------"<<endl;
    c4.etdtls();
    cout<<"-------------------------"<<endl;

    cout <<"here is details"<<endl; 
    c1.print();   
    cout<<"-------------------------"<<endl;
    c2.print();   
    cout<<"-------------------------"<<endl;
    c3.print();   
    cout<<"-------------------------"<<endl;
    c4.print();   
    cout<<"-------------------------"<<endl;
}
