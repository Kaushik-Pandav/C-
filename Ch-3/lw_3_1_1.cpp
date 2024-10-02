#include<iostream>
using namespace std;

class student
{
    private :
    int id;
    string name;
    int age;
    string course;
    string city;
    string email;
    string collage;

    public:
    void setdata ()
    {
        cout<<"Enter student id: ";
        cin>>id;
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter student age: ";
        cin>>age;
        cout<<"Enter student course: ";
        cin>>course;
        cout<<"Enter student city: ";
        cin>>city;
        cout<<"Enter student email: ";
        cin>>email;
        cout<<"Enter student collage: ";
        cin>>collage;
    }
    void getdata()
    {
        cout<<"Student id is "<<id<<endl;
        cout<<"Student name is "<<name<<endl;
        cout<<"Student id age "<<age<<endl;
        cout<<"Student id course "<<course<<endl;
        cout<<"Student id city "<<city<<endl;
        cout<<"Student id email "<<email<<endl;
        cout<<"Student id collage "<<collage<<endl;
    }
};
int main()
{
    student s1;
    student s2;
    student s3;
    student s4;
    student s5;
    
    s1.setdata();
    s2.setdata();
    s3.setdata();
    s4.setdata();
    s5.setdata();

    cout<<"here is the details for student"<<endl;

    s1.getdata();
    cout<<"-------------------------------------"<<endl;
    s2.getdata();
    cout<<"-------------------------------------"<<endl;
    s3.getdata();
    cout<<"-------------------------------------"<<endl;
    s4.getdata();
    cout<<"-------------------------------------"<<endl;
    s5.getdata();

}