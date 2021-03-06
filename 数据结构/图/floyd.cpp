/*
http://developer.51cto.com/art/201403/433874.htm
输入格式：
第一行两个数为n和m，n表示顶点个数，m表示边的条数。
接下来m行，每一行有三个数t1、t2 和t3，表示顶点t1到顶点t2的路程是t3。

输出格式：
任意两点间的最短距离

输入：
4 8
1 2 2
1 3 6
1 4 4
2 3 3
3 1 7
3 4 1
4 1 5
4 3 12

*/

#include <stdio.h>   
int main()
{
	int e[10][10], k, i, j, n, m, t1, t2, t3;
	int inf = 99999999; //用inf(infinity的缩写)存储一个我们认为的正无穷值   
	//读入n和m，n表示顶点个数，m表示边的条数   
	scanf("%d %d", &n, &m);

	//初始化   
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i == j) e[i][j] = 0;
			else e[i][j] = inf;
	//读入边   
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &t1, &t2, &t3);
		e[t1][t2] = t3;
	}

	//Floyd-Warshall算法核心语句   
	for (k = 1; k <= n; k++)
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (e[i][j]>e[i][k] + e[k][j])
					e[i][j] = e[i][k] + e[k][j];

	//输出最终的结果   
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%10d", e[i][j]);
		}
		printf("\n");
	}

	return 0;
}
