#include <iostream>

using namespace std;
int solution(int n)
{
    int temp;
    int answer=0;
    while(n!=0){
        temp=n%10;
        answer+=temp;
        n=n/10;
    }

    return answer;
}