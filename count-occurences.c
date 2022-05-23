
/*count the frequency of each element of an array */

int main(){
int arr[] = {1, 2, 4, 5, 4, 1};
int arr2[6];
int length = 6; 
int i,j, times;
    for (i=0; i < length; i++)
    {
    times = 1; 

            for (j=i+1; j < length; j++){
             arr2[i] = -1;
                if(arr[i] == arr[j])
                {
                times++;
                arr2[j] = 0;
                }
            }
        if(arr2[i] != 0)
        {
        arr2[i]= times;
        }
    }
 for(i =0; i<length; i++)
 {
        if(arr2[i]!=0)
        {
        printf("%d occures %d times\n", arr[i], arr2[i]);   
        }
    }
}
