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
    static int count;
    train()
    {
        no=0;
        tname="";
        source="";
        dest="";
        time="";         
    }
    ~train()
    {
        count--;
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
        cout<<no<<" "<<tname<<" "<<source<<" "<<dest<<" "<<time<<endl;
    }  
    int getno()
    {
        return no;
    }
}; 
int train::count=0;
class systemrecord
{
    train t[100];
    public:
    void addtrain()
    {
        for(int i=0;i<train::count;i++)
        {
            t[i].inputtrain();
        }

    }
    void displaytrain()
    {
        for(int i=0;i<train::count;i++)
        {
            t[i].display();
        }
    }
    void search(int a)
    {
        for(int i=0;i<train::count;i++)
        {
            if(t[i].getno()==a)
            {
                displaytrain();
            }
        }
    }

};
int main()
{   
    systemrecord s;
    int a;
    cout<<"enter total no of train";
    cin>>train::count;
    s.addtrain();
    cout<<"---railway reservation system---"<<endl;
    cout<<"Press 1 for display all train"<<endl;
    cout<<"Press 2 for search by train "<<endl;
    cout<<"Press 3 for exit "<<endl;
    cin>>a;
      switch(a){
        case 1:
            s.displaytrain();
            break;
        case 2:
            int tno;
            cout<<"enter train no ";
            cin>>tno;
            s.search(tno);
            break;
        default:
            cout<<"Thank you !!!!!!!!";
      }
}