#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"please enter 9 elements in the array :";
    for(int i=0;i<3;i++);
    for(int j=0;j<3;j++);
    cin>> arr[i][j];

    cout<<"the array you entered is :\n";
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
            cout<<arr[i][j]<<"\t";
        cout<<"\n";
    }

}
