#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,11,15,4,9};
    int ans = INT8_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>ans)
        ans=arr[i];
    }
    cout<<ans<<endl;
    return 0;
}