#include<iostream>
using namespace std;
class train
{
    int no;
    string tname;
    string source;
    string dest;
    string time;
    
    public:
    train()
    {
        no=0;
        tname="";
        source="";
        dest="";
        time="";         
    }
    train(int a,string b,string c,string d,string e)
    {
        no=a;
        tname=b;
        source=c;
        dest=d;
        time=e;
    }
    void inputtrain()
    {
       cout<<"Enter train no: ";
       cin>>no;
       cout<<"Enter train name: ";
       cin>>tname;
       cout<<"Enter train source: ";
       cin>>source;
       cout<<"Enter train destination: ";
       cin>>dest;
       cout<<"Enter train time: ";
       cin>>time;
    }
    void display()
    {
        cout<<no<<" "<<tname<<" "<<source<<" "<<dest<<""<<time<<endl;
    }  
}; 
int main()
{
    train t1(2345,"rajdhani","surat","mumbai","12:10");
    train t2(23445,"karnavati","mumbai","surat","11:00");
    train t3(2345,"garibrath","pune","mumbai","1:10");
}