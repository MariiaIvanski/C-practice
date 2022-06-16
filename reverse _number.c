

int reverse(int x){
int temp, sign = 1;
    
    if(x == -2147483648)
    {
        return 0;
    }
    
    
    if(x < 0)
    {
        sign = -1;
        x = -x;
    }

    
temp = 0;
while (x > 0){
    if(temp > 214748364 || (temp == 214748364 && x%10 > 7))
    {
        return 0;
    }
    temp = temp * 10 + x%10;
    x/= 10;
    }
    
temp *= sign;
    
    return temp;
}