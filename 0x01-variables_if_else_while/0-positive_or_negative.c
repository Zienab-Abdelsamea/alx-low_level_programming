#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void){
	int n;
	srand(time(0));
	n=rand();
	if (n>0)
		printf("%i is positive\n", n);
	else if (n<0)
		printf("%i is negative\n',n);
	else 
		print("%i is zero\n",n);
	return (0);
}
