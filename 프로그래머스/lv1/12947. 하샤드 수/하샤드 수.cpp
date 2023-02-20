#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum=0;
    int num=x;
    while(num!=0){
        int temp=num%10;
        sum+=temp;
        num=num/10;
    }
    cout<<sum<<endl;
    return x%sum==0? true:false;
}