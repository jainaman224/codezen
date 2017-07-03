// Created by jainaman224

void printPatt(int n)
{
    //write your code here
    int curr=0;
    for(int i=1;i<=n;i++){
        curr += i;
        if(i&1)
            for(int j=curr-i+1;j<=curr;j++)
                cout << j << " ";
        else
            for(int j=curr;j>curr-i;j--)
                cout << j << " ";
        cout << endl;
    }
}
