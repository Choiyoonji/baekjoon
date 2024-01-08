#include<stdio.h>
#include<queue>
using namespace std;
queue<int> q;
int f[102][102], v[102];
int a, b, c, d, t, k;
int main(){
	scanf("%d%d",&a,&b);
	for(int i=0;i<b;i++){
		scanf("%d %d",&c,&d);
		f[c][d]=1;
		f[d][c]=1;
	}
	q.push(1);
	while(!q.empty()){
		for(int i=1;i<=a;i++){
			if(f[q.front()][i]==1&&v[i]!=1){
				q.push(i);
				t++;
				v[i]=1;
			}	
		} 
		q.pop();
	}
	printf("%d",max(0,t-1));
}
