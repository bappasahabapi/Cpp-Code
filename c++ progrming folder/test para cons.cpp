#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    test(int x, int y)    ///parameterasied constructor;;;
    {
        a=x;
        b=y;
    }
    void disp()
    {
        cout<<"value of A: "<<a;
        cout<<"value of B : "<<b;
    }
};
int main()
{
    test t(100,200);
    t.disp();
    return 0;
}











