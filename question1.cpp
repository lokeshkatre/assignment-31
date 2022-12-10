#include<iostream>
using namespace std;
class Person 
{
    private:
    char name[20];
    int age;
    public:
    void setName()
    {
        cout<<"Enter name:";
        cin.getline(name,20);
    }
    void setAge()
    {
        cout<<"Enter age:";
        cin>>age;
    }
    char * getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};

class Employee:public Person
{
    private:
    int Empid,salary;
    public:
    void setEmpid()
    {
        cout<<"Enter employee id:";
        cin>>Empid;
    }
    void setSalary()
    {
        cout<<"Enter employee salary:";
        cin>>salary;
    }
    int getEmpid()
    {
        return Empid;
    }
    int getSalary()
    {
        return salary;
    }
    void display()
    {
         cout<<"Name        : "<<getName()<<endl;
    cout<<"Age         : "<<getAge()<<endl;
    cout<<"Empolyee Id : "<<getEmpid()<<endl;
    cout<<"Salary      : "<<getSalary()<<endl;
    }
};
int main()
{
    Employee e1;
    e1.setName();
    e1.setAge();
    e1.setSalary();
    e1.setEmpid();
   
    
    
}