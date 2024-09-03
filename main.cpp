#include <iostream>
#include <string>

using namespace std;
string userId, password, inputUserId, inputPassword;
double balance = 0.0;
bool isLoggedIn = false;
int main() {
    while (true) {
        if (!isLoggedIn) {
            cout << "Hi! Welcome to the ATM Machine!"<<"\n";
            cout << "Please select an option from the menu below:" << "\n";
            cout << "1. Login" << "\n";
            cout << "c. Create New Account" << "\n";
            cout << "q. Quit" << "\n";
            char choice;
            cin >> choice;
            
             if (choice == '1') {
                cout << "Please enter your user id: ";
                cin >> inputUserId;
                cout << "Please enter your password: ";
                cin >> inputPassword;
 if (inputUserId == userId && inputPassword == password) {
                    cout << "Access Granted!" << "\n";
                    isLoggedIn = true;
                }
                else {
                    cout << "* LOGIN FAILED! *" << "\n";
                }
            }

            if (choice == 'c') {
                cout << "Please enter your user name: ";
                cin >> userId;
                cout << "Please enter your password: ";
                cin >> password;
                cout << "Thank You! Your account has been created!" << "\n";
            }
            
            else if (choice == 'q') {
                break;
            }
        }
        else {
            cout << "d. Deposit Money" << "\n";
            cout << "w. Withdraw Money" << "\n";
            cout << "r. Request Balance" << "\n";
            cout << "q. Quit" << "\n";
            char choice;
            cin >> choice;

            if (choice == 'd') {
                double amount;
                cout << "Amount of deposit: $";
                cin >> amount;
                balance += amount;
                cout << "Deposit successful!" << "\n";
            }
            else if (choice == 'w') {
                double amount;
 cout << "Amount of withdrawal: $";
                cin >> amount;
                if (balance >= amount) {
                    balance -= amount;
                    cout << "Withdrawal successful!" << "\n";
                }
                else {
                    cout << "Insufficient balance!" << "\n";
                }
            }
            else if (choice == 'r') {
                cout << "Your balance is $" << balance << "\n";
            }
            else if (choice == 'q') {
                isLoggedIn = false;
            }
        }
    };
     return 0;
}
