// Created by jainaman224

long long merge(int a[], int start, int end, int mid){
    long long count = 0;
    int i=start, j=mid+1, k=0, temp[end-start+1];
    while(i<=mid && j<=end)
        if(a[i]<=a[j])
            temp[k++] = a[i++];
        else{
            temp[k++]=a[j++];
            count+=mid-i+1;
        }

    while(i<=mid)
        temp[k++]=a[i++];

    while(j<=end)
        temp[k++]=a[j++];
        
    for(int i=0;i<=end-start;i++)
        a[i+start]=temp[i];
    
    return count;
}

long long mergesort(int a[], int start, int end){
    long long count = 0;
    int mid;
    if(start<end){
        mid = start+(end-start)/2;
        count=mergesort(a, start, mid);
        count+=mergesort(a, mid+1, end);
        
        count+=merge(a, start, end, mid);
    }
    return count;
}

long long solve(int A[], int n)
{
	// Write your code here.
	return mergesort(A, 0, n-1);
}