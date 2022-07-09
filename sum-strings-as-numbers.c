#include <malloc.h>
#include <string.h>
int aToI(const char *x);
char *iToA(int sum);
int numLength(int sum);

char *strsum(const char *a, const char *b)
{
    int sum;

    sum = aToI(a) + aToI(b);
    return iToA(sum);
}

int aToI(const char *x)
{
    int ret = 0;
    int i = 0;

    for (i = 0; x[i] != '\0'; ++i)
    {
        ret = ret * 10 + x[i] - '0';
    }
  return ret;
}

char *iToA(int sum)
{
    int i = 0;
    char *ret = NULL;
    int length = numLength(sum);
    ret = malloc(length * sizeof(char) + 1);

    for (i = length - 1; i >= 0; --i)
    {
        ret[i] = sum % 10 + '0';
        sum /= 10;
    }
    ret[length] = '\0';
    return ret;
}

int numLength(int sum)
{
    int ret = 0;
    for (; sum > 0; sum /= 10)
    {
        ++ret;
    }
  if(ret == 0)
  {
    return 1;
  }
    return ret;
}