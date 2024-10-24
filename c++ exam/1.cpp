#include<iostream>
using namespace std;
class book
{
    string title;
    string author;
    int pubyear;

    public:
    void setdata()
    {
        cout<<"Enter title: ";
        cin>>title;
        cout<<"Enter author: ";
        cin>>author;
        cout<<"Enter published year: ";
        cin>>pubyear;
    }

    void getdata()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Published Year: "<<pubyear<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter totalno of books:";
    cin>>n;
    book b[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter details for Book No :"<<i+1<<endl;
        b[i].setdata();
        cout<<endl;
    }  
    cout<<"Details of all books are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Book No :"<<i+1<<endl;
        b[i].getdata();
    }
}