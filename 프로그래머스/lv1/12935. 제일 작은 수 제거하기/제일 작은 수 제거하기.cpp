#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int num= min_element(arr.begin(),arr.end())-arr.begin();
    arr.erase(arr.begin()+num);
    if(arr.size()==0){
        arr.push_back(-1);
    }
    return arr;
}