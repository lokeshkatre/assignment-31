#include<iostream>
using namespace std;
class b;
class a
{
    protected :
    int n1;
    public:

    a()
    {
        n1=25;
    }
    void display()
    {
        cout<<"\nValue of Number 1 : "<<n1<<endl;
    }
    friend void swap(a *n1 , b *n2 );
};

class b
{
    protected :
    int n2;

    public:
    b()
    {
        n2=10;
    }
    void display()
    {
        cout<<"\nValue of Number 2 : "<<n2<<endl;
    }
    friend void swap(a *n1 , b *n2 );

};

void swap(a * m1 , b * m2 )
{
    int temp = m1->n1;
    m1->n1 = m2->n2;
    m2->n2 = temp;  
}

int main()
{
    a A;
    b B;
    swap(&A,&B);
    A.display();
    B.display();

    return 0;
}