#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    test();
    test(int x);
    test(int x, int y);
    void disp();
};
test::test()
{
    a=0;
    b=0;
}
test::test(int x)
{
    a=b=x;
}
test::test(int x, int y)
{
    a=x;
    b=y;
}
void test::disp()
{
    cout<<"\n value of A : "<<a;
    cout<<"\n value of B : "<<b;
}
int main()
{
    test A;
    test B(100);
    test C(100,200);
    cout<<"object A \n ";
    A.disp();
    cout<<"object B \n  ";
    B.disp();
    cout<<"object C ";
    C.disp();
    return 0;
}



























