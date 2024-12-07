class Account
{
    private:
        //Credentials
        int accountNumber;
        string holderName;
        double balance;
        string accountType;
        string accountStatus;
        string loanToPay;

    public:
        //Constructors
        Account(int accountNumber, string holderName, double balance, string accountType, string accountStatus)
        {
            this->accountNumber = accountNumber;
            this->holderName = holderName;
            this->balance = balance;
            this->accountType = accountType;
            this->accountStatus = accountStatus;
        }

        //Gettters
        int getAccountNumber() { return accountNumber;}

        string getHolderName() { return holderName;}

        double getBalance() { return balance;}

        string getAccountType() { return accountType;}

        string getAccountStatus() { return accountStatus;}

        string getLoanToPay() { return loanToPay;}

        //Setters
        void setAccountNumber(int accountNumber) {this->accountNumber = accountNumber;}

        void setHolderName(string holderName) {this->holderName = holderName;}

        void setBalance(double balance) {this->balance = balance;}

        void setAccountType(string accountType) {this->accountType = accountType;}

        void setAccountStatus(string accountStatus) {this->accountStatus = accountStatus;}

        void setLoanToPay(string loanToPay) {this->loanToPay = loanToPay;}

        //Functions
        void display()
        {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Holder Name   : " << holderName << endl;
            cout << "Balance       : " << balance << endl;
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
            //Display transactions
        }

        void displayLoans()
        {
            //Display loans
        }

        void displayLoanPayments()
        {
            //Display loan payments
        }
};