#include<iostream>
using namespace std;
class A
{
  private:
    int a;
  protected:
    void setvalue(int k)
    {
        a=k;
    }
};
class B :public A
{
public:
   void setdata(int x)
   {
       setvalue(x);
   }
};
int main()
{
    B obj;
    obj.setdata(4);


}







