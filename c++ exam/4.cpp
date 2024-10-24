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
    virtual void display()=0;
};
class dog:public animal
{
    public:
    void getdata(){
        cout << "Name: " << name << endl;
        cout << "Your pet will sound like Barks: Woof!" << endl;
    }
    void display()
    {
        cout<<"Your pet is "<<name<<endl;
        cout<<"your pet will Barks!" << endl;
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
    void display()
    {
        cout<<"Your pet is "<<name<<endl;
        cout<<"your pet will Meow!" << endl;
    }
};
int main()
{
    int n;
    cout<<"Enter total no of animal";
    cin>>n;
    dog d[n];
    cat c[n];
    animal *a=&d[0];
    animal *b=&c[0];
    cout<<"Press 1 for Dog details"<<endl;
    cout<<"Press 2 for Cat details"<<endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
            for(int i=0;i<n;i++)
            {
                a=&d[i];
                a->setdata();
                a++;
            }
            for(int i=0;i<n;i++)
            {
                a--;
                a->getdata();
            }
            break;
        case 2:
            for(int i=0;i<n;i++)
            {
                b=&c[i];
                b->setdata();
                b++;
            }
            for(int i=0;i<n;i++)
            {
                b--;
                b->getdata();
            }
            break;
        default:
            cout<<"Invalid Choice!";
    }
}