#include<iostream>
using namespace std;
class M
{

protected:
    int m;                    ///bappa saha,tgbhs,tgc,rmstu,cse 2nd batch.
public:
    void get_m()
    {
        cout<<"\n enter a number : ";
        cin>>m;
    }
};
class N
{
protected:
    int n;
public:
    void get_n()
    {

    cout<<"\n enter 2nd number: ";
    cin>>n;
    }
};
class p:public M,public N
{

public:
    void disp()
    {
        cout<<"\n"<<m<<"+"<<n<<"="<<m+n;
         cout<<"\n"<<m<<"-"<<n<<"="<<m-n;
    }
};
int main()
{
    p obj;
    obj.get_m();
    obj.get_n();
    obj.disp();
}












