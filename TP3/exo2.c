#include<stdio.h>
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int array_min(int *t, unsigned int n){
    int mini = *t;
    for(unsigned int i = 1;i<n;i++){
        if(*(t+i) < mini)
            mini = *(t+i);
    }
    return mini;
}
int array_find(int *t, unsigned int n,int value){
    for (unsigned int i = 0; i<n; i++){
        if (*(t+i) == value)
            return i;
    }
    return -1;

}

void array_sort(int *t, unsigned int n,int left, int right){
    int idx_left = array_find(t,n,left);
    int idx_right = array_find(t,n,right);
    unsigned int i = idx_left+1 ;
    do{
        int mini = array_min(t+i,idx_right-i);
        int idx = array_find(t+i,idx_right-i,mini);
        swap(t+idx+i,t+i);
        i++;
        
    }while(i < idx_right);

}

int main(){
    int a = 2;
    int b = 5;
    swap(&a,&b);
    printf("a = %d et b = %d\n",a,b);

    unsigned int n = 7;
    int tab[] = {5,8,2,-6,4,2,1};
    array_sort(tab,n,8,4);
    for(unsigned int k = 0; k<n;k++){
        printf("tab[%d] = %d\n",k,tab[k]);
    }
    return 0;
}