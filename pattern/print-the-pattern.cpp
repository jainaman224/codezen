// Created by jainaman224

#include<iostream>
using namespace std;

void printPattern(int n){
	int startValue = 1;
	for(int i=1;i<=n;i++){
		for(int j=startValue;j<startValue+n;j++)
			cout << j << " ";
		cout << endl;
		if(i==(n+1)/2)
			if(n&1)
				startValue=n*(n-2)+1;
			else
				startValue=n*(n-1)+1;
		else if(i>(n+1)/2)
			startValue-=2*n;
		else
			startValue+=2*n;
	}
}