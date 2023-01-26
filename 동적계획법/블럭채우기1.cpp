#include <stdio.h>
int n[10010];
int main()
{
	int k;
	n[0] = 1;
	n[1] = 1;
	n[2] = 2;
	scanf("%d", &k);
	if (k <= 2)
	{
		printf("%d", n[k] % 100000007);
		return 0;
	}
	for (int i = 3; i <= k; i++)
	{
		n[i] = n[i - 2] % 100000007 + n[i - 1] % 100000007;
	}
	printf("%d", n[k] % 100000007);
	return 0;
}
