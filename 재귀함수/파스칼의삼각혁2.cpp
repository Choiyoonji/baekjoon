#include <stdio.h>
#include <string.h>
int i=0, j=0;
long long int tr[51][51];
long long int f(int a, int b)
{
	if(a==1||b==1){
		tr[a][b]=1;
		return tr[a][b];
	}
	else{
		if(tr[a][b]!=0) return tr[a][b];
		tr[a][b]=f(a-1, b)%100000000+f(a, b-1)%100000000;
		return tr[a][b];
	}
}
int main()
{
	int r, c; 
	scanf("%d %d",&r, &c);
	for(int d=1;d<51;d++)
		memset(tr[d], 0, sizeof(long long int)*51);
	printf("%d",f(r, c)%100000000);
	return 0;
}
