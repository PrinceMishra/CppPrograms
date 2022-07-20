#include <iostream>
using namespace std;
class Account
{
private:
    int debit;
    float tot_amnt;
    int credit;
    // static int acc_id;

public:
    int count = 0;
    Account();
    void setvalue(void);
    void getvalue(void);
    void acc_calculation(void)
    {
        if (credit > 0 || debit > 0)
        {
            if (debit % 5 == 0 && debit > 0)
            {
                tot_amnt = tot_amnt - (float)debit - (float)0.50; // 0.5 paise will be deducted on single withdrawl.
            }
            else if (credit > 0)
            {
                tot_amnt = tot_amnt + (float)credit-(float)0.50;
            }
        }
        else
        {
            cout << "Sorry, transaction is not possible with this amount." << endl;
        }
    }
};
void Account::setvalue(void)
{
    int choice = 0;
    cout << "What kind of operation you have to perform, please enter 1 for deposit and 2 for wirthdraw and 3 for balance enquiry:" << endl;
    cin >> choice;
    if (choice == 1 || choice == 2 || choice == 3)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the amount to deposit: " << endl;
            cin >> credit;
            count = choice;
            break;
        case 2:
            cout << "Enter the amount to withdraw: " << endl;
            cin >> debit;
            count = choice;
            break;
        case 3:
            cout << "Your available balance is: " << tot_amnt << "rs " << endl;
            count = choice;
            break;
        }
    }
}
void Account::getvalue(void)
{
    switch (count)
    {
    case 1:
        if (credit > 0)
        {
            cout << "your account has been credited by rupees " << credit << endl;
            cout << "Your available balance is: " << tot_amnt << "rs " << endl;
        }
    case 2:
        if ((debit > 0) && (debit % 5 == 0))
        {
            cout << "your account has been debited by rupees " << debit << endl;
            cout << "Your available balance is: " << tot_amnt << "rs " << endl;
        }
    }
}
Account::Account()
{
    debit = 0;
    tot_amnt = 1000.00;
    cout << "Hello your account has been created." << endl;
    // acc_id++;
}

int main()
{

    Account a1;
    a1.setvalue();
    a1.acc_calculation();
    a1.getvalue();

    return 0;
}