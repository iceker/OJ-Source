/*
http://developer.51cto.com/art/201403/433874.htm
�����ʽ��
��һ��������Ϊn��m��n��ʾ���������m��ʾ�ߵ�������
������m�У�ÿһ����������t1��t2 ��t3����ʾ����t1������t2��·����t3��

�����ʽ��
������������̾���

���룺
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
	int inf = 99999999; //��inf(infinity����д)�洢һ��������Ϊ��������ֵ   
	//����n��m��n��ʾ���������m��ʾ�ߵ�����   
	scanf("%d %d", &n, &m);

	//��ʼ��   
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i == j) e[i][j] = 0;
			else e[i][j] = inf;
	//�����   
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &t1, &t2, &t3);
		e[t1][t2] = t3;
	}

	//Floyd-Warshall�㷨�������   
	for (k = 1; k <= n; k++)
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (e[i][j]>e[i][k] + e[k][j])
					e[i][j] = e[i][k] + e[k][j];

	//������յĽ��   
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
