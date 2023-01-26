#include <stdio.h>
#include<queue>
using namespace std;
queue<int> x, y, z;
int a[200][200][200];
int m, n, h, d;
int main(){
	scanf("%d %d %d",&m,&n,&h);
	for(int i=1;i<=h;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=m;k++){
				scanf("%d",&a[j][k][i]);
				if(a[j][k][i]==1) x.push(j), y.push(k), z.push(i);
			}
		}
	}
	while(!x.empty()){
		if(a[x.front()-1][y.front()][z.front()]==0&&x.front()!=1){
			a[x.front()-1][y.front()][z.front()]=a[x.front()][y.front()][z.front()]+1;
			x.push(x.front()-1), y.push(y.front()), z.push(z.front());
		}
		if(a[x.front()][y.front()-1][z.front()]==0&&y.front()!=1){
			a[x.front()][y.front()-1][z.front()]=a[x.front()][y.front()][z.front()]+1;
			x.push(x.front()), y.push(y.front()-1), z.push(z.front());
		}
		if(a[x.front()][y.front()][z.front()-1]==0&&z.front()!=1){
			a[x.front()][y.front()][z.front()-1]=a[x.front()][y.front()][z.front()]+1;
			x.push(x.front()), y.push(y.front()), z.push(z.front()-1);
		}
		if(a[x.front()+1][y.front()][z.front()]==0&&x.front()!=n){
			a[x.front()+1][y.front()][z.front()]=a[x.front()][y.front()][z.front()]+1;
			x.push(x.front()+1), y.push(y.front()), z.push(z.front());
		}
		if(a[x.front()][y.front()+1][z.front()]==0&&y.front()!=m){
			a[x.front()][y.front()+1][z.front()]=a[x.front()][y.front()][z.front()]+1;
			x.push(x.front()), y.push(y.front()+1), z.push(z.front());
		}
		if(a[x.front()][y.front()][z.front()+1]==0&&z.front()!=h){
			a[x.front()][y.front()][z.front()+1]=a[x.front()][y.front()][z.front()]+1;
			x.push(x.front()), y.push(y.front()), z.push(z.front()+1);
		}
		x.pop(), y.pop(), z.pop();
	}
	for(int i=1;i<=h;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=m;k++){
				if(a[j][k][i]==0){
					printf("-1");
					return 0;
				}
				else{
					if(a[j][k][i]>d) d=a[j][k][i];
				}
			}
		}
	}
	printf("%d",d-1);
}
