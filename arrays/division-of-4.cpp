// Created by jainaman224

void change(int *arr,int l)
{
//Write code here 
for(int i=0;i<l;i++){
    arr[i]/=4;
    if(!arr[i])
        arr[i]=-1;
}
}
