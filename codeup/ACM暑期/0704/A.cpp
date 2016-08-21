#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <algorithm>
#define M 100000+5
using namespace std;

int T[M]= {0},D[M]= {0};
pair<int,int > itv[M];
int main() {
	int N;

	scanf("%d",&N);
	for(int i=0; i<N; i++) {
		scanf("%d",&T[i]);
		scanf("%d",&D[i]);
	}




	int sum=0;
	for(int i=0; i<N; i++) {
		itv[i].first =T[i];
		itv[i].second=D[i];
	}

	sort(itv,itv+N);


	int ans=0;
	for(int i=0; i<N; i++) {
		ans=ans+itv[i].first

		    //printf("%d%d\n",itv[i].first,itv[i].second);
	}

	return 0;
}
