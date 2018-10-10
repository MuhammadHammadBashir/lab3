#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
public:
  int x[5],i;
  void input()
  {for(int i=0;i<5;i++)
    cin>> x[i];
    cout<<endl;
  }
  int calculateTotalScore()
  {
    for(int i=0;i<5;i++)
      {scores=scores+x[i];}
      cout<<endl;
      return scores;
  }


private:
  int scores;
};


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

    return 0;}
