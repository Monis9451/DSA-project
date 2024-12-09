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

//loging in as a user or admin
void login()
{
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    if (username == "admin" && password == "admin")
    {
        cout << "Logged in as admin" << endl;
    }
    else
    {
        cout << "Logged in as user" << endl;
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


    return 0;
}