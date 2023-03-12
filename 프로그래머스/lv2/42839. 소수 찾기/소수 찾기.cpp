#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iostream>
using namespace std;
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
    vector<char> temp;
    vector<int> num;
    for(int i=0;i<numbers.length();i++){
        cout<<numbers[i]<<endl;
        temp.push_back(numbers[i]);
    }
    sort(temp.begin(),temp.end());
    do{
        string temp2="";
        for(int i=0;i<temp.size();i++){
            temp2+=temp[i];
            num.push_back(stoi(temp2));
        }
        
    }while(next_permutation(temp.begin(),temp.end()));
    sort(num.begin(),num.end());//정렬
    num.erase(unique(num.begin(),num.end()),num.end());//중복제거
    
    for(int i=0;i<num.size();i++){
        if(isPrime(num[i])){//소수 일경우
            answer++;
        }
    }

    return answer;
}