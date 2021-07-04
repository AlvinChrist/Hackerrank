#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int>> arr(n);
    int lastAnswer = 0;
    for(int i=0;i<q;i++){
        int k,x,y;
        cin>>k>>x>>y;
        int idx = ((x xor lastAnswer)%n);
        if(k==1){
            arr[idx].push_back(y);
        }
        else{
            lastAnswer = arr[idx][y%arr[idx].size()];
            cout<<lastAnswer<<'\n';
        }
    }
    return 0;
}

/*              
2 5
1 0 5
1 1 7
1 0 3
2 1 0
2 1 1
*/

/*
7
3
*/