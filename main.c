#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>

main()
{
    int N;
    setlocale(LC_ALL,"Rus");
    printf("Номер задачи: \n");
    scanf("%d", &N);
    while(N)
    {

        if (N == 3)
        {
            int n;
            printf("Введите радиус\n");
            scanf("%d", &n);
            f3(n);


        }
        if (N==7)
        {
    int a, n;
    printf("Введите числа\n");
    scanf("%d%d", &a, &n);
    f7(a, n);

}


        printf("\nНомер задачи: \n");
        scanf("%d", &N);
    }
}
void f3(n)
{
    int  i, j;
    bool a1, a2, a3, a4;

    for (i = -n; i <= n; i++)
    {
        for (j = -n; j <= n; j++)
        {
            a1=(i +1)*(i +1) + (j *j ) <= n*n;
            a2=(i *i) + (j +1)*(j +1) <= n*n;
            a3 =(i -1)*(i -1) + (j *j) <= n*n;
            a4=(i*i) + (j -1)*(j -1) <= n*n;
            if (((i*i) + (j *j) <= n*n) &&(!a1 ||!a2 ||!a3 || !a4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }



}
int f7(a, b)
{
    int i, j, x;
    i = 0;
    while(1 == 1)
    {
        x = 1;
        for (j = 0; j < b; j++)
            x *= i;
        if (x == a)
        {
            printf("%d", i);
            return 0;
        }

        if (x > a)
        {
            printf("без вариантов\n");
            return 0;
        }
        i++;
    }
 return 0;
}
