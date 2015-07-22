
#include<stdio.h>

int path[6][6],start,end;
int ways[300],count = 0;

void f(int start,int end){
    if(path[start][end] == -1){
        int i;
        for(i = 0;i<count;i++){
            printf("%d ",ways[i]);
        }
        printf("\n");
    }else{
        int i;
        for(i = 0;i < 6;i++){
            if(path[start][i] != 0 && path[start][i] != -1){
                int j,b=0;
                for(j = 0;j < count;j++){
                    if(ways[j] == i){
                        b = 1;
                    }
                }

                if(b == 0){

                }
            }
        }
    }
}

int main(){

    path[0][0] = path[1][1] = path[2][2] = path[3][3] = path[4][4] = path[5][5] = -1;
    path[0][1] = path[1][0] = 7;
    path[0][2] = path[2][0] = 1;
    path[0][3] = path[3][0] = 0;
    path[0][4] = path[4][0] = 2;
    path[0][5] = path[5][0] = 0;

    path[1][2] = path[2][1] = 2;
    path[1][3] = path[3][1] = 1;
    path[1][4] = path[4][1] = 0;
    path[1][5] = path[5][1] = 0;

    path[2][3] = path[3][2] = 21;
    path[2][4] = path[4][2] = 10;
    path[2][5] = path[5][2] = 9;

    path[3][4] = path[4][3] = 0;
    path[3][5] = path[5][3] = 5;

    path[4][5] = path[5][4] = 30;

    scanf("%d %d",&start,&end);
    f(start,end);

    return 0;
}
