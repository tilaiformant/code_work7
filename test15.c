#include <stdio.h>

int add(int a, int b)
{
    int sum = 0;
    sum = a + b;
    return sum;

}
int main()
{
    int x, y;
    int total = 0;

    printf("請輸入兩數值 \n ==> ");
    scanf("%d %d",&x,&y);
    total = add(x, y);
    printf("%d + %d = %d\n", x, y, total);
    getchar();
    return 0;
}






    