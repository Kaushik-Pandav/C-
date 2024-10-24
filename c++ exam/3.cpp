#include<iostream>

using namespace std;

class animal
{
    public:
    string name;
    string sound;
    void setdata()
    {
        cout << "Enter the name of the Pet: ";
        cin >> name;
    }

    virtual void getdata()=0;
};
class dog:public animal
{
    public:
    void getdata(){
        cout << "Name: " << name << endl;
        cout << "Your pet will sound like Barks: Woof!" << endl;
    }
};

class cat:public animal
{
    public:
    void getdata()
    {
        cout << "Name: " << name << endl;
        cout << "Your pet will sound like Meows: Meow!" << endl;
    }
};
int main()
{
    dog d;
    cat c;
    animal *a=&d;
    animal *b=&c;
    cout<<"Press 1 for Dog details"<<endl;
    cout<<"Press 2 for Cat details"<<endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
            a->setdata();
            a->getdata();
            break;
        case 2:
            b->setdata();
            b->getdata();
            break;
        default:
            cout<<"Invalid Choice!";
    }
}