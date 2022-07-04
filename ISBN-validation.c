#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool is_valid_ISBN_10(const char *ISBN)
{
    int i = 0;
    int total = 0;
    int modls = 0;
    int length = strlen(ISBN);

    if (length != 10)
    {
        return false;
    }
    else if (ISBN[9] == 'X')
        {
            total += 100;
        }
        else if (ISBN[9] >= '0' && ISBN[9] <= '9')
        {
            total += (ISBN[9] - '0') * 10;
        } else {
          return false;
        }

        for (i = 0; i < 9; ++i)
        {
          if(ISBN[i] >= '0' && ISBN[i] <= '9')
          {
            total += (ISBN[i] - '0') * (i + 1);
          } else {
            return false;
          }
        }

        modls = total % 11;

        return (modls == 0);
    }
