#include <stdio.h>
int main() {
    int i, j=1, k, n=0, c;
    int a[1000001], b[1000001];
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=k;i++)
    {
        if(a[i]!=0)
        b[j]=a[i];
        if(a[i]==0)
        j-=2;
        c=j;
        j++;
    }
    for(j=1;j<=c;j++){
    	n+=b[j];
	}
    printf("%d",n);
}

