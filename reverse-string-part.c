
//  do not allocate memory for return string
//  assign the value to the pointer "result"

void flipper(int start, int end, char *result, const char *sentence);

void spin_words(const char *sentence, char *result)
{
    int i, start; 
    start = 0;
    for(i=0; sentence[i]!= '\0'; ++i)
    {
        if (sentence[i] == ' ')
        {
            result[i] = ' ';

            flipper(start, i, result, sentence);
            start = i+1;
        }
    }
    flipper(start, i, result, sentence);
    result[i] = '\0';
}

void flipper(int start, int end, char *result, const char *sentence)
{
    int length = end - start;
    int j;

    if (length >= 5)
    {
        for (j = start; j < end; ++j)
        {   
            result[j]  = sentence[end-(j-start)-1];          
        }
    }
    else
    {
        for (j = start; j < end; ++j)
        {   
            result[j]  = sentence[j];          
        }
    }
}