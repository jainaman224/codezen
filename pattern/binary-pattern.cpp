// Created by jainaman224

void printPatt(int n)
{
    //write your code here
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)
            cout << (i&1?0:1);
        cout << endl;
    }
}
