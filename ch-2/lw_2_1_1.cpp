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
    void etdtls(int eid,string ename,int esalary,int eexp,string ecname)
    {
        id=eid;
        name=ename;
        salary=esalary;
        exp=eexp;
        cname=ecname; 
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
    record r;
    r.etdtls(1,"yug",2345,3,"hello"); 
    r.display();
    cout<<"----------------------------------------------------"<<endl;
    r.etdtls(2,"g",25,4,"hlo"); 
    r.display();
    cout<<"----------------------------------------------------"<<endl;
    r.etdtls(4,"fedg",545,445,"dfqwehlo"); 
    r.display();
    cout<<"----------------------------------------------------"<<endl;
    r.etdtls(41,"swfg",4525,46,"dvswbrthlo"); 
    r.display();
    cout<<"----------------------------------------------------"<<endl;
    r.etdtls(25,"eg",5825,545744,"fqwefhlo"); 
    r.display();
}
