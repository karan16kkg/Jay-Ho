// 5. You are given a number n. print the value of factorial n!.
#include <stdio.h>
int fact(int n)
{
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        else
        {
            return n * fact(n - 1);
        }
    }
}
int main()
{
    int num;
    printf("Enter the value of num : ");
    scanf("%d", &num);
    printf("%d", fact(num));

    return 0;
}