#include<iostream>
using namespace std;
class train
{
    int no;
    string tname;
    string source;
    string dest;
    string time;
    static int count;


    public:
    train()
    {
        no=0;
        source="";
        dest="";
        time="";         
    }
    ~train()
    {
        count=NULL;
    }
    void inputtrain(int a,  string b, string c, string d,string r)
    {
        no=a;
        tname=b;
        source=c;
        dest=d;
        time=r;
    }
    void display()
    {
        cout<<no<<" "<<tname<<" "<<source<<" "<<dest<<endl;
    }
    static int gettraincount()
    {
        return count;
    }  
};
class system
{
    public:
    void addtrain()
    {

    }
};
int main()
{
    int n=3;
    train t[3];
    t[0].inputtrain(2325,"rajdhani","surat","mumbai","12:10");
    t[1].inputtrain(25325,"garibrath","mumbai","delhi","11:10");
    t[3].inputtrain(23425,"karnavati","surat","mumbai","01:10");

}