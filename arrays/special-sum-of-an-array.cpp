// Created by jainaman224

int sum(int *arr,int size)
{
//Write code here 
int sum=0;
for(int i=0;i<size;i++)
    sum+=arr[i];
return (sum-1)%9+1;
}