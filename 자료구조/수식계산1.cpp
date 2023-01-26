#include<stdio.h>
char a[200];
long long int n[100];
int s, k=-1;
int main(){
	scanf("%[^\n]s",a);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]>47){
			k++;
			s=a[i]-'0';
			while(1){
				i++;
				if(a[i]<48) break;
				s=s*10+a[i]-'0';
			}
			n[k]=s;
			s=0;
		}
		else{
			
			switch(a[i]){
				case 42:
					n[k-1]*=n[k];
					k--;
					break;
				case 43:
					n[k-1]+=n[k];
					k--;
					break;
				case 45:
					n[k-1]-=n[k];
					k--;
					break;
			}
		}
	}
	printf("%lld",n[k]);
}
