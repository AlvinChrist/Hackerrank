#include <iostream>
#include <math.h>
using namespace std;

void update(int *a, int *b){
    int tmp = *a;
    *a = *a+(*b);
    *b = abs(tmp-*b);
}
int main(){
    ios_base::sync_with_stdio(false);
    int a,b;
    int *pa= &a, *pb=&b;
    cin>>a>>b;
    update(pa,pb);
    cout<<a<<"\n"<<b<<"\n";
    return 0;
}