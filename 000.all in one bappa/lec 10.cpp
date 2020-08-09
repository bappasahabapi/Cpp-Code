#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age";
    cin>>age;

    if(age>=10 && age<=50)
    {
      if(age>=10 && age<=18)
      {
          cout<<"you are a teenager";
      }
      else
      {
       cout<<"you are not a teenager";
      }
    }
    else
    {
       if(age<10)
       {
           cout<<" you are under 10 years";
       }
       else
       {
           cout<<"you are more than 50 years";
       }
    }



    return 0;

}
