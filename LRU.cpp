#include<iostream>
using namespace std;

int main(){

    int **array = new int *[4];

    for(int i=0;i<4;i++)
        *(array+i) = new int[4];

    return 0;
}