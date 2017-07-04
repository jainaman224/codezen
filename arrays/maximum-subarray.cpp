// Created by jainaman224

#include <vector>

vector<int> maxset(int *a, int size) {
	// Write your code here
    vector <int> ans;
    int i, start = 0, count = 0, max = 0;
    for(i=0;i<size;i++){
        if(a[i]>=0)
            count++;
        else{
            if(count > max){
                max = count;
                start = i-max;
            }
            count = 0;
        }
    }
    if(count > max){
        max = count;
        start = i-max;
    }
    for(i=0;i<max;i++)
        ans.push_back(a[start+i]);
    return ans;
}
