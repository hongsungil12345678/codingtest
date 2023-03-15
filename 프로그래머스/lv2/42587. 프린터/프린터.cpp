#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int count =0;
    queue<pair<int,int>>temp;
    priority_queue<int> pri;
    for(int i=0;i<priorities.size();i++){
        temp.push(make_pair(i,priorities[i]));
        pri.push(priorities[i]);
    }
    while(!temp.empty()){
        int index = temp.front().first;
        int value = temp.front().second;
        temp.pop();
        if(pri.top()==value){
            pri.pop();
            count++;
            if(index==location){
                answer=count;
                break;
            }
        }
        else{
            temp.push(make_pair(index,value));
        }
    }
    
    
    
    
    return answer;
}