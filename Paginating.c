int Paginating(unsigned long num);

int main(void)
{
    printf("%d \n",Paginating(452));
}

int Paginating(unsigned long num)
{
    int i = 1, temp = 0, res = 0;

for(temp = 10, res = 0; temp <= num; temp *= 10, ++i){
res += 9 * (temp/10) * i;
}
res += (num - ((temp / 10 ) - 1)) * i;
return res;
}