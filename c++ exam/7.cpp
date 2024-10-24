#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void area()=0;
    virtual void draw()=0;
};
class squre:public shape
{
    int s;
    public:
    void area()
    {
        cout<<"Enter the side of square: ";
        cin>>s;
        cout<<"Area of square: "<<s*s<<endl;
    }
    void draw()
    {
        cout<<"Drawing square"<<endl;
    }
};
class circle:public shape
{
    int r;
    public:
    void area()
    {
        cout<<"Enter the radius of circle: ";
        cin>>r;
        cout<<"Area of circle: "<<3.14*r*r<<endl;
    }
    void draw()
    {
        cout<<"Drawing circle"<<endl;
    }
};
int main()
{
    squre a;
    circle b;
    shape *s1=&a;
    shape *s2=&b;
    int x,y,z;
    cout<<"Press 1 for Circle"<<endl;;
    cout<<"Press 2 for Square"<<endl;;
    cin>>x;
    switch(x)
    {
        case 1:
        cout<<"Press 1 to find the area of circle"<<endl;
        cout<<"Press 2 to draw circle"<<endl;;
        cin>>y;
            switch(y)
            {
                case 1:
                    s2->area();
                break;
                case 2:
                    s2->draw();
                break;
                default:
                    cout<<"Invalid choice";
            }
        break;
        case 2:
        cout<<"Press 1 to find the area of square"<<endl;;
        cout<<"Press 2 to draw square"<<endl;;
        cin>>z;
            switch(z)
            {
                case 1:
                    s1->area();
                break;
                case 2:
                    s1->draw();
                break;
                default:
                    cout<<"Invalid choice";
            }
        break;
        default:
            cout<<"Invalid choice";
    }
}