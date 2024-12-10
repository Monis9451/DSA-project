#include <iostream>
#include <string>
#include <fstream>
#include <stack>
#include <queue>
#include <ctime>
#include "AccountManagement.h";
#include "FileHandling.h";
#include "Transaction-Processing.h";
#include "LoanSystem.h";
#include "FraudDetection.h";
using namespace std;

//global variables for admin login
static string adminName = "admin";
static string adminPassword = "admin";

//functions prototypes
void login(BST &accountTree);
Account* userLogin(BST &accountTree, Account* userAccount);
void adminLogin(BST &accountTree);
void userMenu(Account* userAccount, BST &accountTree);
void adminMenu(BST &accountTree);

//Basic logging in function
void login(BST &accountTree)
{
    Account* userAccount;
    string loggingInAs;
    againLogin:
    cout << "Enter 'admin' to login as admin or 'user' to login as user: ";
    cin >> loggingInAs;
    if (loggingInAs == "admin")
    {
        userAccount = userLogin(accountTree, userAccount);
        if(userAccount)
        {
            userMenu(userAccount, accountTree);
        }
    }
    if (loggingInAs == "user")
    {
        adminLogin(accountTree);
        adminMenu(accountTree);
    }
    else
    {
        cout << "Invalid input" << endl;
        goto againLogin;
    }
}

//logging in as a user
Account* userLogin(BST &accountTree, Account* userAccount)
{
    int accountNumber;
    string password;
    againUserLogin:
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter password: ";
    cin >> password;
    userAccount = accountTree.searchAccount(accountNumber);
    if(userAccount)
    {
        if(userAccount->getAccountNumber() == accountNumber && userAccount->getPassword() == password)
        {
            cout << "Logged in as user" << endl;
            return userAccount;
        }
        else
        {
            cout << "Invalid account number or password" << endl;
            int choice;
            cout << "Account not found" << endl;
            chooseAgain:
            cout << "1. Try again" << endl;
            cout << "2. Back" << endl;
            if(choice == 1)
            {
                goto againUserLogin;
            }
            else if(choice == 2)
            {
                login(accountTree);
            }
            else
            {
                cout << "Invalid choice" << endl;
                goto chooseAgain;
            }
        }
    }
    else if(!userAccount)
    {
        int choice;
        cout << "Account not found" << endl;
        chooseAgain:
        cout << "1. Try again" << endl;
        cout << "2. Back" << endl;
        if(choice == 1)
        {
            goto againUserLogin;
        }
        else if(choice == 2)
        {
            login(accountTree);
        }
        else
        {
            cout << "Invalid choice" << endl;
            goto chooseAgain;
        }
    }
}

//logging in as an admin
void adminLogin(BST &accountTree)
{
    string username, password;
    againAdminLogin:
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    if (username == adminName && password == adminPassword)
    {
        cout << "Logged in as admin successfully" << endl;
    }
    else
    {
        int choice;
        cout << "Entered wrong credentials" << endl;
        chooseAgain:
        cout << "1. Try again" << endl;
        cout << "2. Back" << endl;
        if(choice == 1)
        {
            goto againAdminLogin;
        }
        else if(choice == 2)
        {
            login(accountTree);
        }
        else
        {
            cout << "Invalid choice" << endl;
            goto chooseAgain;
        }
    }
}

//User menu
void userMenu(Account* userAccount, BST &accountTree)
{
    int choice;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Transfer" << endl;
    cout << "4. Apply for loan" << endl;
    cout << "5. Display loan details" << endl;
    cout << "6. Display all loans" << endl;
    cout << "7. Calculate total payable" << endl;
    cout << "8. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        //Deposit
        break;
    case 2:
        //Withdraw
        break;
    case 3:
        //Transfer
        break;
    case 4:
        //Apply for loan
        break;
    case 5:
        //Display loan details
        break;
    case 6:
        //Display all loans
        break;
    case 7:
        //Calculate total payable
        break;
    case 8:
        login(accountTree);
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}

//Admin menu
void adminMenu(BST &accountTree)
{
    int choice;
    cout << "1. Display all accounts" << endl;
    cout << "2. Display all transactions" << endl;
    cout << "3. Display all loans" << endl;
    cout << "4. Display all loan payments" << endl;
    cout << "5. Check for large transactions" << endl;
    cout << "6. Backup data" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        //Display all accounts
        break;
    case 2:
        //Display all transactions
        break;
    case 3:
        //Display all loans
        break;
    case 4:
        //Display all loan payments
        break;
    case 5:
        //Check for large transactions
        break;
    case 6:
        //Backup data
        break;
    case 7:
        login(accountTree);
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}

int main()
{
    //Making objects of classes
    BST accountTree;
    LoanSystem loanSystem;
    FileHandler fileHandler;
    TransactionManager transactionManager;
    FraudDetection fraudDetection;

    //Loading accounts from file
    fileHandler.loadAccountsFromFile(accountTree);

    //logging in
    login(accountTree);

    return 0;
}