#include <stdio.h>

int main(){
    int t,n[t];
    scanf("%d",&t);
    for (int i = 0; i <t; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i <t; i++)
    {
        if (i>0)
        {
            printf("%d\n",n[i]-n[i-1]);
        }else{
        printf("%d\n",n[i]);
        }    
    }
    
    return 0;
}