#include<stdio.h>

void randevu_olustur() {
    
    int i;
    char ad[5][15];
    char soyad[5][10];
    int bolum[5];
    char bolumler[5][50] = {"Kardiyoloji","İc Hastaliklari","Gogus Hastaliklari","Goz Hastaliklari","Gogus Hastaliklari"};
    int gun[5];
    int ay[5];
    int yil[5];
    int saat[5];
    int dakika[5];
    
    
    for(i=0;i<5;i++)
    {
        printf("\nİsminizi giriniz:");
        scanf("%s",ad[i]);
        
        printf("Soyadinizi giriniz:");
        scanf("%s",soyad[i]);
        
        printf("*** Bolumler ***\n\n");
        printf("1-Kardiyoloji\n");
        printf("2-İc Hastaliklari\n");
        printf("3-Gogus Hastaliklari\n");
        printf("4-Goz Hastaliklari\n");
        printf("5-Gogus Hastaliklari\n");
        
        printf("Bir bolum seciniz:");
        scanf("%d",&bolum[i]);

        printf("Gun giriniz:");
        scanf("%d",&gun[i]);

        printf("Ay giriniz:");
        scanf("%d",&ay[i]);

        printf("Yil giriniz:");
        scanf("%d",&yil[i]);
        
        printf("Saat giriniz:");
        scanf("%d",&saat[i]);
        
        printf("Dakika giriniz:");
        scanf("%d",&dakika[i]);
        
    
    }
    
    for(i=0;i<5;i++)
    {
        printf("Ad: %s\n",ad[i]);
        printf("Soyad: %s\n",soyad[i]);
        printf("Bolum: %s\n",bolumler[bolum[i-1]]);
        printf("Gun: %d\n",gun[i]);
        printf("Ay: %d\n",ay[i]);
        printf("Yil: %d\n",yil[i]);
        printf("Saat: %d\n",saat[i]);
        printf("Dakika: %d\n\n",dakika[i]);
    }
    
    
    
    

    
}

int main() {
    
    randevu_olustur();
    
    
    
    
    
    
    
    
    return 0;
}
