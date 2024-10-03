#include<iostream>
using namespace std;
class hotel{
    private :
    int id;
    string name;
    string type ;
    int rating;
    string city;
    int srating;
    int room;

    public:
    void setdata()
    {
        cout<<"enter hotel id: ";
        cin>>id;
        cout<<"enter hotel name:  ";
        cin>>name;
        cout<<"enter hotel type(hotel or motel) ";
        cin>>type;
        cout<<"enter hotel rating (1 star to 7 star): ";
        cin>>rating;
        cout<<"enter hotel city: ";
        cin>>city;
        cout<<"enter hotel staff rating (1 star to 7 star): ";
        cin>>srating;
        cout<<"enter Quantity of room : ";
        cin>>room;
    }

    void getdata()
    {
        cout<<"--------------------------------"<<endl;
        cout<<"Hotel id is : "<<id<<endl;
        cout<<"Hotel name is : "<<name<<endl;
        cout<<"Hotel type is : "<<type<<endl;
        cout<<"Hotel rating is : "<<rating<<"Star"<<endl;
        cout<<"Hotel city is : "<<city<<endl;
        cout<<"Hotel staff rating  is : "<<srating<<"Star"<<endl;
        cout<<"Quantity of room is  : "<<room<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter No of hotels :";
    cin>>n;

    hotel h[n];
    for(int i=0;i<n;i++)
    {
        h[i].setdata(); 
    }
    cout<<"here is data of hotels"<<endl;
    for(int i=0;i<n;i++)
    {
        h[i].getdata();
    }    
}