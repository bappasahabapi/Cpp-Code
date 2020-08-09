#include<iostream>
using namespace std;
class A
{
    int a;
public:
    void getval_a(int);
    int getval_a();
};
class B :public A
{
    int b, c;
public:
    void getval_b(int);
    void add();
    void dispval();
};
void A::getval_a(int x)
{
    a=x;
}
int A::getval_a()
{
    return a;
}
void B::getval_b(int x)
{
    b=x;
}
void B ::add()
{
   c=getval_a();
   c=c+b;
}
void B::dispval()
{
    cout<<"value of A: "<<getval_a();
    cout<<"value of B: "<<b;
    cout<<"value of C: "<<c;
}
int main()
{
    int a,b;
    B obj;
    cout<<"enter value of A:\n ";
    cin>>a;
    cout <<"enter value of B: \n";
    cin>>b;
    obj.getval_a(a);
    obj. getval_b(b);
    obj.add();
    obj.dispval();
    return 0;



}
















