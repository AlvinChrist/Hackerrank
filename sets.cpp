#include <iostream>
#include <set>

using namespace std;

int main(){
    int tc=0;
    set<int> s;
    ios_base::sync_with_stdio(false);
    cin>>tc;
    for(;tc>0;tc--){
        int y=0,x=0;
        cin>>y>>x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            s.erase(x);
        }
        else{
            set<int>::iterator iter=s.find(x);
            if(iter==s.end()){
                cout<<"No"<<'\n';
            }
            else{
                cout<<"Yes"<<'\n';
            }
        }
    }
    return 0;
}