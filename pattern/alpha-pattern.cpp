// Created by jainaman224

#include<iostream>
using namespace std;

void printPatt(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            cout << char('A'+i);
        cout << endl;
    }
}

int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    printPatt(n);
}

