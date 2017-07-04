// Created by jainaman224

#include <vector>

vector<int> smallestSubarray(int sum, vector<int> input) {
	// Write your code here
    vector <int> ans;
    int i, start = 0, initial=0, min = input.size()+1, total=0;
    for(i=0;i<input.size();i++){
        total += input[i];
        if(total<=0)
            start = i;
        else if(total>sum){
            while(total>sum)
                total-=input[start++];
            if(min>i-start+1){
                min=i-start+1;
                initial=start-1;
            }
        }
    }
    for(i=0;i<=min;i++)
        ans.push_back(input[initial+i]);
    return ans;
}
