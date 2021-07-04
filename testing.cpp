#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int m=0,n=0;
    arr.resize(m);
    while(cin>>m){
        m--;
        for(;m>=0;m--){
            cin>>n;
            arr.push_back(n);
        }
        for(int i=arr.size()-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}