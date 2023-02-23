#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    // n -> 전체, 분실자 여벌자 같을 수 있음
    // 1) 분실자 - 여벌자
    for(int i=0;i<lost.size();i++){
        for(int j=0;j<reserve.size();j++){
            if(lost[i]==reserve[j]){
                lost.erase(lost.begin()+i);
                reserve.erase(reserve.begin()+j);
                i--;
                break;
            }
        }
    }
    int answer=n-lost.size();// 현재 가지고 있는 사람
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    for(int i=0;i<lost.size();i++){
        for(int j=0;j<reserve.size();j++){
            if(lost[i]-1==reserve[j]||lost[i]+1==reserve[j]){
                reserve.erase(reserve.begin()+j);
                answer++;
                break;
            }
        }
    }
    return answer;
}