#include <iostream>
//#include <vector>

using namespace std;
//#define pb push_back

void displayPathtoPrincess(int &bx,int &by, int &px, int &py){
    if(bx-px>0){//left
        for(int i=bx;i>px;i--){
            cout<<"LEFT"<<'\n';
        }
    }
    else{
        for(int i=bx;i<px;i++){
            cout<<"RIGHT"<<'\n';
        }
    }
    if(by-py>0){//left
        for(int i=by;i>py;i--){
            cout<<"UP"<<'\n';
        }
    }
    else{
        for(int i=by;i<py;i++){
            cout<<"DOWN"<<'\n';
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    int m=0,bx=0,by=0,px=0,py=0;
    //vector<vector<char>> map;
    cin>>m;
    for(int i=0;i<m;i++){
        //vector<char> row;
        for(int j=0;j<m;j++){
            char s;
            cin>>s;
            if(s=='m'){
                bx=j;
                by=i;
            }
            else if(s=='p'){
                px=j;
                py=i;
            }
            //row.pb(s);
        }
       //map.pb(row);
    }
    displayPathtoPrincess(bx,by,px,py);
    return 0;
}