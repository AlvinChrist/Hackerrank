#include <iostream>
#include <algorithm>

using namespace std;

int hourGlass(int (*p)[6],int a,int b){
    int sum = *(*(p+a)+b) + *(*(p+a)+b+1) + *(*(p+a)+b+2) + *(*(p+a+1)+b+1) + *(*(p+a+2)+b) + *(*(p+a+2)+b+1) + *(*(p+a+2)+b+2);
    return sum;
}

int main(){
    int m[6][6]; // m[row][col]
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>m[i][j];
        }
    }
    int maks =  hourGlass(m,0,1);
    int sum = 0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            sum = hourGlass(m,i,j);
            if(maks<sum){
                maks = sum;
            }
        }        
    }
    cout<<maks;
    return 0;
}