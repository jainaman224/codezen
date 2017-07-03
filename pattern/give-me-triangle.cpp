// Created by jainaman224

void printPatt(int n)
{
    //write your code here
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i;j++)
            cout << ' ';
        for(int j=0;j<i;j++)
            cout << '*';
        cout << endl;
    }
}
