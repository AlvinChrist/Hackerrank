#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    private:
        vector<int> score;
        int sum=0;
    public:
        Student():sum(0){}
        void input(){
            int tmp;
            for(int i=0;i<5;i++){
                cin>>tmp;
                score.push_back(tmp);
                sum+=tmp;
            }
        }
        int calculateTotalScore(){
            return sum;
        }
};
// Write your Student class here

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
