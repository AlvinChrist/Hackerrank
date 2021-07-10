#include <iostream>

using namespace std;

int maxArraySum(int arr[],int i){
    int cache[i] = {0};
    cache[0] = arr[0];
    cache[1] = max(arr[0],arr[1]);
    int j = 2;
    for(j;j<=i;j++){
        cache[j] = max(cache[j-1], arr[j] + cache[j-2]);
    }
    return cache[i-1];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxArraySum(arr,n);
    return 0;
}