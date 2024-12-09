class FileHandler
{
public:
    FileHandler();
    ~FileHandler();

    void saveAccountsToFile(BST& bst)
    {
        //Save accounts to file
    }

    void loadAccountsFromFile(BST& bst)
    {
        //Load accounts from file
    }

    void saveTransactionsToFile(Transaction t)
    {
        //Save transactions to file
    }

    void loadTransactionsFromFile(Transaction t)
    {
        //Load transactions from file
    }

    void backupData()
    {
        //Backup data
    }

    void restoreData()
    {
        //Restore data
    }

    void saveLoansToFile(const string& filename, const vector<LoanRecord>& loanRecords)
    {

    }

    void loadLoansFromFile(const string& filename, vector<LoanRecord>& loanRecords)
    {

    }
};