#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false);
    int n=0,tc=0;
    vector<int> v;
    cin>>n;
    for(;n>0;n--){
        int p=0;
        cin>>p;
        v.pb(p);
    }
    cin>>tc;
    for(;tc>0;tc--){
        int p=0;
        vector<int>::iterator low;
        cin>>p;
        low=lower_bound(v.begin(),v.end(),p);
        if(v[low-v.begin()]==p){
            cout<<"Yes "<<low-v.begin()+1<<'\n';
        }
        else{
            cout<<"No "<<low-v.begin()+1<<'\n';
        }
    }
    return 0;
}