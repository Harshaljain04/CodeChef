#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum=0,min,count=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        min=a[0];
        for(int j=0;j<n;j++)
        {
                if(a[j]<min)
                min=a[j];
        }
        printf("%d\n",sum-min);
        // printf("%d\n",min);
    }
	// your code goes here
	return 0;
}
