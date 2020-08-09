#include<iostream>
using namespace std;
class A
{
    int a;
public:
    A(int x)
    {
        x=a;
        cout<<" \n A class constructor initialized";
    }                                                     /// multiple constructor in drived class,,,bappa.cse.rmstu.edu.bd
    void dispa(void)
    {
        cout<<"\n value of A "<<a;
    }
};
class B
{
    int b;
public:
    B(int y)
    {
        y=b;
        cout<<"\n B class constructor initialized ";
    }
    void dispb(void)
    {
        cout<<" \n value of B "<<b;
    }
};
class C :public B,public A
{
    int m;
public:
    C(int x,int y,int z):A(x),B(y)
    {
        m=z;
        cout<<"\n C class constructor initialized";
    }
    void dispm(void)
    {
        cout<<"\n value of m " <<m;
    }
};
int main()
{
    C obj(10,20,30);
    obj.dispa();
    obj.dispb();
    obj.dispm();
    return 0;
}
















