#include<iostream>
using namespace std;
class car
{
    
    public:
    string fueltype;
    void setdatacar()
    {
        cout<<"Enter fuel type";
        cin>>fueltype;
    }
    void getdatacar()
    {
        cout<<"vehicals fuel type is :"<<fueltype;
    }
};
class electriccar
{
    int battrycap;
    public:
    void setdataev()
    {
        cout<<"enter battry capicity: ";
        cin>>battrycap;
    }
    void getdataev()
    {
        cout<<"Ev's battry capicity is : "<<battrycap<<endl;
    }
};
class aircraft
{
    
    public:
    int flightrange;
    void setdataac()
    {
        cout<<"enter flight range: ";
        cin>>flightrange;
    }
    void getdataac()
    {
        cout<<"vehical flight range is :"<<flightrange<<endl;
    }
};
class flyingcar:public aircraft
{    
    public:
    void setdatafc()
    {
        cout<<"enter flight range: ";
        cin>>flightrange;
    }
    void getdatafc()
    {
        cout<<"this is flying car "<<endl;
    }
};
class sportscar
{
    int topspeed;
    public:
    void setdataspcar()
    {
        cout<<"enter top speed of car :";
        cin>>topspeed;
    }
    void getdatspcar()
    {
        cout<<"top speed of car is : "<<topspeed<<endl;
    }
};
class sedan
{
    public:
    void setdatasadan()
    {
        cout<<"You selected sedan"<<endl;
    }
    void getdatasadan()
    {
        cout<<"your car type is sedan "<<endl;
    }
};

class SUV
{
    public:
    void setdatasuv()
    {
        cout<<"You selected SUV "<<endl;
    }
    void getdatasuv()
    {
        cout<<"your car type is SUV "<<endl;
    }
};
class Vehical:public car,public electriccar,public aircraft,public flyingcar,public sportscar,public sedan,public SUV
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
class regi
{
    public:
    Vehical v[100];
    
    void adddata()
    {
        for(int i=0;i<Vehical::totalvehical;i++)
        {
            int n;
            cout<<"Enter 1 to electric car"<<endl;
            cout<<"Enter 2 to add aircraft"<<endl;
            cout<<"Enter 3 to add flyingcar"<<endl;
            cout<<"Enter 4 to add sportscar"<<endl;
            cout<<"Enter 5 to add sedan"<<endl;
            cout<<"Enter 6 to add SUV"<<endl;
            cin>>n;
            v[i].setdata();
                switch(n)
                {
                    case 1:
                        v[i].setdataev();
                        break;
                    case 2:
                        v[i].setdatafc();
                        break;
                    case 3:
                        v[i].setdatafc();
                        break;
                    case 4:
                        v[i].setdataspcar();
                        break;
                    case 5:
                        v[i].setdatasadan();
                        break;
                    case 6:
                        v[i].setdatasuv();
                        break;
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
        for(int i=0;i<Vehical::totalvehical;i++)
        {
            if(v[i].getid()==a)
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
   int f;
    do{
        int k;
        cout<<"enter 1 to add vehical " <<endl;
        cout<<"enter 2 for display all details "<<endl;
        cout<<"enter 3 to search by id ";
        cin>>k;
        switch(k)
        {
            case 1:
                cout<<"enter no of vehicals :";
                cin>>Vehical::totalvehical;
                r.adddata();
                break;
            case 2:
                r.displayall();
                break;        
            case 3:
                int p;
                cout<<"enter id";
                cin>>p;
                r.search(p);
                break;
            default:
                cout<<"Wrong data";       
        }
        cout<<"press 1 to continue and 0 to exit ";
        cin>>f;
    }while(f!=0);
}