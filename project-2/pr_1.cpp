#include<iostream>
using namespace std;
class Vehical
{
    
    string menufecture;
    string model;
    int year;
    public:
    static int totalvehical;
    int id;
    Vehical()
    {
        id=0;
        menufecture="";
        model="";
        year=0;
    }

    void setdata()
    {
        cout<<"enter vehical id :";
        cin>>id;
        cout<<"enter vehical menufecturer :";
        cin>>menufecture;
        cout<<"enter vehical model :";
        cin>>model;
        cout<<"enter vehical year :";
        cin>>year;
    }
    void getdata()
    {
        cout<<"your vehical id is : "<<id<<endl;
        cout<<"menufecturer is : "<<menufecture<<endl;
        cout<<"vehical model is : "<<model<<endl;
        cout<<"vehical year is : "<<year<<endl;
    }
    int getid()
    {
        return id;
    }
};
class car:public Vehical
{
    
    public:
    string fueltype;
    void setdatacar()
    {
        setdata();
        cout<<"Enter fuel type";
        cin>>fueltype;
    }
    void getdatacar()
    {
        getdata();
        cout<<"vehicals fuel type is :"<<fueltype;
    }
};
class electriccar:public car
{
    int battrycap;
    public:
    void setdataev()
    {
        setdatacar();
        cout<<"enter battry capicity: ";
        cin>>battrycap;
    }
    void getdataev()
    {
        getdatacar();
        cout<<"Ev's battry capicity is : "<<battrycap<<endl;
    }
};
class aircraft:public Vehical
{
    
    public:
    int flightrange;
    void setdataac()
    {
        setdata();
        cout<<"enter flight range: ";
        cin>>flightrange;
    }
    void getdataac()
    {
        getdata();
        cout<<"vehical flight range is :"<<flightrange<<endl;
    }
};
class flyingcar:public car,public aircraft
{    
    public:
    void setdatafc()
    {
        setdataac();
    }
    void getdatafc()
    {
        cout<<"this is flying car "<<endl;
        getdataac();
    }
};
class sportscar:public electriccar
{
    int topspeed;
    public:
    void getdataspcar()
    {
        setdataev();
        cout<<"enter top speed of car :";
        cin>>topspeed;
    }
    void getdatspcar()
    {
        getdataev();
        cout<<"top speed of car is : "<<topspeed<<endl;
    }
};
class sedan: public car
{
    public:
    void setdatasadan()
    {
        cout<<"You selected sedan"<<endl;
        setdatacar();
    }
    void getdatasadan()
    {
        cout<<"your car type is sedan "<<endl;
        getdatacar();
    }
};

class SUV:public car
{
    public:
    void setdatasuv()
    {
        cout<<"You selected SUV "<<endl;
        setdatacar();
    }
    void getdatasuv()
    {
        cout<<"your car type is SUV "<<endl;
        getdatacar();
    }
};
class regi
{
    public:
    car c1[100];
    electriccar e1[100];
    aircraft a1[100];
    flyingcar f1[100];
    sportscar s1[100];
    sedan sd1[100];
    SUV suv1[100];
    Vehical v[100];
    
    void adddata()
    {
        int n;
        for(int i=0;i<Vehical::totalvehical;i++)
        {
            cout<<"Enter 1 to add vehical of any type "<<endl;
            cout<<"Enter 2 to add car"<<endl;
            cout<<"enter 3 for EV:"<<endl;
            cout<<"enter 4 for Flying car:"<<endl;
            cout<<"enter 5 for sedan car:"<<endl;
            cout<<"enter 6 for SUV car :"<<endl;
            cout<<"Enter 7 to add aircraft: "<<endl;
            cin>>n;
            switch(n)
            {
                case 1:
                    v[i].setdata();
                    break;
                case 2:
                    c1[i].setdatacar();
                    break;
                case 3:
                    e1[i].setdataev();
                    break;
                case 4:
                    f1[i].setdatafc();
                    break;
                case 5:
                    sd1[i].setdatasadan();
                    break;
                case 6:
                    suv1[i].setdatasuv();
                    break;
                case 7:
                    a1[i].setdataac();
                    break;
                default:
                    cout<<"Invalid code!!!!"<<endl;
            }
        }
    }
    void displayall()
    {
        for(int i=0;i<Vehical::totalvehical;i++)
        {
            v[i].getdata();
        }
    }
    
    void search(int a)
    {
        int l;
        for(int i=0;i<Vehical::totalvehical;i++)
        {
            l=v[i].getid();
            if(l==a)
            {
                v[i].getdata();
            }
        }
    }
};
int Vehical::totalvehical;
int main()
{
    regi r;
    cout<<"enter no of vehicals :";
    cin>>Vehical::totalvehical;
    r.adddata();
    int k;
    cout<<"enter 1 for display all details "<<endl;
    cout<<"enter 2 to search by id ";
    cin>>k;
    switch(k)
    {
        case 1:
            r.displayall();
            break;        
        case 2:
            int p;
            cout<<"enter id";
            cin>>p;
            r.search(p);
            break;
        default:
            cout<<"Wrong data";       
    }
}