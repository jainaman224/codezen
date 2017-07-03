// Created by jainaman224

void printPatt(int n)
{
    int j;
    //write your code here
    for(int i=0;i<=n;i++){
        for(j=0;j<n-i;j++)
            cout << ' ';
        for(;j<=n;j++)
            cout << n-j;
        j-=2;
        for(;j>=n-i;j--)
            cout << n-j;
        cout << endl;
    }
}

void printPatt(int n)
{
    int j;
    //write your code here
    for(int i=0;i<=n;i++){
        for(j=0;j<n-i;j++)
            cout << ' ';
        for(;j<=n;j++)
            cout << n-j;
        j-=2;
        for(;j>=n-i;j--)
            cout << n-j;
        cout << endl;
    }
}
