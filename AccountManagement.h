class Account
{
private:
    // Credentials
    int accountNumber;
    string holderName;
    string password;
    double balance;
    string accountType;
    string accountStatus;
    bool loanToPay;

public:
    // Constructors
    Account()
    {
        accountNumber = 0;
        holderName = "";
        password = "";
        balance = 0;
        accountType = "";
        accountStatus = "";
        loanToPay = false;
    }
    Account(int accountNumber, string holderName, string password, double balance, string accountType, string accountStatus)
    {
        this->accountNumber = accountNumber;
        this->holderName = holderName;
        this->password = password;
        this->balance = balance;
        this->accountType = accountType;
        this->accountStatus = accountStatus;
    }

    // Gettters
    int getAccountNumber() { return accountNumber; }

    string getHolderName() { return holderName; }

    string getPassword() { return password; }

    double getBalance() { return balance; }

    string getAccountType() { return accountType; }

    string getAccountStatus() { return accountStatus; }

    bool getLoanToPay() { return loanToPay; }

    // Setters
    void setAccountNumber(int accountNumber) { this->accountNumber = accountNumber; }

    void setHolderName(string holderName) { this->holderName = holderName; }

    void setPassword(string password) { this->password = password; }

    void setBalance(double balance) { this->balance = balance; }

    void setAccountType(string accountType) { this->accountType = accountType; }

    void setAccountStatus(string accountStatus) { this->accountStatus = accountStatus; }

    void setLoanToPay(bool loanToPay) { this->loanToPay = loanToPay; }

    // Functions
    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name   : " << holderName << endl;
        cout << "Balance       : " << balance << endl;
        cout << "Loan to pay   : " << loanToPay << endl;
        cout << "Account Type  : " << accountType << endl;
        cout << "Account Status: " << accountStatus << endl;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        balance -= amount;
    }

    void transfer(Account &receiver, double amount)
    {
        balance -= amount;
        receiver.balance += amount;
    }

    void changeAccountStatus(string status)
    {
        accountStatus = status;
    }

    void changeAccountType(string type)
    {
        accountType = type;
    }

    void changeHolderName(string name)
    {
        holderName = name;
    }

    void closeAccount()
    {
        accountStatus = "Closed";
    }

    void openAccount()
    {
        accountStatus = "Open";
    }

    void displayTransactions()
    {
        // Display transactions
    }

    void displayLoans()
    {
        // Display loans
    }

    void displayLoanPayments()
    {
        // Display loan payments
    }
};

class BST
{
    struct Node
    {
        Account account;
        Node *left;
        Node *right;
    };

    Node *root;

public:
    void insertAccount(Account &account)
    {
        Node *newNode = new Node{account, nullptr, nullptr};

        if (root == nullptr)
        {
            root = newNode;
            return;
        }

        Node *current = root;

        while (true)
        {
            if (account.getAccountNumber() < current->account.getAccountNumber())
            {
                if (current->left == nullptr)
                {
                    current->left = newNode;
                    break;
                }
                current = current->left;
            }
            else
            {
                if (current->right == nullptr)
                {
                    current->right = newNode;
                    break;
                }
                current = current->right;
            }
        }
    }

    void deleteAccount(int accountNumber)
    {
        // Delete account from BST
    }

    Account* searchAccount(int accountNumber)
    {
        // Search account in BST
    }

    void displayAccounts()
    {
        // Display accounts in BST
    }
};