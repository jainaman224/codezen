// Created by jainaman224

#include<iostream>
using namespace std;

void printPatt(int n){
    for(int i=n;i>0;i--){
        for(int j=i;j<n+i;j++)
            cout << (j<n?j:n);
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


