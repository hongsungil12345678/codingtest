#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// ascii 대문자65-90 소문자97-122
string solution(string my_string) {
    string answer = "";
    for(int i=0;i<my_string.length();i++){
        if(my_string[i]<=90){
            answer+=my_string[i]+32;
        }
        else{
            answer+=my_string[i];
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}