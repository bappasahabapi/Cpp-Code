#include<iostream>
using namespace std;
class A            ///single inheritnce by bappa
{
    int a;
public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};
class B :public A
{
    int c;
public:
    void mult();
    void disp();
};
void A::get_ab()
{
    cout<<"enter two numbers :";
    cin>>a>>b;
}
void A::show_a()
{
    cout<<"\n"<<a;
}
int A::get_a()
{
    return a;
}
void B::mult()
{
    c=b*get_a();
}
void B::disp()
{
    cout<<"\n"<<get_a()<<"*"<<b<<"="<<c;
}
int main()
{
    B b1;
    b1.get_ab();
    b1.mult();
    b1.disp();




}





