#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
//next_permutation -> 오름차순

bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int solution(string numbers) {
    int answer = 0;
    vector<char> ch;
    vector<int> num;
    for(int i=0;i<numbers.length();i++){
        ch.push_back(numbers[i]);
    }
    // 정렬
    sort(ch.begin(),ch.end());
    do{
        string temp="";
        for(int i=0;i<ch.size();i++){
            temp.push_back(ch[i]);
            num.push_back(stoi(temp));
        }
    }while(next_permutation(ch.begin(),ch.end()));
    sort(num.begin(),num.end());
    num.erase(unique(num.begin(),num.end()),num.end());
    for(int i=0;i<num.size();i++){
        if(isPrime(num[i])){
            answer++;
        }
    }
    
    return answer;
}