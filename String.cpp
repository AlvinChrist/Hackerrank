#include <iostream>
#include <string>
using namespace std;

void process(string &str1,string &str2){
    cout<<str1.size()<<" "<<str2.size()<<'\n';
    cout<<str1<<str2<<'\n';
    char tmp = str1[0];
    str1[0]=str2[0];
    str2[0]=tmp;
    cout<<str1<<" "<<str2<<'\n';
}

int main() {
	string str1,str2;
    cin>>str1>>str2;
    process(str1,str2);
    return 0;
}