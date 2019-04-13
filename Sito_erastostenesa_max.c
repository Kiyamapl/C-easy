#include<math.h>
#include<stdio.h>
int pierwsza(int n){
    int i;
    int tab[n];
    for(i=0; i<n;i++)
        tab[i]=0;
    for(i=2; i<=pow(n,1/2.0);i++){
        for(int j=i+i;j<=n-1; j=j+i){
            tab[j]=1;
        }
    }
    for(i=n-1; i>=0; i--){
        if(tab[i]==0) return i;
    }
    return 2;
}
int main(){
    int a;
    scanf("%d", &a);
    int b=pierwsza(a);
    printf("%d", b);
    return 0;
}
