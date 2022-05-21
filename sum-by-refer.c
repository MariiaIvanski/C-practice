int addNum(int *a, int *b);

int main()
{
    int a;
    int b;
    int sum;
    
    printf(" Input the first number : ");
   scanf("%d", &a);
    printf(" Input the second  number : ");
   scanf("%d", &b);  
    
    sum = addNum(&a, &b);
    printf("the sum is: %d \n", sum);
}

int addNum(int *a, int *b)
{
    int sum;
    sum = *a + *b;
    return sum;
}