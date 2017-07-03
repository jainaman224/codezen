// Created by jainaman224

void printPatt(int n)
{
    int j;
    //write your code here
    for(int i=0;i<n;i++){
        for(j=0;j<i;j++)
            cout << ' ';
        for(;j<n;j++)
            cout << char('A'+j-i);
        for(;j>i;j--)
            cout << char('A'+j-i-1);
        cout << endl;
    }
}
