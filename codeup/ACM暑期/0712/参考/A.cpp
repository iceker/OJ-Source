#include <stdio.h>
#include <stdlib.h>
int main() {
	int M,N;
	while(scanf("%d%d",&M,&N)!=EOF) {
		int i,j,J[1000],F[1000],temp1;
		double ratio[1000],JavaBeans=0,temp;
		if((M==-1)&&(N==-1)) {
			return 0;
		}
		for(i=0; i<N; i++) {
			scanf("%d%d",&J[i],&F[i]);
			ratio[i]=(J[i]*1.0)/F[i];
		}
		for(i=0; i<N; i++) {
			for(j=0; j<N-i-1; j++) {
				if(ratio[j]<ratio[j+1]) {
					temp=ratio[j];
					ratio[j]=ratio[j+1];
					ratio[j+1]=temp;
					temp1=F[j];
					F[j]=F[j+1];
					F[j+1]=temp1;
					temp1=J[j];
					J[j]=J[j+1];
					J[j+1]=temp1;
				}
			}
		}
		for(i=0; i<N; i++) {
			if(M>=F[i]) {
				JavaBeans=J[i]+JavaBeans;
				M=M-F[i];
			} else {
				JavaBeans=JavaBeans+ratio[i]*M;
				break;
			}
		}
		printf("%.3lf\n",JavaBeans);
	}
	return 0;
}
