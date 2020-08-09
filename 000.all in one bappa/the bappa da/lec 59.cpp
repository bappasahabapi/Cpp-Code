#include<iostream>
using namespace std;
class A
{
    int a;
public:
    void dispa()
    {
        a=10;
        cout<<"class A"<<a;
    }
};
class B : public virtual A
{
    int b;
public:
    void dispb()
    {
        b=20;
        cout<<"class B"<<b;
    }
};
class C :public virtual A
{
    int c;
public:
    void dispc()
    {
        c=30;
        cout<<"class C"<<c;
    }
};
class D
{
    int d;
public:
    void dispd()
    {
     d=40;
     cout<<"class D"<<d;
    }

};
int main()
{    D obj;
    obj.dispb();

    obj.dispd();

    return 0;
}





























