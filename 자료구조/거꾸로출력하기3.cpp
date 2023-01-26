#include <stdio.h>
int main() {
	int n, i;
	int a[n];
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);
	return 0;
}
