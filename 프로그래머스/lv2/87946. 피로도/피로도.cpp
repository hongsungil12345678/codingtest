#include <string>
#include <vector>
using namespace std;
int answer=-1;
bool visted[9]={false};
vector<vector<int>> dun;
void dfs(int k,int count){
    if(k<0){
        return;
    }
    for(int i=0;i<dun.size();i++){
        if(!visted[i]&&k>=dun[i][0]){
            visted[i]=true;
            dfs(k-dun[i][1],count+1);
            visted[i]=false;
        }
    }
    answer= max(answer,count);
}

int solution(int k, vector<vector<int>> dungeons) {
    dun=dungeons;
    dfs(k,0);
    return answer;
}