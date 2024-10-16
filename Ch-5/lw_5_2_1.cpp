#include<iostream>
using namespace std;
class math
{
    int a;
    int b;
    public:
    void setdata()
    {
        cout<<"enter value of a and b";
        cin>>a>>b;
    }
    void operator <(math m)
    {
        if(a<m.b)
        {
            cout<<"b is big"<<endl;
        }
        else{
            cout<<"a is big"<<endl;
        }
    }
};
int main()
{
    math m1;
    m1.setdata();
    m1.operator <(m1);
}