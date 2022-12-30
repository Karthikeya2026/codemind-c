#include<stdio.h>
#include<math.h>
int main(){
    int n,b,y=0,z=0,m;
    scanf("%d",&n);
    int a[n];
    
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0||a[i]==1)
        {
            y++;
        }
        
    }
    if(y==n) printf("True");
    else printf("False");
    
}