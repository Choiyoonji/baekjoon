#include<stdio.h>
#include<math.h>
int main(){
	int x11, x22, y11, y22, a, b;
	scanf("%d %d %d %d",&x11, &y11, &x22, &y22);
	a=x11-x22;
	a=a*a;
	b=y11-y22;
	b=b*b;
	printf("%.2f",sqrt(b+a));
}
