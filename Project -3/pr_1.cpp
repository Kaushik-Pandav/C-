#include<iostream>
using namespace std;
class Bank
{
    public:
    string acname;
    string acholdername;
    double balance;

    void addinfo()
    {
        cout<<"enter account name ";
        cin>>acname;
        cout<<"Enter account holder name ";
        cin>>acholdername;
        cout<<"Enter starting belence ";
        cin>>balance;
    }
    double deposite(double a)
    {
        balance=balance+a;
        return balance;
    }
     
    double withdraw(double a)
    {
        if(a>balance)
        {
            cout<<"balance is low"<<endl;
            return balance;
        }
        else
        {
            balance=balance-a;
            return balance;
        }
    }
    double getbalance()
    {
        return balance;
    }
    void displayacinfo()
    {
        cout<<"Account name = "<<acname<<endl;
        cout<<"Account Holder name = "<<acholdername<<endl;
        cout<<"balance = "<<balance<<endl;        
    }
    double withdraw1(double a)
    {
        balance=balance-a;
        return balance;
    }
};
class sb:public Bank
{
    
    public:
    float intrestrate=4;
    void addinfosb()
    {
        addinfo();

    }
        void displayacinfosb()
        {
            cout<<"Your account type is Savings"<<endl;
            displayacinfo();
            cout<<"Your intrest rate is "<<intrestrate;
        }
        void calculateintrest()
        {
            cout<<"Your intrest will be "<<(balance*0.01*intrestrate)<<"Rs per year";
        }
};
class cb:public Bank
{
    double overdarftlmt=100000;
    public:
    void addinfocb()
    {
        addinfo();
        cout<<"You have to maintain mnimum 50000 in account"<<endl;
    }
    void dissplayacinfocb()
    {
        cout<<"Your account type is Current"<<endl;
        displayacinfo();
    }
    void checkoverdraft()
    {
        long double a;
        cout<<"enter ammount that you wanted to withdraw";
        cin>>a;
        double p=withdraw1(a);
        if(p<-100000)
        {
            cout<<"You can not Withdraw that amount "<<endl;
            cout<<"Your overdraftlimit is 100000 per day"<<endl;
        }
        else
        {
            cout<<"Amt "<<a<<" Has been Withdrawn Successfully "<<endl;
            cout<<"Your balance is "<<p<<endl;
        }
    }
};
class fd:public Bank
{
    
    int terms;
    public:
    void addinfofd()
    {
        addinfo();
        cout<<"Enter terms in month ";
        cin>>terms;
    }
    void displayacinfofd()
    {
        cout<<"your accpunt type is FD"<<endl;
        displayacinfo();
    }
    void calculateintrest()
    {
        cout<<"Your intrest in FD will be "<<(balance*0.07*terms)<<endl;
    }
};
main()
{
    sb s1;
    cb c1;
    fd f1;
    int k;
    int l;
    int o,b,v,h;
    int m;
    int s;
    int n;
    int u;
    int f;
    cout<<"Enter 1 for Savings bank accout "<<endl;
    cout<<"Enter 2 for Current bank accout "<<endl;
    cout<<"Enter 3 for Fixed deposite "<<endl;
    cin>>k;
    switch(k)
    {
        case 1:
            s1.addinfosb();
            int p;
            cout<<"enter 1 for Dispay account details:"<<endl;
            cout<<"enter 2 for wihtdraw ammount "<<endl;
            cout<<"Enter 3 for deposite ammount "<<endl;
            cin>>p;
            switch(p)
            {
                case 1:
                    s1.displayacinfosb();
                    break;
                case 2:
                    
                    cout<<"Enter amt ";
                    cin>>l;
                    b=s1.withdraw(l);
                    cout<<"amt "<<l<<" Withdrawn succes";
                    cout<<"your balance is"<<b<<endl;
                    break;
                case 3:
                    
                    cout<<"Enter amt ";
                    cin>>o;
                    s1.deposite(o);
                    cout<<"Amt "<<o<<" had been deposited succefully"<<endl;
                    cout<<"your updated balance is "<<s1.getbalance();
                    break;
                default:
                    cout<<"invalid code !!!!";
            }
            break;
        case 2:
            c1.addinfocb();
            int g;
            cout<<"Enter 1 for Dispay account details:"<<endl;
            cout<<"Enter 2 for wihtdraw ammount "<<endl;
            cout<<"Enter 3 for deposite ammount "<<endl;
            cout<<"Enter 4 for overdraft facility"<<endl;
            cin>>g;
            switch(g)
            {
                case 1:
                    c1.dissplayacinfocb();
                    break;
                case 2:
                   
                    cout<<"Enter amt ";
                    cin>>m;
                    v=c1.withdraw(m);
                    cout<<"amt "<<m<<" Withdrawn succes";
                    cout<<"your balance is"<<v<<endl;
                    break;
                case 3:
                    cout<<"Enter amt ";
                    cin>>s;
                    c1.deposite(s);
                    cout<<"Amt "<<s<<" had been deposited succefully"<<endl;
                    cout<<"your updated balance is "<<c1.getbalance();
                    break;
                case 4:
                    c1.checkoverdraft();
                    break;
                default:
                    cout<<"invalid code !!!!";
            }
            break;
        case 3:
            f1.addinfofd();
            cout<<"enter 1 for Dispay account details:"<<endl;
            cout<<"enter 2 for wihtdraw ammount "<<endl;
            cout<<"Enter 3 for deposite ammount "<<endl;
            cout<<"Enter 4 for calculate intrest for your fd amt:"<<endl;
            cin>>f;
            switch(f)
            {
                case 1:
                    f1.displayacinfofd();
                    break;
                case 2:
                    cout<<"Enter amt ";
                    cin>>n;
                    h=f1.withdraw(n);
                    cout<<"amt "<<n<<" Withdrawn succes";
                    cout<<"your balance is"<<h<<endl;
                    break;
                case 3:
                    
                    cout<<"Enter amt ";
                    cin>>u;
                    f1.deposite(u);
                    cout<<"Amt "<<u<<" had been deposited succefully"<<endl;
                    cout<<"your updated balance is "<<f1.getbalance();
                    break;
                case 4:
                    f1.calculateintrest();
                    break;
                default:
                    cout<<"invalid code !!!!";
            }
            break;
        default:
            cout<<"Enter valid code!!!!";
    }
}
