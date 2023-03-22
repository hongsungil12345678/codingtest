#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int endindex=people.size()-1;
    int firstindex=0;
    // 정렬
    sort(people.begin(),people.end());
    while(true){
        if(firstindex>endindex){
            break;
        }
        else if(endindex==firstindex){
            answer++;
                break;
        }
        else if(people[firstindex]+people[endindex]<=limit){
            firstindex++;
            endindex--;
            answer++;
        }
        else{
            endindex--;
            answer++;
        }

    }
    return answer;
}