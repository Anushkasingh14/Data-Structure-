#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,6,11,2,8};
    int ans = INT8_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]<ans)
        ans=arr[i];
    }
    cout<<ans<<endl;
    return 0;
}