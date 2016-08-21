#include <stdio.h> 

char* prefix(char* haystack_start, char* needle_start)
{
	char* haystack = haystack_start;
	char* needle = needle_start;

	
	while(*haystack && *needle){
		if(*needle++!=*haystack++) return NULL; 
	}
	
	if(*needle) return NULL;
	
	return haystack_start;
}

int main()
{
	char a[]="abcde";
	char b[]="abS";
	if((prefix(a,b))==NULL)
	{
		printf("NO");
	}
	else
	{
		printf ("YEW");
	}
	
	return 0;
}



