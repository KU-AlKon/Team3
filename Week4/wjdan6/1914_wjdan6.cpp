#include <stdio.h>
#include <math.h>

void hanoi(int n,int a,int b, int c)
{
    if(n==1){
        printf("%d %d\n",a,c);
        return;
    }
    hanoi(n-1,a,c,b);
    printf("%d %d\n",a,c);
    hanoi(n-1,b,a,c);

}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%.0lf\n",pow(2,(double)n)-1);
    if(n>20)
        return 0;
    hanoi(n,1,2,3);
}
