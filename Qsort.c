#include <stdio.h>
#include <stdlib.h>
int funkcja(const void *a, const void *b){
    int x=*(int*)a;
    int y=*(int*)b;
    if(x==y) return 0;
    if(x>y) return 1;
    if(x<y) return -1;
}
int main(void){
    int t[]={1,5,3,2,4,6,3};
    qsort(t,7,sizeof(int), funkcja);
    for(int i=0; i<7; i++){
        printf("%d", t[i]);
    }
    return 0;
}
