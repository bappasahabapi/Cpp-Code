#include<iostream>
using namespace std;
int main()    ///addition of all elements iin array
{
    int size, sum=0;
    int *arr;
    cout<<"please enter the size of array :";
    cin>>size;
    arr=new int [size];
    cout<<"enter"<<size<<"value in array: ";
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    cout<<"the addition of all the elements in the array is :"<<sum;



}
