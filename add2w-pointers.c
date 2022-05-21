
int main()
{
    int a;
    int b;
    
    printf(" Input the first number : ");
   scanf("%d", &a);
   printf(" Input the second  number : ");
   scanf("%d", &b);  
    
    
    int *ptrA;
    int *ptrB;
    ptrA = &a;
    ptrB = &b;
    int sum;

sum = *ptrA + *ptrB;
printf(" The sum of two numbers is: %d \n", sum);
    
}