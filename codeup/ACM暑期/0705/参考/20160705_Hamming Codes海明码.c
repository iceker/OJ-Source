#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n, b, d;
	scanf("%d%d%d", &n, &b, &d);
	int i, cnt = 1, s[64] = {0,};
	for (i = 1; i < (int)pow(2, b) && cnt <= n; ++i)
	{
		int j, count_1, count = 0;
		for (j = 0; j < cnt; ++j)
		{
			int temp = i ^ s[j];
			for (count_1 = 0; temp; temp >>= 1)
				count_1 += temp & 1;
			if (count_1 >= d) count++;
		}
		if (count == cnt) s[cnt++] = i;
	}
	cnt = 0;
	for (i = 0; i < n; i++)
	{
		if (cnt > 0)printf(" ");
		printf("%d", s[i]);
		cnt++;
		if (cnt == 10)
		{
			printf("\n");
			cnt = 0;
		}
	}
	printf("\n");
	return 0;
}