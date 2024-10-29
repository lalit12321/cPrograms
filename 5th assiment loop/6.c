#include<stdio.h>
int main(){
    int count=0;
    for(int i=1; i<=100; i++){
        if(i%7==0)
        count++;
    }
    printf("7 factor is 1 to 100 is %d.",count);
}