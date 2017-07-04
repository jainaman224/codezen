// Created by jainaman224

// arr - input array
// size - size of array

int MissingNumber(int arr[], int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int sum = 0;
    for(int i=0;i<size;i++)
        sum+=arr[i];
    return sum-((size-2)*(size-1))/2;
}
