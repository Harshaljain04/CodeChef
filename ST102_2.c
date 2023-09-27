#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        float com=0.2*x;
        float num=100/com;
        if(((int)num*com)==100)
        printf("%d\n",(int)num);
        else printf("%d\n",(int)num+1);
    }
	// your code goes here
	return 0;
}
