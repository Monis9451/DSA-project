#include "AccountManagement.h";
class FileHandler
{
public:
    FileHandler();
    ~FileHandler();

    void saveAccountsToFile(BST &bst)
    {
        ifstream inFile("Data/accounts.txt");
        if (!inFile)
        {
            cout << "Unable to open file for reading" << endl;
            return;
        }
        else
        {
            string dataFetching;
            while (!inFile.eof())
            {
            Account account;
            inFile >> dataFetching;
            account.setAccountNumber(stoi(dataFetching));
            inFile >> dataFetching;
            account.setHolderName(dataFetching);
            inFile >> dataFetching;
            account.setPassword(dataFetching);
            inFile >> dataFetching;
            account.setBalance(stod(dataFetching));
            inFile >> dataFetching;
            account.setAccountType(dataFetching);
            inFile >> dataFetching;
            account.setAccountStatus(dataFetching);
            inFile >> dataFetching;
            account.setLoanToPay(stoi(dataFetching));
            bst.insertAccount(account);
            }
        }

        inFile.close();
    }

    void loadAccountsFromFile(BST &bst)
    {
        // Load accounts from file
    }

    void saveTransactionsToFile(Transaction t)
    {
        // Save transactions to file
    }

    void loadTransactionsFromFile(Transaction t)
    {
        // Load transactions from file
    }

    void backupData()
    {
        // Backup data
    }

    void restoreData()
    {
        // Restore data
    }

    void saveLoansToFile(const string &filename, const vector<LoanRecord> &loanRecords)
    {
    }

    void loadLoansFromFile(const string &filename, vector<LoanRecord> &loanRecords)
    {
    }
};