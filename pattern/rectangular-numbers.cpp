// Created by jainaman224

void printPatt(int n)
{
    int max=n, i, j;
    //write your code here
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++)
            cout << max-(i>j?j:i);
        for(;j>=0;j--)
            cout << max-(i>j?j:i);
        cout << endl;
    }
    for(;i>=0;i--){
        for(j=0;j<n-1;j++)
            cout << max-(i>j?j:i);
        for(;j>=0;j--)
            cout << max-(i>j?j:i);
        cout << endl;
    }
}
