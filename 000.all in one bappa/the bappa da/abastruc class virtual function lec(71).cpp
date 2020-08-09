#include<iostream>
using namespace std;
class base
{
public:
    virtual void disp()=0;  ///pure virture function
};
class d: public base
{
    public:
    void disp() ///definition of pure virtual class in drived class d
    {
        cout<<"drived class";
    }
};
int main()
{
    d obj;
    obj.disp();
    return 0;
}
