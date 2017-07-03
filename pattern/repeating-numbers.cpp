// Created by jainaman224

void printPatt(int n)
{
    //write your code here
    int curr=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<(1<<i);j++)
            cout << (curr++)%9+1;
        cout << endl;
    }
}
