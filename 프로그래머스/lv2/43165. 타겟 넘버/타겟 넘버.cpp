#include <string>
#include <vector>

using namespace std;
int answer=0;
void targetNumber(vector<int>numbers,int target,int sum,int index){
    if(index==numbers.size()){
        if(target==sum){
            answer++;
        }
        return;
    }
    targetNumber(numbers,target,sum+numbers[index],index+1);
    targetNumber(numbers,target,sum-numbers[index],index+1);
    
}
int solution(vector<int> numbers, int target) {
    targetNumber(numbers,target,0,0);
    return answer;
}