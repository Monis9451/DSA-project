struct LoanRecord
{
    int accountNumber;
    double loanAmount;
    double interestRate;
    int durationMonth;
};

class LoanSystem
{
    vector<LoanRecord> loanRecords;

    public:
    void applyForLoan(int accNum, double amount, double rate, int duration)
    {
        //Logic to apply for loan
    }

    void displayLoanDetails(int accNum)
    {
        //Logic to display loan detail
    }

    double calculateTotalPayable(int accNum)
    {
        //calculate the total payable amount
    }

    void displayAllLoans()
    {
        //Display all loans
    }

    void saveLoansToFile(const string& filename)
    {
        //
    }
    void loadLoansFromFile(const string& filename);

};