#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int tc=0;
    cin>>tc;
    map<string,int> m;
    for(;tc>0;tc--){
        int type=0,y=0;
        string X;
        cin>>type>>X;
        if(type==1){
            cin>>y;
            map<string,int>::iterator iter=m.find(X);
            if(iter==m.end())
                m.insert(make_pair(X,y));
            else
            {
                m[X]+=y;
            }
            
        }
        else if(type==2){
            m.erase(X);
        }
        else{
            map<string,int>::iterator iter=m.find(X);
            if(iter==m.end()){
                cout<<0<<'\n';
            }
            else{
                cout<<m[X]<<'\n';
            }
        }

    }
    return 0;
}