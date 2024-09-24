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
    void etdtls(int eid,string ename,string ecol,string emodel,int eyear)
    {
        id=eid;
        carname=ename;
        col=ecol;
        model=emodel;
        year=eyear; 
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
    car c;
    c.etdtls(1,"NISSAN","RED","magnite",2025);
    c.print();
    cout<<"----------------------------------------------------"<<endl;
    c.etdtls(2,"NISSAN","white","micra",2445);
    c.print();
    cout<<"----------------------------------------------------"<<endl;
    c.etdtls(3,"RENAULT","YELLOW","KWID",2016);
    c.print();
    cout<<"----------------------------------------------------"<<endl;
    c.etdtls(4,"RENAULT","White","TRIBER",2022);
    c.print();
}
