#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define pb push_back
using namespace std;


int main() {
    int tc=0;
    cin>>tc;
    vector<int> v;
    for(;tc>0;tc--){
        int n=0;
        cin>>n;
        v.pb(n);
    }
    int r1=0,r2=0;
    cin>>r1;
    v.erase(v.begin()+r1-1);
    cin>>r1>>r2;
    v.erase(v.begin()+r1-1,v.begin()+r2-1);
    cout<<v.size()<<'\n';
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}