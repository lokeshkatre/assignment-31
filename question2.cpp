#include <iostream>
using namespace std;

class num
{
private:
    int num1,num2;

public:
    void setNum(int x, int y)
    {
        num1 = x;
        num2 =y ;
    }
    int addNum()
    {
        return num1+num2;
    }
};

class add : public num
{
public:
    void displayAdd()
    {
        cout << "Sum is "<<addNum()<< endl;
    }
};
int main()
{
    add n1;
    n1.setNum(3,4);
    n1.displayAdd();
    return 0;
}