// Created by jainaman224

#include <iostream>
using namespace std;

void printPatt(int n){
    int j;
    for(int i=n;i>0;i--){
        for(j=1;j<i;j++)
            cout << ' ';
        for(;j<n;j++)
            cout << n+j-2*i+1;
        for(;j>=i;j--)
            cout << n+j-2*i+1;
        cout << endl;
    }
}

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    printPatt(n);
}
