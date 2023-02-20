#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max=*max_element(array.begin(),array.end());
    int temp=max_element(array.begin(),array.end())-array.begin();
    cout<<max<<endl;
    cout<<temp<<endl;
    answer.push_back(max);
    answer.push_back(temp);
    return answer;
}