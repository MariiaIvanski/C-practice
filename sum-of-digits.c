int digital_root(int n) {
  int temp = 0;
 
do
{
for ( temp=0 ; n > 0; n /= 10)
  {
    temp += n%10;
   }
  n = temp;
} while (temp >= 10);
   
  return temp;
}