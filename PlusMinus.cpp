#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int tc=0,n[3]={0,0,0};
    cin>>tc;
    for(int i=0;i<tc;i++){
        int num=0;
        cin>>num;
        if(num>0){
            n[0]++;
        }
        else if(num<0){
            n[1]++;
        }
        else{
            n[2]++;
        }
    }
    cout << fixed;
    cout << setprecision(6);
    for(int i=0;i<3;i++){
        cout<<(double)n[i]/tc<<'\n';
    }
    return 0;
}