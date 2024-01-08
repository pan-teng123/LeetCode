//
// Created by HUAWEI on 2023/12/31.
//
using namespace std;
#include <vector>
#include <math.h>
vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>>mat(n,vector<int>(n));
    int num=n;
    int l=0,r=n-1;
    int h=0,s=n-1;
    int index=1;
    while (num>1){
        for (int i=0;i<num-1;i++){
            mat[h][l+i]=index;
            index++;
        }
        for (int i=0;i<num-1;i++){
            mat[h+i][r]=index;
            index++;
        }
        for (int i=0;i<num-1;i++){
            mat[s][r-i]=index;
            index++;
        }
        for (int i=0;i<num-1;i++){
            mat[s-i][l]=index;
            index++;
        }
        num-=2;
        l+=1;
        r-=1;
        h+=1;
        s-=1;
    }
    if(n%2==1){
        mat[n/2][n/2]=n*n;
    }
    return mat;
}