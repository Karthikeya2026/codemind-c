#include<stdio.h>
int main(){
int min,max;
scanf("%d%d",&min,&max);
for(int j=min;j<=max;j++)
{
    int n=j,c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2) printf("%d
",j);
}
}