#include <string>
#include <vector>

using namespace std;
// 대문자 65-90 소문자 97-122
string solution(string my_string) {
    string answer = "";
    for(int i=0;i<my_string.length();i++){
        if(my_string[i]<=90){
            answer+=my_string[i]+32;
        }
        else{
            answer+=my_string[i]-32;
        }
    }
    return answer;
}