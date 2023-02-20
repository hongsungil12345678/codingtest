#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num) {
    int answer = 0;
    long long temp=num;
    if(num==1){
        return 0;
    }
    while(temp!=1){
        if(temp%2==0){
            temp=temp/2;
            answer++;
        }
        else if(temp%2==1){
            temp=temp*3+1;
            answer++;
        }
        if(answer>=500){
            answer=-1;
            break;
        }
    }
    return answer;
}