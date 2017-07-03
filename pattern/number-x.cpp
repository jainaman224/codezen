// Created by jainaman224

void printPatt(int n)
{
    int i, j;
    //write your code here
    for(i=1;i<n;i++){
        for(j=1;j<i;j++)
            cout << ' ';
        cout << i;
        for(;j<2*n-i-1;j++)
            cout << ' ';
        cout << i;
        cout << endl;
    }
    for(j=1;j<i;j++)
        cout << ' ';
    cout << i-- << endl;
    for(;i>0;i--){
        for(j=1;j<i;j++)
            cout << ' ';
        cout << i;
        for(;j<2*n-i-1;j++)
            cout << ' ';
        cout << i;
        cout << endl;
    }
}
