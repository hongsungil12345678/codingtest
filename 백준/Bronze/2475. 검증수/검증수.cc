#include<iostream>
using namespace std;
int main(){
    int temp,a,b,c,d,e,sum;
    cin>>a>>b>>c>>d>>e;
    sum=(a*a+b*b+c*c+d*d+e*e)%10;
    cout<<sum<<endl;
    return 0;
    
}