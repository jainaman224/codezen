// Created by jainaman224

int maxProfit(int *arr,int l)
{
//Write code here 
int min=arr[0], max=arr[0], profit=0;
for(int i=1;i<l;i++){
    if(min>arr[i]){
        min = arr[i];
        max=arr[i];
    }
    if(max<arr[i])
        max=arr[i];
    if(profit<max-min)
        profit=max-min;
}
return profit;
}
