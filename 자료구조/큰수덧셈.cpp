#include<stdio.h>
#include <string.h>
char a[101], b[101];
int al, bl, i, j, k, c;
void f(){
	i=al-1;
	j=bl-1;
	for(;j>=0;j--){
		if(a[i]+b[j]>=10){
			a[i]=(a[i]+b[j])%10;
			if(i-1>=0) a[i-1]+=1;
			else printf("1");
		}
		else a[i]+=b[j];
		i--;
	}
	for(;i>=0;i--){
		if(a[i]>=10){
			a[i]%=10;
			if(i-1>=0) a[i-1]+=1;
			else printf("1");
		}
	}
	for(int c=0;c<al;c++) printf("%d",a[c]);
	return ;
}
void g(){
	i=al-1;
	j=bl-1;
	for(;i>=0;i--){
		if(a[i]+b[j]>=10){
			b[j]=(a[i]+b[j])%10;
			if(j-1>=0) b[j-1]+=1;
			else printf("1");
		}
		else b[j]+=a[i];
		j--;
	}
	for(;j>=0;j--){
		if(b[j]>=10){
			b[j]%=10;
			if(j-1>=0) b[j-1]+=1;
			else printf("1");
		}
	}
	for(c=0;c<bl;c++) printf("%d",b[c]);
}
int main(){
	scanf("%s %s",a,b);
	al=strlen(a);
	bl=strlen(b);
	for(i=0;i<al;i++) a[i]-='0';
	for(i=0;i<bl;i++) b[i]-='0';
	if(al>bl) {
		f();
	}
	else {
		g();	
	}
	return 0;
}
