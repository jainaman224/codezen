// Created by jainaman224

void printPatt(int n)
{
    //write your code here
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j<n;j++)
            cout << char('A'+j);
        cout << endl;
    }
}
