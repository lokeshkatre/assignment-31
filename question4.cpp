#include<iostream>
using namespace std;

class Person
{
    public:
    char name[20];
    char address[30];
    int phone_no;
};

class Employee: public Person{
    public:
    int eno;
    char ename[10];

};

class Manager: public Employee{
    public:
    char designation[15];
    char department_name[20];
    float basic_salary;
    void addDetails()
    {
        cout<<"    Enter Details of Manager"<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"Enter Employee no. : ";
        cin>>eno;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Address : ";
        cin>>address;
        cout<<"Enter Phone no. : ";
        cin>>phone_no;
        cout<<"Enter Designation : ";
        cin>>designation;
        cout<<"Enter Basic Salary : ";
        cin>>basic_salary;

    }

    friend Manager highestSalary();

};

int main()
{
    int n, temp=0;
    cout<<"How many Managers You Want to Enter? : ";
    cin>>n;
    Manager m[n];
    for(int i = 0; i < n; i++)
    {
        m[i].addDetails();
    } 
    for(int i = 0; i < n; i++)
    {
        if(m[temp].basic_salary < m[i].basic_salary)
        temp=i;
    } 

    cout<<"\n\nManager with highest salary is : "<<m[temp].basic_salary<<endl;
    cout<<"Manager Name is : "<<m[temp].name<<endl;

    return 0;
}