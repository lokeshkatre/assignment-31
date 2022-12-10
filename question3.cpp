#include <iostream>
using namespace std;

class marks
{
    protected:
    int m[3];

    public:
    void addDetail()
    {
        cout<<"\tEnter student marks:\n-----------------------------"<<endl;
        cout<<"Enter physics marks: ";
        cin>>m[0]; 
        cout<<"Enter chemistry marks: ";
        cin>>m[1]; 
        cout<<"Enter chemistry marks: ";
        cin>>m[2]; 
    }
    
};

class total: public marks
{
    protected:
    int total;
    public:
    void setTotal()
    {
        total = (m[0] + m[1] + m[2]);
    }
};

class percentage: public total
{
    private :
    float percent;

    public:
    void Percent()
    {
        percent = total/3.0;
    }
    void displayPercent()
    {
        cout<<"\n-------------------\nPercentage is "<<percent << endl;
    }
};

int main()
{
    percentage s1;
    s1.addDetail();
    s1.setTotal();
    s1.Percent();
    s1.displayPercent();

    return 0;
}