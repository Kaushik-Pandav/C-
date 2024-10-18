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
        return balance+a;
    }
     
    double withdraw(double a)
    {
        if(a>balance)
        {
            cout<<"balance is low"<<endl;
        }
        else
        {
            return balance-a;
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
};
class sb:public Bank
{
    float intrestrate;
    public:
    void addinfosb()
    {
        addinfo();
        cout<<"Add your intrest rate ";
        cin>>intrestrate;

    }
        void displayacinfosb()
        {
            cout<<"Your account type is Savings"<<endl;
            displayacinfo();
            cout<<"Your intrest rate is "
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
        cout<<"You have to maintain mnimum 50000 in account";
    }
    void dissplayacinfocb()
    {
        cout<<"Your account type is Current"<<endl;
        displayacinfo();
    }
    void checkoverdraft()
    {
        double a;
        cout<<"enter ammount that you wanted to withdraw";
        cin>>a;
        double p=withdraw(a);
        if(p<50000)
        {
            cout<<"You can not Withdraw that amount "<<endl;
            cout<<"Your overdraftlimit is 100000 per day"<<endl;
        }
        else if (p>50000)
        {
            cout<<"Amt"<<a<<"Has been Withdrawn Successfully "<<endl;
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
    void calculateintrest()
    {
        cout<<"Your intrest in FD will be"<<(balance*0.07*terms)<<endl;
    }
};
main()
{
    sb s1;
    cb c1;
    fd f1;
    int k;
    cout<<"Enter 1 for Savings bank accout ";
    cout<<"Enter 2 for Current bank accout ";
    cout<<"Enter 3 for Fixed deposite ";
    cin>>k;
    switch(k)
    {
        case 1:
            s1.addinfosb();
            int p;
            cout<<"enter 1 for Dispay account details:";
            cout<<"enter 2 for wihtdraw ammount ";
            cout<<"Enter 3 for deposite ammount ";
            cin>>p;
            switch(p)
            {
                case 1:
                    s1.displayacinfosb();
                    break;
                case 2:
                    int l;
                    cout<<"Enter amt ";
                    cin>>l;
                    int p=s1.withdraw(l);
                    cout<<"amt "<<l<<" Withdrawn succes"
            }
            break;
        case 2:
            c1.addinfocb();
            break;
        case 3:
            f1.addinfofd();
            break;
        default:
            cout<<"Enter valid code!!!!";
    }
}
