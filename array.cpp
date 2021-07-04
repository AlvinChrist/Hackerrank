#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n=0,q=0,i=0,j=0;
    cin>>n>>q;
    vector<vector<int>> vector2d;
    for(int i=0;i<n;i++){
        int col=0;
        cin>>col;
        vector<int> _col(col);
        for(int j=0;j<col;j++){
            cin>>_col[j];
        }
        vector2d.push_back(_col);
    }
    for(;q>0;q--){
        cin>>i>>j;
        cout<<vector2d[i][j]<<'\n';
    }
    return 0;
}