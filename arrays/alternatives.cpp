// Created by jainaman224

void rearrange(int *arr,int l)
{
//Write code here, make changes in the same array 
int pos=0, neg=1, temp;
int temparr[l];
for(int i=0;i<l;i++){
    if(arr[i]>0){
        temparr[pos]=arr[i];
        pos+=2;
    }
    else if(arr[i]<0){
        temparr[neg]=arr[i];
        neg+=2;
    }
}
for(int i=0;i<l;i++)
    arr[i]=temparr[i];
}