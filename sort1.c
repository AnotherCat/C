#include<stdio.h>

int x[300];
int N;

void f(int n){
    if(n <= 0){
        int i;
        for(i = N;i > 0;i--){
            printf("%d",x[i]);
        }
        printf("\n");
    }else{
        int i;
        for(i = 1;i <= N;i++){
            x[n] = i;
            f(n-1);
        }
    }
}

int main(){
    scanf("%d",&N);

    f(N);

    return 0;
}
