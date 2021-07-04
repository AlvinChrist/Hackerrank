#include <sstream>
#include <vector>
#include <iostream>
#define pb push_back

using namespace std;


vector<int> parseInts(string str) {
	stringstream ss(str);
    vector<int> result;
    int num=0;
    char ch;
    while(ss){
        ss>>num;
        ss>>ch;
        result.pb(num);
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}