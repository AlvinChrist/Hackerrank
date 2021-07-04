#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        string tmp;
        cin>>tmp;
        int occurences = 0;
        for(int j=0;j<n;j++){
            (tmp.compare(str[j])==0)?occurences++:0;
        }
        cout<<occurences<<'\n';
    }
    return 0;
}