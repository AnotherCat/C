
#include<stdio.h>

int path[6][6],start,end;
int check[300]={0};
int ways[300],pt = 0;

int f(int s,int e)
{
    int i,sum,min=-1;
    if(s==end)
    {
        return 0;
    }
    check[s]=1;
    for(i=0;i<6;i++)
    {
        if(check[i]!=1&&path[s][i]>0)
        {
            sum=path[s][i]+f(i,e);
            if(min!=-1&&sum<min)
            {
                min=sum;
            }
            else if(min==-1)
            {
                min=sum;
            }
        }
    }
    check[s]=0;
    return min;
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
    printf("%d\n",f(start,end));
    return 0;
}
