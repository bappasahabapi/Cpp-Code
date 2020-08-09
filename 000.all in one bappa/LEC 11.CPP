#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter value for x";
    cin>>x;
    cout <<"enter value for y";
    cin>>y;

    if(x>y)
    {
        cout<<"x is greater than y";
    }
    else if(y>x)
    {
        cout<<" y is greater than x";
    }
    else
    {
        cout<<"both are same";
    }
    return 0;

}
