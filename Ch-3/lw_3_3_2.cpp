#include<iostream>
using namespace std;

class cafe
{
    private :
    string name;
    string type;
    int rat;
    string location;
    int year;
    int qty;


    public:
    cafe()
    {
        name="";
        type="";
        rat=0;
        location="";
        year=0;
        qty=0;
    }

    void set()
    {
        cout<<"enter cafe name :";
        cin>>name;
        cout<<"enter cafe tyep(fast food or motel): ";
        cin>>type;
        cout<<"enter cafe rating (in int): ";
        cin>>rat;
        cout<<"enter cafe city name: ";
        cin>>location;
        cout<<"enter cafe established year: ";
        cin>>year;
        cout<<"enter cafe staff quantity: ";
        cin>>qty;
    }

    void get()
    {
        cout<<"cafe name : "<<name<<endl;
        cout<<"cafe tyep : "<<type<<endl;
        cout<<"cafe rating is  : "<<rat <<endl;
        cout<<"cafe located in : "<<location<<endl;
        cout<<"cafe established in  : "<<year<<endl;
        cout<<"staff in this cafe is  : "<<qty<<endl;

    }
};
int main()
{
    int n;
    cout<<"enter no of cafe :";
    cin>>n;
    cafe c[n];
    for(int i=0;i<n;i++)
    {
        c[i].set();
    }
    for(int i=0;i<n;i++)
    {
        c[i].get();
    }   
}