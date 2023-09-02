#include <stdio.h>

int main(void) {
        int n;
        scanf("%d",&n);
        int s[n],t[n],max_lead[n],winner[n],s1=0,s2=0,t1=0,W,L;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
            scanf("%d",&t[i]);
        }
        for(int i=0;i<n;i++)
        {
            s1=s1+s[i];
            s2=s2+t[i];
            if(s1>s2)
            {
                max_lead[i]=s1-s2;
                winner[i]=1;
            }
            else{
                max_lead[i]=s2-s1;
                winner[i]=2;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(L<max_lead[i])
            {
                L=max_lead[i];
                W=winner[i];
            }
        }
        printf("%d %d",W,L);
	// your code goes here
	return 0;
}
