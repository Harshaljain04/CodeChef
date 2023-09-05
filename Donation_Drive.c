#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int n,x,y;
	    scanf("%d %d",&n,&x);
	    y=n-x;
	    printf("%d\n",y);
	}
	return 0;
}

