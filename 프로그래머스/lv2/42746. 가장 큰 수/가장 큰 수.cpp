#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(string a,string b){// a+b b+a 둘중에 뭐가 더 큰지
    return a+b>b+a;// 큰수가 나오게 반환
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;
    for(auto num:numbers){// int -> string 변환 저장
        temp.push_back(to_string(num));
    }
    sort(temp.begin(),temp.end(),compare);// 정렬
    if(temp.at(0)=="0"){
        return "0";
    }
    for(auto str:temp){
        answer+=str;
    }
    
    return answer;
}