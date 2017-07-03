// Created by jainaman224

void printPatt(int n)
{
    int i, j;
    //write your code here
    for(i=1;i<=n/2;i++){
        for(j=i;j<=n/2;j++)
            cout << ' ';
        for(j=1;j<2*i;j++)
            cout << '*';
        cout << endl;
    }
    for(;i>0;i--){
        for(j=i;j<=n/2;j++)
            cout << ' ';
        for(j=1;j<2*i;j++)
            cout << '*';
        cout << endl;
    }
}
