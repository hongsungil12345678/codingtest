#include<stdio.h>
int main(){
	int a,n,m;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d %d",&n,&m);
		int temp=1;
		for(int j=1;j<=n;j++){
		temp=temp*m/j;
		m--;
		}
		printf("%d\n",temp);
	}
}