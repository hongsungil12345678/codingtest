#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    int num=sqrt(n);
    if(num*num==n){
        answer=1;
    }
    else{
        answer=2;
    }
    cout<<num<<endl;
    return answer;
}