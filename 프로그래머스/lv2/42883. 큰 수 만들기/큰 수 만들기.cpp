#include <string>
#include <vector>
#include <iostream>
using namespace std;
string solution(string number, int k) {
    string answer="";
    int max=0;
    int index=0;
    for(int i=0;i<number.size();i++){
        if(max < number[i]){
            max=number[i];
            index=i;
        }
        if(i==k){// 첫 k개 가장 큰거
            answer.push_back(max);
            i=index;
            k++;
            max=0;
        }
    }
    return answer;
}