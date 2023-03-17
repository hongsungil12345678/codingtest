 //90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하
 #include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    if(N>=90){
        cout<<'A'<<endl;
    }
    else if(80<=N&& N<90){
        cout<<'B'<<endl;
    }
    else if(70<=N&& N<80){
        cout<<'C'<<endl;
    }
    else if(60<=N&& N<70){
        cout<<'D'<<endl;
    }
    else{
        cout<<'F'<<endl;
    }
    return 0;
    
}