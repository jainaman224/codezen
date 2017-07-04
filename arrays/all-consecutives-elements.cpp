// Created by jainaman224

bool containsConsecutiveNumbers(int input[], int len){
	// Write your code here
    int min=input[0];
    for(int i=1;i<len;i++)
        if(min>input[i])
            min = input[i];
    
    for(int i=0;i<len;i++){
        if(abs(input[i])-min<len && input[abs(input[i])-min]>0)
            input[abs(input[i])-min]*=-1;
        else
            return false;
    }
    return true;
}
