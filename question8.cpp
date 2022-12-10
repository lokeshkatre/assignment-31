#include <iostream>
using namespace std;

class Customer
{
    char name[15];
    long long phone_no;

public:
    void detailsC()
    {
        cout << "\nEnter Costomer Name         :";
        cin >> name;
        cout << "\nEnter Customer's Phone no.  :";
        cin >> phone_no;
    }
    void displayC()
    {
        cout << "Details of Customer" << endl;
        cout << "\n-----------------------------------------------" << endl;
        cout << "\nCustomer Name      : " << name << endl;
        cout << "Customer Phone no. : " << phone_no << endl;
    }
};

class Depositor : public Customer
{
    int accono;
    int balance;

public:
    void detailsD()
    {
        cout << "\nEnter Customer's Account no.:";
        cin >> accono;
        cout << "\nEnter Balance               :";
        cin >> balance;
    }
    void displayD()
    {
        cout << "Customer A/C no.   : " << accono << endl;
        cout << "Balance            : " << balance << endl;
    }
};

class Borrower : public Depositor
{
    int loan_no;
    int loan_amt;

public:
    Borrower()
    {
        loan_no = 0;
    }
    void detailsB()
    {
        cout << "\nEnter Loan no.              :";
        cin >> loan_no;
        cout << "\nEnter Loan amount           :";
        cin >> loan_amt;
        cout << "\n-----------------------------------------------" << endl;
    }

    void displayB()
    {
        cout << "\n-----------------------------------------------" << endl;
        cout << "\nLoan no.         :" << loan_no << endl;
        cout << "Loan amount      :" << loan_amt << endl;
        cout << "\n-----------------------------------------------" << endl;
    }
};

int main()
{
    Borrower *b;
    int x;
    int n;
    cout << "Enter No. of Customer Details you want" << endl;
    cin >> n;
    b = new Borrower[n];
    for (int i = 0; i < n; i++)
    {
        b[i].detailsC();
        b[i].detailsD();
        b[i].detailsB();
    }

    for (int i = 0; i < n; i++)
    {
        b[i].displayC();
        b[i].displayD();
        b[i].displayB();
    }

    return 0;
}