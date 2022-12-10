#include <iostream>
using namespace std;

class employee
{

public:
    int emp_code;
    char name[20];
    void get()
    {
        cout << "\n-------------------------------";
        cout << "\nEnter Employee Name : ";
        cin >> name;
        cout << "Enter Employee Code : ";
        cin >> emp_code;
    }
};

class Fulltime : public employee
{
public:
    int no_of_days;
    float daily_rates, salary;
    void getDetail()
    {
        cout << "Enter Daily rates : ";
        cin >> daily_rates;
        cout << "Enter No. of days : ";
        cin >> no_of_days;
        cout << "-------------------------------" << endl;
        salary = no_of_days * daily_rates;
    }

    void display()
    {
        cout << "\n-------------------------------"<<endl;
        cout << "Employee Name : " << name << endl;
        cout << "Employee Code : " << emp_code << endl;
        cout << "Salary        : " << salary << endl;
        cout << "Status        : Fulltime" << endl;
        cout << "-------------------------------" << endl;
    }
};

class PartTime : public employee
{
public:
    int no_of_hrs;
    float hr_rates, salary;

    void getDetail1()
    {
        cout << "Enter hr rates : ";
        cin >> hr_rates;
        cout << "Enter No. of hrs : ";
        cin >> no_of_hrs;
        cout << "-------------------------------" << endl;
        salary = hr_rates * no_of_hrs;
    }

    void display1()
    {
        cout << "\n-------------------------------" << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Employee Code : " << emp_code << endl;
        cout << "Salary        : " << salary << endl;
        cout << "Status        : Partime" << endl;
        cout << "-------------------------------" << endl;
    }
};

int main()
{
    int var = 0, var1 = 0;
    PartTime P[5];
    Fulltime F[5];
    int x;
    do
    {

        cout << "\n1.Enter Record" << endl;
        cout << "2.Display Record" << endl;
        cout << "3.Search Record" << endl;
        cout << "4.Quit" << endl;
        cout << "Enter choice : ";
        cin >> x;

        switch (x)
        {
        case 1:
            int y;
            cout << "\n1.Fulltime" << endl;
            cout << "2.Partime" << endl;
            cout << "Enter choice : ";
            cin >> y;
            if (y == 1)
            {
                F[var].get();
                F[var].getDetail();
                var++;
            }
            else if (y == 2)
            {
                P[var1].get();
                P[var1].getDetail1();
                var1++;
            }
            break;

        case 2:
            for (int i = 0; i < var; i++)
            {
                F[i].display();
            }
            for (int i = 0; i < var1; i++)
            {
                P[i].display1();
            }
            break;

        case 3:
            int no;
            cout << "\nEnter employee no. to Search : ";
            cin >> no;
            for (int i = 0; i < var; i++)
            {
                if (no == F[i].emp_code)
                {
                    F[i].display();
                }
            }
            for (int i = 0; i < var1; i++)
            {
                if (no == P[i].emp_code)
                {
                    P[i].display1();
                }
            }
            break;

        default:
            break;
        }
    } while (x != 4);
}
