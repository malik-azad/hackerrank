int simpleArraySum(int ar_count, int* ar) {
    int i;
    int sum = 0;
    for(i=0;i < ar_count;i++)
    {   
         sum = sum + ar[i];
    }
    return sum;
}
