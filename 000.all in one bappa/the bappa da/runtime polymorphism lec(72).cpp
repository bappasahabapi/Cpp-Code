#include<iostream>
using namespace std;
class A
{
public:
    virtual void disp()=0;   ///base class e  pure virtual function hbe
};
class B :public A
{
    int val1;
public:
    B(int x)
    {
        val1 =x;
    }
    void disp()
    {
        cout<<"\n val1 in class B "<<val1;
    }
};
class C : public A
{
    int val2;
public:
    C(int x)
    {
        val2=x;
    }
    void disp()
    {
        cout<<"\n val2 in class C "<<val2;
    }
};
int main()
{
    A * bp;
    B objb(100);
    C objc(200);

    bp=&objb;
    bp->disp();

    bp=&objc;
    bp->disp();
    return 0;

}



