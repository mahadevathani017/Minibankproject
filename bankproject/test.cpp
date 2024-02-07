//This project is based on the oops concepts.This project process tasks like give account details to customers,
//check balance.
#include<iostream>
#include<string.h>
using namespace std;
class bank
{
    private:
    string firstName;
    string lastName;
    string accountNumber;
    int amount;
    string phoneNumber;
    public:
    bank();
    void accountdetails(string s1,string s2,string acnum,string phnum) ;   
    void accountdetailsdispaly(string acoutid, string phnum );
    void deposite(int amt);
    void withdraw(int amt);
    void balance(); 

};
bank::bank()
{
    amount=0;
}
void bank::deposite(int amt)
{
    amount+=amt;
}
void bank::withdraw(int amt)
{
    if(amount<amt)
    {
        cout<<"Insufficiant balance...pls chacek\n";
    }
    else
    {
        amount=amount-amt;
    }
}
void bank::balance()
{
    cout<<"\n Your current balance:"<<amount<<endl;
    cout<<"---------------------------\n";
}
void bank::accountdetails(string s1,string s2,string acnum,string phnum)
{
    firstName=s1;
    lastName=s2;
    accountNumber=acnum;
    phoneNumber=phnum;
}
void bank::accountdetailsdispaly(string acoutid,string phnum)
{    
    if(accountNumber==acoutid && phoneNumber==phnum)
    {
        cout<<"-------------------------\n";
        cout<<"Mr/Mrs."<<firstName<<" "<<lastName<<endl;
        cout<<"--------------------------\n";
        cout<<"Account number:"<<accountNumber<<endl;
        cout<<"--------------------------\n";
        cout<<"Current balance:"<<amount<<endl;
        cout<<"--------------------------\n";
        cout<<"PHONE NUMBER :"<<phoneNumber<<endl;
        cout<<"---------------------------------\n";
    }
    else
    {
        cout<<"YOUR ACCOUNT NUMBER AND PHONE NUMBERS ARE NOT MATCHED.....!\n";
    }
    cout<<"------------------------------------------\n";
    
}

int main()
{   
    cout<<"\t\t\t\t   -----------------------------------\n";
    cout<<"\t\t\t\t   |:WELCOME TO BANK MANAGMENT SYSTEM:|\n";
    cout<<"\t\t\t\t   -----------------------------------\n";
    
    int option,myamt,wdrawamt,i;
    
    string num;
    string aconumber;
    string phnum;
    string  fname;
    string lname;
    bank b;
    
    do{
    cout<<"1.To create bank account\n";
    cout<<"2.Deposite"<<"\n";
    cout<<"3.withdrawal"<<"\n";
    cout<<"4.Check balance"<<"\n";
    cout<<"5.To dispaly acount details\n";
    cout<<"6.Exit"<<"\n";
    cout<<"-----------------------"<<endl;
    cout<<"Enter option:";
    cin>>option;
    switch (option)
    {  
        case 1:cout<<"Enter details of customer :\n";
               cout<<"-----------------------------------\n";
               cout<<"Enter first name of customer :";
               cin>>fname;
               cout<<"Enter last name of customer :";
               cin>>lname;
               cout<<"Enter accountnumber=";
               cin>>num;
               cout<<"Enter your phone number :";
               cin>>phnum;
               cout<<"Your account is created!!!!\n";
               cout<<"-----------------------------\n";
               b.accountdetails(fname,lname,num,phnum);
               break;
        case 2:cout<<"Enter amount for deposite :";
               cin>>myamt;
               b.deposite(myamt);
               break;
        case 3:cout<<"Enter amount for withdrawal :";
               cin>>wdrawamt;
               b.withdraw(wdrawamt);
               break;
        case 4:b.balance();
               break;
        case 5:cout<<"Enter acount number=";
               cin>>aconumber;
               cout<<"Enter your phone number=";
               cin>>phnum;
               b.accountdetailsdispaly(aconumber,phnum);
               break;    
    }
    }while(option!=6);

    return 0;
}
 