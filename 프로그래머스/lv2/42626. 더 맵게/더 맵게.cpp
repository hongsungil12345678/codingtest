#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int,vector<int>,greater<int>> pri(scoville.begin(),scoville.end());
    while(pri.top()<K){
        if(pri.size()==1){
            return -1;
        }
        int temp=pri.top();
        pri.pop();
        pri.push(temp+pri.top()*2);
        pri.pop();
        answer++;
    }
    return answer;
}
