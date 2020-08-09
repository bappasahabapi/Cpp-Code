#include<iostream>
using namespace std;
class A
{
    int a;    ///private part so we can't write c=a+b;
public:
    void getval_a(int);  ///f1 function that takes int type value.
    int get_a();   ///f2 gives int type return .
};
class B:public A
{
    int b,c;
public:
    void getval_b(int);   ///bappa
    void add();
    void dispval();
};
void A::getval_a(int x)
{
    a=x;
}
int A::get_a()
{
    return a;
}
void B::getval_b(int x)
{
    b=x;
}
void B::add()
{
    c=get_a();
    c=c+b;
}
void B::dispval()
{
    cout<<"value of A "<<getval_a();  ///nested of member function.
    cout<<"value of B "<<b;
    cout <<"value of C"<<c;
}
int main()      ///now the main function start
{
    int a,b;
    B obj;
    cout<<"enter value of A ";
    cin>>a;
    cout<<"enter value of B";
    cin>>b;
    obj.getval_a(a);
     obj.getval_b(b);
     obj.add();
     obj.dispval();










}

















