class Transaction
{
    int accountNumber;
    string transactionType;
    double amount;
    string transactionDate;
    string transactionTime;

public:
    void displayTransaction()
    {
        cout << "Account Number  : " << accountNumber << endl;
        cout << "Transaction Type: " << transactionType << endl;
        cout << "Amount          : " << amount << endl;
        cout << "Transaction Date: " << transactionDate << endl;
        cout << "Transaction Time: " << transactionTime << endl;
    }
};

class TransactionManager
{
    stack<Transaction> transactionStack;
    queue<Transaction> batchTransactions;

    public:
    void addTransaction(Transaction t)
    {
        transactionStack.push(t);
    }

    void rollbackTransaction()
    {
        // transactionStack.pop();
    }

    void enqueueBatchTransaction(Transaction t)
    {
        // batchTransactions.push(t);
    }

    void processBatchTransactions()
    {
        // while(!batchTransactions.empty())
        // {
        //     batchTransactions.pop();
        // }
    }
};