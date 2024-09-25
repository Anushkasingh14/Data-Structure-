#include<iostream>
using namespace std;
int main(){
    int arr[5]; // array declare
    int a[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int b[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        cout<<b[i]<<" ";
    }
     cout<<endl;
    int c[6]={1,2,3};
    for(int i=0;i<6;i++){
        cout<<c[i]<<" ";
    }

    cout<<endl;
    int d[6]={0};
    for(int i=0;i<6;i++){
        cout<<d[i]<<" ";
    }


    // input from user
    cout<<endl;
    int array[6];

    for(int i=0;i<6;i++)
    cin>>array[i];

    for(int i=0;i<6;i++)
    cout<<array[i]<<" ";

    int x[5]={1,2,3,4,5};
    cout<<sizeof(x)<<" ";
    cout<<sizeof(x)/sizeof(x[0])<<" "; 
    
    return 0;

}