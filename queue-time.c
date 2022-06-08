int queue_time(const int *customers, int customers_length, int n)
{
    int i, min, index, count;
    int time = 0;

    if(n==1)
    {
        for(i=0; i<customers_length; ++i)
        {
            time += customers[i];
        }
    }
    else if(n >= customers_length)
    {
        for(i=0; i < customers_length; ++i)
        {               
            if(customers[i] > time) {
                time = customers[i];
            }       
        }
    }
    else
    {
        int *cashdesks = malloc(n*sizeof(int));

        for(i=0; i<n; ++i){
            cashdesks[i] = customers[i];
        }

        for(count=n; count<customers_length; ++count){
            min = cashdesks[0];
            index = 0;
            for(i=1; i < n; ++i)
            {               
                if(cashdesks[i] < min) {
                    min = cashdesks[i];
                    index = i;
                }    
            }
            cashdesks[index] += customers[count];
        }

        for(i=0; i < n; ++i)
        {               
            if(cashdesks[i] > time) {
                time = cashdesks[i];
            }       
        }
        free(cashdesks);
    }
    return time;
}