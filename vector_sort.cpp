#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m=0,n=0;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        arr.push_back(m);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
