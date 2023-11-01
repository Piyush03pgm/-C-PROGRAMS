#include<iostream>
using namespace std;


struct  c_programming_books
{
    char    book_name[50];
    float   price;
    int     pages;
};
int main()
{
    struct c_programming_books ob1;//ob2;
    cout<<"The book name is : ";
    cin>>ob1.book_name;

    cout<<ob1.book_name<<" Book Price  is : ";
    cin>>ob1.price;
  
    cout<<ob1.book_name<<"Pages is : ";
    cin>>ob1.pages;
  
    cout<<"Details About "<<ob1.book_name<<"Book"<<endl;
    cout<<"Book name is "<<ob1.book_name<<endl<<"Price of book is : "<<ob1.price<<endl;
    cout<<"Pages in this book is : "<<ob1.pages;

    return 0;
}