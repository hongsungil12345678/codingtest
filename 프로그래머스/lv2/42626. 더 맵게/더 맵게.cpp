#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int,vector<int>,greater<int>> pri;
    for(int i=0;i<scoville.size();i++){
        pri.push(scoville[i]);
    }
    while(pri.top()<K&&pri.size()>=2){
        int temp=pri.top();
        pri.pop();
        int temp2=temp+pri.top()*2;
        pri.pop();
        pri.push(temp2);
        answer++;
    }
    if(pri.top()<K){
        answer=-1;
    }
    return answer;
}