#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int a=0,diff=0;
    cin>>a;
    for(int j=0;j<a;j++){
        for(int i=0;i<a;i++){
            int num=0;
            cin>>num;
            if(i==j){
                diff+=num;
            }
            if(i+j==a-1){
                diff-=num;
            }
        }
    }
    cout<<(int)abs(diff)<<'\n';
    return 0;
}