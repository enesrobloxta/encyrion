#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){


setlocale(LC_ALL, "Turkish");
srand((unsigned)time(NULL)*127);

//string kısmı
char str[10000];
    printf("metini girinizi\n");
    fgets(str,10000,stdin);
int len=strlen(str);

//rastgele sayı atama kısmı(bunu sabit bir şekilde yap)
int tip,tips;
    printf("kac tip?\n");
    scanf("%d",&tip);
    printf("her tipte kac sayi\n");
    scanf("%d",&tips);
int sayi[tip][tips];

    for(int i=0;i<tip;i++){
        for(int j=0;j<tips;j++){
            sayi[i][j]=rand()%8999+1000;
        }
    }

    
    //10 tip yap
    //encryption kısmı

    int r=rand()%8999+1000;

    printf("%d",r);//tipi belirtecek

    //bu döngü sadece ascii cahrlarıyla çalışıyor
    for(int i=0;i<=len;i++){
        for(int j=0;j<=127;j++){
            if(str[i]==j){
                printf("%d\n",sayi[r%10][j]);
                
            }

        }
    }
    
    


}