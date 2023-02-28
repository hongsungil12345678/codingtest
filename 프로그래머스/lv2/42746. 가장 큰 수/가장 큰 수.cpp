#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(string a,string b){
    return a+b>b+a;//큰수 반환
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;
    for(auto num:numbers){
        temp.push_back(to_string(num));// int -> string 저장
    }
    sort(temp.begin(),temp.end(),compare);//string 정렬
    if(temp.at(0)=="0"){
        return "0";
    }
    for(auto tmp:temp){
        answer+=tmp;
    }
    return answer;
}