#include <malloc.h>
#include <string.h>

char *strsum(const char *a, const char *b)
{
    int length;
    int lengthA = strlen(a);
    int lengthB = strlen(b);
    char *ret = NULL;
    int i = 0;
    int dif = 0;
    int extra = 0;

    if (lengthA > lengthB)
    {
        length = lengthA;
    }
    else
    {
        length = lengthB;
    }
    dif = lengthA - lengthB;

    ret = malloc(length * sizeof(char) + 2);
    ret[length+1] = '\0';

    for (i = length; i > 0; --i)
    {
        if (dif > 0)
        {
            ret[i] = a[i - 1] + extra;
            if ((i - 1 - dif) >= 0)
            {
                ret[i] += b[i - 1 - dif] - '0';
            }
        }
        else
        {
            ret[i] = b[i - 1] + extra;
            if ((i - 1 + dif) >= 0)
            {
                ret[i] += a[i - 1 + dif] - '0';
            }
        }

        if (ret[i] > '9')
        {
            ret[i] -= 10;
            extra = 1;
        }
        else
        {
            extra = 0;
        }
    }

    ret[0] = extra + '0';

    while (ret[0] == '0')
    {
        for (i = 0; ret[i] != '\0'; ++i)
        {
            ret[i] = ret[i + 1];
        }
    }

    if (ret[0] == '\0')
    {
        ret[0] = '0';
    }
    return ret;
}