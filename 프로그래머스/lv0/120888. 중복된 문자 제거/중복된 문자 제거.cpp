#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer = "";
    //65-90 97-122
    vector<int> count(200,0);
    for(int i=0;i<my_string.size();i++){
        if(count[my_string[i]]==0){
            answer+=my_string[i];
            count[my_string[i]]++;
        }
    }
    return answer;
}