#include<iostream>
using namespace std;
class cric {
    public:
    void gettotalovers()
    {
        cout<<"total overs could be 20 or 90 per day"<<endl;
    }
};
class t20
{
    public:
    void gettotalovers()
    {
        cout<<"if it is t20 match then overs is 20"<<endl;
    }
};
class test{
    public:
    void gettotalovers()
    {
        cout<<"if it is test match then overs is 90"<<endl;
    }
};
int main()
{
    cric c;
    c.gettotalovers();

    t20 t;
    t.gettotalovers();
    test t1;
    t1.gettotalovers();
}