#include <bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int tallest = 0;
    int counter = 0;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        if(tmp>tallest){
            counter = 1;
            tallest = tmp;
        }
        else if(tmp==tallest){
            counter++;
        }
    }
    cout<<counter;
    return 0;
}