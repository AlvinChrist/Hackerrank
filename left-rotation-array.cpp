#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        int shift = i-m;
        if(shift<0){
            cin>>arr[n-abs(shift)];
        }
        else{
            cin>>arr[shift];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}