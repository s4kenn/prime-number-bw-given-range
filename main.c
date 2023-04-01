#include <stdio.h>
void primeBwRange(int a, int b)
{
    int start, end;
    if (a > b)
    {
        start = b;
        end = a;
    }
    else
    {
        start = a;
        end = b;
    }

    for (int i = start; i <= end; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
        else
        {
            continue;
        }
    }
}
int main()
{

    int numberOne, numberTwo;
    printf("Enter the numbers ");
    scanf("%d %d", &numberOne, &numberTwo);
    primeBwRange(numberOne, numberTwo);

    return 0;
}
