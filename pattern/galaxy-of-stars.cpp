// Created by jainaman224

void printPatt(int n)
{
    int i;
    //write your code here
    for(i=1;i<=n/2;i++){
        for(int j=0;j<i;j++)
            cout << '*';
        cout << endl;
    }
    for(;i>0;i--){
        for(int j=0;j<i;j++)
            cout << '*';
        cout << endl;
    }
}
