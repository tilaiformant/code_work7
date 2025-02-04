#include <stdio.h>

void larger(int a, int b)
{
    if ( a < b )
        printf("較大值是 %d \n", b);
    else if ( a > b)
        printf("較大值是 %d \n", a);
    else
        printf("兩數值相等 \n");

}
int main()
{
    int i, j;
    printf("請輸入兩數值 \n ==> ");
    scanf("%d %d",&i,&j);
    larger(i,j);
    getchar();
    return 0;
}






    