#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    char time[11];
    int hour=0;
    char rest[7];
    cin>>time;
    hour = (time[0]-'0')*10;
    hour += time[1]-'0';
    for(int i=2;i<8;i++){
        rest[i-2]=time[i];
    }
    rest[6]='\0';   
    if(time[8]=='A'){
        hour = hour%12;
    }
    else{
        if(hour<12){
            hour +=12;
        }
    }
    printf("%02d%s",hour,rest);
    return 0;
}