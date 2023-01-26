#include <stdio.h>
#include <math.h>
int main(){
	float x1, y1, d1, x2, y2, d2;
	scanf("%f%f%f %f%f%f",&x1,&y1,&d1,&x2,&y2,&d2);
	if(d1+d2<sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))) printf("not overlapped");
	else printf("overlapped");
	return 0;
}
