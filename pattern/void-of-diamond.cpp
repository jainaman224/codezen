// Created by jainaman224

void printPatt(int n)
{
    int i, j;
    //write your code here
    for(i=0;i<n/2;i++){
        for(j=0;j<(n+1)/2-i;j++)
            cout << '*';
        for(;j<(n+1)/2+i-1;j++)
            cout << ' ';
        for(;j<n;j++)
            cout << '*';
        cout << endl;
    }
    for(;i>=0;i--){
        for(j=0;j<(n+1)/2-i;j++)
            cout << '*';
        for(;j<(n+1)/2+i-1;j++)
            cout << ' ';
        for(;j<n;j++)
            cout << '*';
        cout << endl;
    }
}
