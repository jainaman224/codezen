// Created by jainaman224

#include<iostream>
using namespace std;

void printPatt(int n){
    int i, j;
    for(i=0;i<n/2;i++){
        for(j=0;j<i;j++)
            cout << ' ';
        for(j=0;j<=i;j++)
            cout << "* ";
        cout << endl;
    }
    for(;i>=0;i--){
        for(j=0;j<i;j++)
            cout << ' ';
        for(j=0;j<=i;j++)
            cout << "* ";
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


