#include <iostream>
#include <vector>
#include <map>
#include <chrono>
#include <ctime>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cctype>

using namespace std;

struct Account {
    string cardNumber;
    string pin;
    double balance;
    string bankName;
    string holderName;
    vector<string> transactionHistory;
    int failedAttempts;
    bool isLocked;
    chrono::system_clock::time_point lockTime;
};

class ATM {

private:

    map<char, Account> accounts;

    const int MAX_FAILED_ATTEMPTS = 3;
    const int LOCK_DURATION_MINUTES = 1;

    void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    }

    void addTransaction(Account& account,string msg)
    {
        time_t now = chrono::system_clock::to_time_t(
                     chrono::system_clock::now());

        string timeStr = ctime(&now);
        timeStr.pop_back();

        account.transactionHistory.push_back(timeStr + " - " + msg);
    }

    bool isAccountLocked(Account &account)
    {
        if(account.isLocked)
        {
            auto now = chrono::system_clock::now();

            auto duration =
            chrono::duration_cast<chrono::minutes>
            (now - account.lockTime).count();

            if(duration >= LOCK_DURATION_MINUTES)
            {
                account.isLocked = false;
                account.failedAttempts = 0;
                return false;
            }

            return true;
        }

        return false;
    }

    void lockAccount(Account &account)
    {
        account.isLocked = true;
        account.lockTime = chrono::system_clock::now();

        cout<<"\nAccount locked for "
            <<LOCK_DURATION_MINUTES
            <<" minute.\n";
    }

    bool validatePin(Account &account,string pin)
    {
        if(isAccountLocked(account))
        {
            cout<<"\nAccount locked. Try later.\n";
            return false;
        }

        if(pin == account.pin)
        {
            account.failedAttempts = 0;
            return true;
        }

        account.failedAttempts++;

        if(account.failedAttempts >= MAX_FAILED_ATTEMPTS)
        {
            lockAccount(account);
        }

        return false;
    }

    void checkBalance(Account &account)
    {
        cout<<"\nCurrent Balance : ₹"<<account.balance<<endl;

        addTransaction(account,"Checked Balance");
    }

    void deposit(Account &account)
    {
        double amt;

        cout<<"\nEnter deposit amount : ";
        cin>>amt;

        if(amt <=0)
        {
            cout<<"Invalid amount\n";
            return;
        }

        account.balance += amt;

        cout<<"Deposit successful\n";

        addTransaction(account,"Deposited ₹"+to_string((int)amt));
    }

    void withdraw(Account &account)
    {
        double amt;

        cout<<"\nEnter withdraw amount : ";
        cin>>amt;

        if(amt > account.balance)
        {
            cout<<"Insufficient balance\n";
            return;
        }

        account.balance -= amt;

        cout<<"Please collect your cash\n";

        addTransaction(account,"Withdraw ₹"+to_string((int)amt));
    }

    void showTransactions(Account &account)
    {
        cout<<"\nTransaction History\n";

        if(account.transactionHistory.empty())
        {
            cout<<"No transactions\n";
            return;
        }

        for(string t : account.transactionHistory)
        {
            cout<<t<<endl;
        }
    }

public:

    ATM()
    {
        accounts['k'] =
        {
            "1234-5678-9012-3456",
            "1234",
            50000,
            "SBI",
            "Rahul Sharma",
            {},
            0,
            false,
            chrono::system_clock::now()
        };
    }

    void displayWelcomeScreen()
    {
        clearScreen();

        cout<<"========================\n";
        cout<<"        ATM SYSTEM\n";
        cout<<"========================\n";

        cout<<"\nInsert card (k) : ";
    }

    void processTransaction(char card)
    {
        if(accounts.find(card)==accounts.end())
        {
            cout<<"Invalid card\n";
            return;
        }

        Account &account = accounts[card];

        string pin;

        cout<<"Enter PIN : ";
        cin>>pin;

        if(!validatePin(account,pin))
        {
            cout<<"Wrong PIN\n";
            return;
        }

        int choice;

        do{

            cout<<"\n\nATM MENU\n";
            cout<<"1. Balance\n";
            cout<<"2. Deposit\n";
            cout<<"3. Withdraw\n";
            cout<<"4. Transactions\n";
            cout<<"5. Exit\n";

            cout<<"Choice : ";
            cin>>choice;

            switch(choice)
            {
                case 1:
                    checkBalance(account);
                    break;

                case 2:
                    deposit(account);
                    break;

                case 3:
                    withdraw(account);
                    break;

                case 4:
                    showTransactions(account);
                    break;

                case 5:
                    cout<<"Thank you\n";
                    break;

                default:
                    cout<<"Invalid choice\n";
            }

        }while(choice!=5);
    }

};

int main()
{
    ATM atm;

    char cardChoice;

    while(true)
    {
        atm.displayWelcomeScreen();

        cin>>cardChoice;

        atm.processTransaction(cardChoice);

        char c;

        cout<<"\nAnother transaction? (y/n) : ";
        cin>>c;

        if(tolower(c)!='y')
        {
            cout<<"\nThank you for using ATM\n";
            break;
        }
    }

    return 0;
}