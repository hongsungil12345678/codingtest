#include <iostream>
using namespace std;
char arr[51][51];
char wb[8][8] = {
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W'
};

char bw[8][8] = {
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B'
};
int white(int x,int y){
    int result =0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(arr[x+i][y+j]!=wb[i][j])
                result++;
        }
    }
    return result;
}
int black(int x,int y){
    int result=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(arr[x+i][y+j]!=bw[i][j])
                result++;
        }
    }
    return result;
}

int main(){
   	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n,m,result=64;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int wcount,bcount;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            wcount=white(i,j);
            bcount=black(i,j);
            if(wcount<bcount){
                result = (wcount<result)? wcount:result;
            }
            else{
                result = (bcount<result)? bcount:result;
            }
        }
    }
    cout<<result<<endl;
}

