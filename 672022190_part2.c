#include <stdio.h>
#include <stdlib.h>

int main(){
int i,j,n;
system("cls");
printf("===========================\n");
printf("        Pilihan Menu       \n");
printf("===========================\n");
puts("1. Level 1");
puts("2. Level 2");
puts("3. Level 3");
puts("4. Exit \n");
printf("Pilih Menu : ");
scanf("%d", &n);

switch(n)
{
case 1:;
    int i,j,k;
    printf("Masukkan Angka : ");
    scanf("%d", &n);
    for(i=1; i<=n;i++){
            k=i;
        for(j=0;j<i;j++){
            printf("%3d",k-1);
    k++;
        }
        printf("\n");
    }
    break;
case 2:;
    int a;
    printf("Masukkan Angka: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=i;j<=i*i;j++)
        {
            printf("%3d",j);
            j=j+i-1;
        }
        printf("\n");
    }
    break;
case 3:;
    int n, b=1;
    printf("Masukkan Jumlah Angka(max 9): ");
    scanf("%d", &n);
    n=n-1;
    for(int i=1;i<=n+1;i++)
    {
        for(int j=i;j<n;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k<i)printf("%d",b++);
            else if(k==i) printf("%d",b);
            else printf("%d",--b);
        }
        printf("\n");
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k<i)printf("%d",b++);
            else if(k==i)printf("%d",b);
            else printf("%d",--b);
        }
        printf("\n");
    }
    break;
case 4:;
printf("Terima Kasih");
return 0;
break;
default:
    printf("Menu tidak tersedia");
}
}

