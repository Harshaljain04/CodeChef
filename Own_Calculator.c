#include <stdio.h>

int main(void) {
        int a,b;
        char c;
        scanf("%d %d %c",&a,&b,&c);
        switch(c)
        {
            case '+' :
            {
                printf("%d",a+b);
                break;
            }
            case '-' :
            {
                printf("%d",a-b);
                break;
            }
            case '*' :
            {
                printf("%d",a*b);
                break;
            }
            case '/' :
            {
                printf("%.7f",1.0*a/b);
                break;
            }
        }
	// your code goes here
	return 0;
}
