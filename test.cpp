#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include <ctime>
#include <iomanip>
#include <limits>
#include <map>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <cstring>

using namespace std;

// Structure to hold account information
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
    const int LOCK_DURATION_MINUTES = 60;

```cpp
            system("cls");
        #else
            system("clear");
        #endif
    }

    void addTransaction(Account& account, const string& transaction) {
        std::time_t now = chrono::system_clock::to_time_t(chrono::system_clock::now());
        string timestamp = std::ctime(&now);
        timestamp = timestamp.substr(0, timestamp.length()-1);  // Remove newline
        account.transactionHistory.push_back(timestamp + " - " + transaction);
    }

    bool isAccountLocked(Account& account) {
        if (account.isLocked) {
            auto now = chrono::system_clock::now();
            auto duration = chrono::duration_cast<chrono::minutes>(now - account.lockTime).count();
            
            if (duration >= LOCK_DURATION_MINUTES) {
                account.isLocked = false;
                account.failedAttempts = 0;
                return false;
            }
            return true;
        }
        return false;
    }

    void lockAccount(Account& account) {
        account.isLocked = true;
        account.lockTime = chrono::system_clock::now();
        cout << "\n⚠️ Your account has been locked for " << LOCK_DURATION_MINUTES << " minutes due to multiple failed attempts." << endl;
    }

    bool validatePin(Account& account, const string& enteredPin) {
        if (isAccountLocked(account)) {
            cout << "\n🔒 Account is locked. Please try again later." << endl;
            return false;
        }

        if (enteredPin == account.pin) {
            account.failedAttempts = 0;
            return true;
        }

        account.failedAttempts++;
        if (account.failedAttempts >= MAX_FAILED_ATTEMPTS) {
            lockAccount(account);
        }
        return false;
    }

public:
    ATM() {
        // Initialize sample accounts
        accounts['k'] = {"1234-5678-9012-3456", "1234", 50000.0, "SBI",    }
};

int main() {
    ATM atm;
    char cardChoice;

    while (true) {
        atm.displayWelcomeScreen();
        cin >> cardChoice;
        atm.processTransaction(cardChoice);

        cout << "\nWould you like to perform another transaction? (y/n): ";
        char continueChoice;
        cin >> continueChoice;
        if (tolower(continueChoice) != 'y') {
            cout << "\nThank you for using our ATM. Have a great day!" << endl;
            break;
        }
    }

    return 0;
}