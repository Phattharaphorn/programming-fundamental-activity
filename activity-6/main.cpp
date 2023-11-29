#include <stdio.h>
void swap(int *, int *);
int main()
{
    int num1, num2;
    printf("Input: \n");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    printf("\nOutput: \n%d %d ", num1, num2);
    return 0;
}
void swap(int *n1, int *n2)
{