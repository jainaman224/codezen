// Created by jainaman224

void printPatt(int n)
{
    int i;
    //write your code here
    for(i=1;i<=n/2;i++){
        for(int j=i;j<=n/2;j++)
            cout << ' ';
        for(int j=1;j<2*i;j++)
            cout << j;
        cout << endl;
    }
    for(;i>0;i--){
        for(int j=i;j<=n/2;j++)
            cout << ' ';
        for(int j=1;j<2*i;j++)
            cout << j;
        cout << endl;
    }
}
