#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/struct Student{
    int age;
    string first_name;
    string last_name;
    string standard;
};

int main() {
    Student st;
    Student st2;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cin >> st2.age >> st2.first_name >> st2.last_name >> st2.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    cout << st2.age << " " << st2.first_name << " " << st2.last_name << " " << st2.standard;
    
    return 0;
}