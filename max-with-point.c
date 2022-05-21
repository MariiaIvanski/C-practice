int findMax (int *ptrA, int *ptrB);

int main()
{
    int a;
    int b;
    int max;

    printf(" Input the first number : ");
   scanf("%d", &a);
    printf(" Input the second  number : ");
   scanf("%d", &b); 

    int *ptrA;
    int *ptrB;
        ptrA = &a;
        ptrB = &b;

max = findMax(ptrA, ptrB);
printf("%d is the maximum number \n", max);
}

int findMax(int *ptrA, int *ptrB)
{
    if (*ptrA > *ptrB)
    {
        return *ptrA;
    }
        else 
        {
            return *ptrB;
        }
}