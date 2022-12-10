#include<iostream>
using namespace std;

class Item
{
    public:
    char name[10];
    int item_no;
    float price;
};

class Discount_Item:public Item
{
   
    public:
    float discount_percent,discountPrice;
    
    void addDetails()
    {
        cout<<"Enter Item Name : ";
        cin>>name;
        cout<<"Enter Item No. : ";
        cin>>item_no;
        cout<<"Enter Item Price : ";
        cin>>price;
        cout<<"Enter Discount Percentage : ";
        cin>>discount_percent;
        discountPrice = price * discount_percent * 0.01;
        cout<<"----------------------------"<<endl;
    }

    void display()
    {
        cout<<"Item Name :"<<name<<endl;
        cout<<"Item No. :"<<item_no<<endl;
        cout<<"Item Price :"<<price<<endl;
        cout<<"Discount Percentage :"<<discount_percent<<endl;
        cout<<"Discounted Price :"<<discountPrice<<endl;
        cout<<"--------------------------"<<endl;   
    }
};

int main()
{
    int n;
    float total_amount=0,total_discount=0;
    cout<<"How many items you want to Enter? : ";
    cin>>n;

    Discount_Item item[n];
    for(int i=0; i<n ;i++)
    {
       item[i].addDetails();
    }

    for(int i=0; i<n; i++)
    {
        item[i].display();
    }

    for(int i=0; i<n; i++)
    {
        total_amount= item[i].price + total_amount;
        total_discount = total_discount + item[i].discountPrice ;
    }

    cout<<"Total Price : "<< total_amount <<endl;
    cout<<"Total Discount : "<< total_discount <<endl;
    cout<<"--------------------------"<<endl;  

    return 0;
}