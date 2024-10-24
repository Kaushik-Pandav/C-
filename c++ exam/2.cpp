#include<iostream>

using namespace std;

class person
{
    string name;
    int age;
    string address;

    public:
        void setdata()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter address: ";
            cin>>address;
        }
        void getdata()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Address: "<<address<<endl;
        }
};
int main()
{
    int n;
    cout<<"Enter the number of persons: ";
    cin>>n;
    person p[n];
    for(int i=0;i<n;i++)
    {
       p[i].setdata();
    }
    cout<<"Details of all persons:"<<endl;
    for(int i=0;i<n;i++)
    {
        p[i].getdata();
        cout<<endl;
    }
}