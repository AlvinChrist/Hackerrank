#include <iostream>
using namespace std;

long arr[10000005] = {0};

// [0, 100, 100, 100, 0, 0] == [0, 100, 0, 0, -100, 0]
//greedy algorithm
// arr[n] = arr[n] + arr[n-1] + ... + arr[0];

int main(){
    ios_base::sync_with_stdio(false);
    long n,m;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        long a,b,k;
        cin>>a>>b>>k;
        arr[a-1] += k;
        arr[b] -= k;
    }
    long maks = 0;
    long sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maks = max(sum,maks);
    }
    cout<<maks;
    return 0;
}