int array_min(int *t, int n){
    int mini = *t;
    for(int i = 0; i<n;i++){
        if(*(t + i)< mini)
            mini = *(t + i);
    }
    return mini;
}
int array_max(int *t, int n){
    int maxi = *t;
    for(int i = 0; i<n;i++){
        if(t[i] >= maxi)
            maxi = *(t + i);
    }
    return maxi;
}

int array_find(int *t, unsigned int n, int value){
    for(int i = 0; i < n; i++){
        if(*(t+i) == value)
            return i;    
    }
    return -1;
}

float array_average(int *t, unsigned int n){
    float s = 0;
    for (int i = 0; i<n; i++){
        s += *(t+i);
    }
    return s/n;
}