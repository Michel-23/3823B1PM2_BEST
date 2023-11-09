int maxmin(int input[], int size){
    int max=0;
    for (int i=1;i<size;i++){
        if ((input[i-1]>input[i]) && (input[i]<input[i+1]) && (input[i]>max))
            max=input[i];
    }
    if (input[0]<input[1] && input[0]>max)
        max=input[0];
    if (input[size-1]<input[size-2] && input[size-1]>max)
        max=input[size-1];
    return max;
}