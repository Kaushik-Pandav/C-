#include<iostream>
using namespace std;
class math
{
    public:
    void perf(int a,int b)
    {
        cout<<"division is "<<a/b<<endl;
    }
    void perf(int a, int b, int c)
    {
        cout<<"substration is "<<a-b-c<<endl;
    }
    void perf(int a,int b, int c,int d)
    {
        cout<<"multi is "<<a*b*c*d<<endl;
    }
    void perf(int a,int b, int c,int d,int e)
    {
        cout<<"addition is "<<a+b+c+d+e<<endl;
    }
};

int main()
{
    math m;
    m.perf(10,20);
    m.perf(10,20,30);
    m.perf(10,20,30,40);
    m.perf(10,20,30,40,50);
}
