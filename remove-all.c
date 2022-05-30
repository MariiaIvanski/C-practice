void swap(int *a, int *b);

int removeElement(int* nums, int numsSize, int val){
int i, temp,k;
 temp = 0;
   
    k = numsSize-1;
    
    for(i = numsSize - 1; i >= 0 ; i-- ){
        if (nums[i] == val){
            k--;
        } else {
            break;
        }
    }
    
    
    for (i = (k-1); i >= 0; i--){
       
         if (nums[i] == val){
           
           swap(&nums[i], &nums[k]);    
             k--;
            
        }  
    }
    
    return (k+1);
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}