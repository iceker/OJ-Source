void bigmul(int x, int y, int r[])
{
	int base = 10000;
	int x2 = x / base;   //87654
	int x1 = x % base;   //5678 
	int y2 = y / base;	 //1234 
	int y1 = y % base; 	 //5678 

	int n1 = x1 * y1;    //32,239,684 
	int n2 = x1 * y2;    //7,006,652
	int n3 = x2 * y1;    //497,699,412 
	int n4 = x2 * y2;    //108,165,036 

	r[3] = n1 % base;
	r[2] = n1 / base + n2 % base + n3 % base;
	r[1] = n2 %base+n3/base+n4%base; // ??
	r[0] = n4 / base;
	
	r[1] += r[2] / base;  // МоїХ 
	r[2] = r[2] % base;
	r[0] += r[1] / base;
	r[1] = r[1] % base;
}

#include <stdio.h>

int main(int argc, char* argv[])
{
	int x[] = {0,0,0,0};

	bigmul(87654321, 12345678, x);

	printf("%d%d%d%d\n", x[0],x[1],x[2],x[3]);

	return 0;
}


