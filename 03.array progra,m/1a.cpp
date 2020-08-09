#include<iostream>
using namespace std;
int main()    /// accept 5 elementa in array and display
{
    int arr[5];
    cout<<"please enter the 5 numbers : ";
    for(int i=0; i<5;i++)
        cin>>arr[i];
    cout<<"the number is the array are : ";
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";


}
