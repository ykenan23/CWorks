#include <stdio.h>
    #include <locale.h>
    #include <stdlib.h>
    void topla();
    void cikar();
    void carp();
    void menu(){
    int islem;
    setlocale(LC_ALL, "Turkish");
    system("cls");
    printf("****Matris ��lemleri****\n");
    printf("\t1-Toplama ��lemi\n");
    printf("\t2-��karma ��lemi\n");
    printf("\t3-�arpma ��lemi\n");
    printf("\t0-��k��\n\n");
    printf("��lem Se�iniz: ");
    scanf("%d", &islem);
    switch(islem){
    case 0: exit(1);
    break;
    case 1: topla();
    break;
    case 2: cikar();
    break;
    case 3: carp();
    break;
    default: printf("Yanl�� i�lem se�tiniz!!!\n");
    system("PAUSE");
    menu();
    }
    }
    void topla(){
    system("cls");
    int mDiziBir[2][2], mDiziIki[2][2], mDiziSonuc[2][2];
    printf("Birinci Matrisi Giriniz\n");
    for(int i=0; i<2; i++)
    for(int j=0; j<2; j++){
    printf("[%d][%d]= ", i+1, j+1);
    scanf("%d", &mDiziBir[i][j]);
    }
    printf("�kinci Matrisi Giriniz\n");
    for(int i=0; i<2; i++)
    for(int j=0; j<2; j++){
    printf("[%d][%d]= ", i+1, j+1);
    scanf("%d", &mDiziIki[i][j]);
    }
    printf("Sonuc\n");
    for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
    mDiziSonuc[i][j] = mDiziBir[i][j] + mDiziIki[i][j];
    printf("%d ", mDiziSonuc[i][j]);
    }
    printf("\n");
    }
    system("PAUSE");
    menu();
    }
    void cikar(){
    system("cls");
    int mDiziBir[2][2], mDiziIki[2][2], mDiziSonuc[2][2];
    printf("Birinci Matrisi Giriniz\n");
    for(int i=0; i<2; i++)
    for(int j=0; j<2; j++){
    printf("[%d][%d]= ", i+1, j+1);
    scanf("%d", &mDiziBir[i][j]);
    }
    printf("�kinci Matrisi Giriniz\n");
    for(int i=0; i<2; i++)
    for(int j=0; j<2; j++){
    printf("[%d][%d]= ", i+1, j+1);
    scanf("%d", &mDiziIki[i][j]);
    }
    printf("Sonuc\n");
    for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
    mDiziSonuc[i][j] = mDiziBir[i][j] - mDiziIki[i][j];
    printf("%d ", mDiziSonuc[i][j]);
    }
    printf("\n");
    }
    system("PAUSE");
    menu();
    }
    void carp(){
    system("cls");
    int mDiziBir[2][2], mDiziIki[2][2], mDiziSonuc[2][2]={0};
    int i, j, k;
    printf("Birinci Matrisi Giriniz\n");
    for(i=0; i<2; i++)
    for(j=0; j<2; j++){
    printf("[%d][%d]= ", i+1, j+1);
    scanf("%d", &mDiziBir[i][j]);
    }
    printf("�kinci Matrisi Giriniz\n");
    for(i=0; i<2; i++)
    for(j=0; j<2; j++){
    printf("[%d][%d]= ", i+1, j+1);
    scanf("%d", &mDiziIki[i][j]);
    }
    printf("Sonuc\n");
    for(i=0; i<2; i++){
    for(j=0; j<2; j++){
    for(k=0; k<2; k++){
    mDiziSonuc[i][j] += mDiziBir[i][k] * mDiziIki[k][j];
    }
    printf("%d ", mDiziSonuc[i][j]);
    }
    printf("\n");
    }
    system("PAUSE");
    menu();
    }
    int main(){
    menu();
    }
