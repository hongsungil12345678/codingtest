#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    while(order!=0){
        int temp=order%10;
        order=order/10;
        if(temp==3||temp==6||temp==9){
            answer++;
        }
    }
    return answer;
}