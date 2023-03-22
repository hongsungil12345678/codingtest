#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int index = people.size()-1;
    sort(people.begin(),people.end());
    for(int i=0,j=index;i<=j;j--){
        if(people[i]+people[j]<=limit){
            i++;
        }
        answer++;
    }
    return answer;
}