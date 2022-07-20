#include <iostream> 
#include <string>
using namespace std; 

class Account
{
private:
    string name[20];
    int account[20];
    int amount[20];
    int count;
public:
    // void Account();
    // void ~Account();
    void initcount(void){count=0;}
    void displayacc(void);
    void setacc(void);
};
// void Account::Account(void){}
    
// void Account::~Account(void){}
 
void Account::setacc(void)
{
    cout<<"Enter the account holder name: ";
    cin>>name[count];
    cout<<"Enter the account number: ";
    cin>>account[count];
    cout<<"Enter the Deposit amount: ";
    cin>>amount[count];  
    count++;

}
void Account::displayacc(void)
{
      
    for (int i = 0; i < count; i++)
    {
        cout<<"Id number of this account "<<i+1<<" "<<endl;   
        cout<<"Name of the account holder: "<<name[i]<<" "<<endl;   
        cout<<"Account Number of "<<name[i]<<" : "<<account[i]<<endl;
        cout<<"Total amount of accoubt holder: "<<amount[i]<<endl;
    }
    
}

int main()
{
    Account a1;
    a1.initcount();
    a1.setacc();
    // a1.setacc();
    // a1.setacc();
    // a1.setacc();
    a1.displayacc();
    return 0;
}