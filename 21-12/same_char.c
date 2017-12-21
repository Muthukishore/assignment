#include<stdio.h>
#include<string.h>
int main()
{
    char a[10]="muthu",op;
    int i,j,n;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
    if(a[i]==a[j])
    printf("%c",a[i]);
    }
}
