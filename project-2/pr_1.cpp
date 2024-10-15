#include<iostream>
using namespace std;
class Vehical
{
    int id;
    string menufecture;
    string model;
    int year;
    public:
    static int totalvehical;

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
    ~Vehical()
    {
        id=0;
        menufecture="";
        model="";
        year=0;
    }
};
class car:public Vehical
{
    
    public:
    int fueltype;
    void setdatacar()
    {
        setdata();
        cout<<"Enter 1 for EV"<<endl;
        cout<<"Enter 2 for flying car"<<endl;
        cout<<"Enter 3 for sedan"<<endl;
        cout<<"Enter 4 for suv"<<endl;
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
    void getdata()
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

    int n;
    void adddata()
    {   
        for(int i=0;i<Vehical::totalvehical;i++)
        {
            cout<<"Enter 1 for car and 2 for aircraf ";
            cin>>n;
            switch(n)
            {
                case 1:
                    cout<<"enter 1 for EV:"<<endl;
                    cout<<"enter 2 for Flying car:"<<endl;
                    cout<<"enter 3 for sedan car:"<<endl;
                    cout<<"enter 4 for SUV car :"<<endl;
                    cin>>c1[i].fueltype;
                    switch(c1[i].fueltype)
                    {
                        case 1:
                            e1[i].setdataev();
                            break;
                        case 2:
                            f1[i].setdatafc();
                            break;
                        case 3:
                            sd1[i].setdatasadan();
                            break;
                        case 4:
                            suv1[i].setdatasuv();
                        default :
                            cout<<"invalid code!!!!!"<<endl;
                    }
                case 2:
                    a1[i].setdataac();
                    break;
                default:
                    cout<<"invalid code!!!!!!!!";
            }
        }
    }
    void displayall()
    {
        for(int i=0;i<Vehical::totalvehical;i++)
        {
            if
        }
    }
    void display()
    {

    }
    
};
int Vehical::totalvehical=0;
int main()
{
    
    cout<<"enter no of vehicals :";
    cin>>Vehical::totalvehical;  
    regi r;  
    Vehical v[Vehical::totalvehical];
    r.adddata();
    int k;
    cout<<"enter 1 for dsplay add details "<<endl;
    cout<<"enter 2 to search by id ";
    cin>>k;
    if(k=1)
    {
        for(int i=0;i<Vehical::totalvehical;i++)
        {
            r.displayall();
        }
    }
    else if(k=2)
    {
        
    }

}