// Created by jainaman224

void print(int i, int n){
    int j;
    if(i%2==0)
        cout << " ";
    for(j=0;j<(i+1)/2;j++){
        cout << '*' << " ";
    }
    for(;j<n-((i&1)?(i+1)/2:(i+3)/2);j++){
        cout << "  ";
    }
    for(;j<((i&1)?(n):(n-1));j++){
        cout << '*' << " ";
    }
    cout << endl;
}

void printPatt(int n)
{
    int i;
    for(i=1;i<n;i++){
        print(i, n);
    }
    for(;i>0;i--){
        print(i, n);
    }
}
