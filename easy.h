// common operations

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}


// number operations

int numlen(int x){
    int c=0;
    while(x){
        x=x/10;
        ++c;
    }
    return c;
}
int numcount(int x,int y){
    int c=0;
    while(x){
        if(x%10==y) ++c;
        x=x/10;
    }
    return c;
}

// Arrays operations
void dupi(int *arr){
    int len=sizeof(*arr);
    int x[len];
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if (arr[i]==arr[j]) arr[j]=0; 
        }
    }
    
}
void sorta(int *arr){
    int temp,x=sizeof(*arr);
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if (arr[i]>arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
}
void sortd(int *arr){
    int temp,x=sizeof(*arr);
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if (arr[i]<arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
}

