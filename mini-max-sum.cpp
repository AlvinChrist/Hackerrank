#include <bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    long long input[5];
    for(int i=0;i<5;i++){
        cin>>input[i];
    }
    sort(input,input+5);
    long long min = 0;
    long long max=0;
    for(int i=0;i<4;i++){
        min+=input[i];
        max+=input[i+1];
    }
    cout<<min<<' '<<max;
    return 0;
}