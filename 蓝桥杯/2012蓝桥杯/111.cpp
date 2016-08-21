# include <stdio.h>
int turn(int a[], int b[])
{
	int n = 0;
	for(int i = 0; a[i] != EOF; i++) {
		if(a[i] == b[i]) {
			continue;
		} else {
			b[i + 1] = (b[i + 1] == '*' ? 'o' : '*');
			n++;
		}
	}
	return n;
}
int main(void)
{
	int a[1000];
	int b[1000];
	int c;
	int i;
	i = 0;
	while((c = getchar()) != '\n') {
		a[i++] = c;
	}
	a[i] = EOF;
	i = 0;
	while((c = getchar()) != '\n') {
		b[i++] = c;
	}
	b[i] = EOF;
	printf("%d\n", turn(a, b));
}
