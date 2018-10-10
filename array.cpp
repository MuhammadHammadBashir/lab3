#include<iostream>
using namespace std;
int main()
{
    int size,i;
    cout<<"enter your size;";
    cin>>size;
    while(size<1 || size>=1000)

    {
        cout<<"enter your size again";
        cin>>size;

    }
    int arr[size];
    for(i=0;i<size;i++)
    {   cout<<"enter your item"<<endl;
        cin>>arr[i];
        while(arr[i]<1 || arr[i]>=10000)
        {   cout<<"enter your again item"<<endl;
            cin>>arr[i];
        }for ( i = 0; i < (size / 2); i++) {
          int temp= arr[i];
          arr[i] = arr[(size - 1) - i];
          arr[(size - 1) - i] = temp;
      }for(i=0;i<size;i++)
      {
          cout<<arr[i]<<" ";
      }


    }return 0;

}
