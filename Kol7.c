#include <stdio.h>
struct Samochod{int nr; char marka[15];};
funs(struct Samochod tab[], int roz, const char* nap){
    FILE *f;
    f=fopen(nap,"w");
    for(int i=0;i<roz;i++){
        fprintf(f,"%d, %s\n",tab[i].nr, tab[i].marka);
    }
    fclose(f);
}
int main(){
    struct Samochod tab[3];
    tab[0].nr=154;
    tab[1].nr=1233;
    tab[2].nr=213;
    strcpy(tab[0].marka, "ford");
    strcpy(tab[1].marka, "audi");
    strcpy(tab[2].marka, "volkswagen");
    funs(tab,3,"nowy");
    return 0;
}
