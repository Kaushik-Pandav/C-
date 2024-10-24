#include<iostream>
using namespace std;
class library
{
    string title;
    string author;
    string duedate;
    int id;
    public:
        void settitle(int a,string b,string c,string d)
        {
            id=a;
            title=b;
            author=c;
            duedate=d;
        }
        void getdata()
        {
            cout<<"Id :"<<id<<endl;
            cout<<"Title :"<<title<<endl;
            cout<<"Author :"<<author<<endl;
            cout<<"Duedate :"<<duedate<<endl;
        }
        int getid()
        {
            return id;
        }

        virtual void checkout()=0;
        virtual void returnitem()=0;
        virtual void display()=0;
};
class book:public library
{
    string booktype;
    bool c=true;
    public:
        void type(string a)
        {
            booktype=a;
        }
        void getbook()
        {
            getdata();
            cout<<"book type :"<<booktype;
        }
        bool borrow()
        {
            return c;
        }
};
class dvd:public library
{
    string type;
    bool d=true;
    public:
        void dtype(string a)
        {
            type=a;
        }
        void getdvd()
        {
            getdata();
            cout<<"DVD type :"<<type;
        }
        bool borrow()
        {
            return d;
        }

};
class mang:public library
{
    string typ;
    bool m=true;
    public:
        void mtype(string a)
        {
            typ=a;
        }
        void getm()
        {
            getdata();
            cout<<"Magzin Type :"<<typ;
        }
        bool borrow()
        {
            return m;
        }
};
int main()
{
    book *b[5];
    dvd *d[5];
    mang *m[5];
    b[0]->settitle(1,"hello","me","20thnov");
    b[1]->settitle(2,"hello2","me2","21thnov");
    b[2]->settitle(3,"hello3","me3","203thnov");
    b[3]->settitle(4,"hell4","m4","204hnov");
    b[4]->settitle(5,"hello5","me5","20thnov5");
    d[0]->settitle(1,"hello","me","25nov");
    d[1]->settitle(2,"hello2","me2","25nov2");
    d[2]->settitle(3,"hell3","m3","25no3");
    d[3]->settitle(4,"hello4","me4","25nov4");
    d[4]->settitle(1,"hello5","me5","25nov5");
    m[0]->settitle(1,"hello1","me1","20nov1");
    m[1]->settitle(2,"hello2","me1","20nov2");
    m[2]->settitle(3,"hello3","me3","20nov3");
    m[3]->settitle(4,"hello4","me4","20nov4");
    m[4]->settitle(5,"hello5","me5","20nov5");
    b[0]->type("horar");
    b[1]->type("novel");
    b[2]->type("fantasy");
    b[3]->type("magic");
    b[4]->type("happy");
    d[0]->dtype("movie");
    d[1]->dtype("music");
    d[2]->dtype("devotional");
    d[3]->dtype("movie");
    d[4]->dtype("music");
    m[0]->mtype("manual");
    m[1]->mtype("masik");
    m[2]->mtype("daily");
    m[3]->mtype("saptahik");
    m[4]->mtype("ardhmasik");
    int l;
    cout<<"Choose an option "<<endl;
    cout<<"press 1 for book "<<endl;
    cout<<"press 2 for dvd "<<endl;
    cout<<"press 3 for magzin "<<endl;
    cin>>l;
    switch(l)
    {
        case 1:
            int o;
            cout<<"press 1 to show all book"<<endl;
            cout<<"press 2 to borrow book"<<endl;
            cout<<"press 3 to return book"<<endl;
            cin>>o;
            switch(o)
            {
                case 1:
                    for(int i=0;i<5;i++)
                    {
                        b[i]->getbook();
                    }
                break;
                case 2:
                    int p;
                    cout<<"enter book id";
                    cin>>p;
                    for(int i=0;i<5;i++)
                    {
                        if(p==b[i]->getid())
                        {
                            if(b[i]->borrow()==true)
                            {
                                b[i]->borrow()==false;
                                cout<<"check out succefully"<<endl;
                            }
                            else
                            {
                                cout<<"book is not avilable"<<endl;
                                cout<<"thank you"<<endl;
                            }
                        }
                    }
                    break;
                case 3:
                    int h;
                    cout<<"enter book id";
                    cin>>h;
                    for(int i=0;i<5;i++)
                    {
                        if(h==b[i]->getid())
                        {
                            if(b[i]->borrow()==false)
                            {
                                b[i]->borrow()==true;
                                cout<<"thank you"<<endl;
                            }
                            else
                            {
                                cout<<"this is not our bokk or wrong id"<<endl;
                                cout<<"thank you"<<endl;
                            }
                        }
                    }
                    break;
            }
            break;
        case 2:
            int c;
            cout<<"press 1 to show all DVD"<<endl;
            cout<<"press 2 to borrow DVD"<<endl;
            cout<<"press 3 to return DVD"<<endl;
            cin>>c;
            switch(c)
            {
                case 1:
                    for(int i=0;i<5;i++)
                    {
                        d[i]->getdvd();
                    }
                break;
                case 2:
                    int p;
                    cout<<"enter book id";
                    cin>>p;
                    for(int i=0;i<5;i++)
                    {
                        if(p==d[i]->getid())
                        {
                            if(d[i]->borrow()==true)
                            {
                                d[i]->borrow()==false;
                                cout<<"check out succefully"<<endl;
                            }
                            else
                            {
                                cout<<"book is not avilable"<<endl;
                                cout<<"thank you"<<endl;
                            }
                        }
                    }
                    break;
                case 3:
                    int h;
                    cout<<"enter book id";
                    cin>>h;
                    for(int i=0;i<5;i++)
                    {
                        if(h==d[i]->getid())
                        {
                            if(d[i]->borrow()==false)
                            {
                                d[i]->borrow()==true;
                                cout<<"thank you"<<endl;
                            }
                            else
                            {
                                cout<<"this is not our DVD or wrong id"<<endl;
                                cout<<"thank you"<<endl;
                            }
                        }
                    }
                    break;
            }
            break;
        case 3:
            int y;
            cout<<"press 1 to show all magzin"<<endl;
            cout<<"press 2 to borrow magzin"<<endl;
            cout<<"press 3 to return magzin"<<endl;
            cin>>y;
            switch(y)
            {
                case 1:
                    for(int i=0;i<5;i++)
                    {
                        m[i]->getm();
                    }
                break;
                case 2:
                    int p;
                    cout<<"enter book id";
                    cin>>p;
                    for(int i=0;i<5;i++)
                    {
                        if(p==m[i]->getid())
                        {
                            if(m[i]->borrow()==true)
                            {
                                m[i]->borrow()==false;
                                cout<<"check out succefully"<<endl;
                            }
                            else
                            {
                                cout<<"book is not avilable"<<endl;
                                cout<<"thank you"<<endl;
                            }
                        }
                    }
                    break;
                case 3:
                    int h;
                    cout<<"enter book id";
                    cin>>h;
                    for(int i=0;i<5;i++)
                    {
                        if(h==m[i]->getid())
                        {
                            if(m[i]->borrow()==false)
                            {
                                m[i]->borrow()==true;
                                cout<<"thank you"<<endl;
                            }
                            else
                            {
                                cout<<"this is not our magzin or wrong id"<<endl;
                                cout<<"thank you"<<endl;
                            }
                        }
                    }
                    break;
            break;
        default:
            cout<<"wrong option";
        }
    }
}