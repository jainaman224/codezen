// Created by jainaman224

// arr - input array
// n - size of array
int equilibrium(int arr[], int n) {
	// Write your code here
	int sum=0, left=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    for(int i=0;i<n;i++){
        if(sum-arr[i]-left==left)
            return i;
        left+=arr[i];
    }
    return -1;
}
