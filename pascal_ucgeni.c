#include <stdio.h>
// Pascal Üçgeni oluşturur

int main() 

{ 

 int satir;

 int i,j,k;

 int sayi = 1;
 
 printf("Pascal Ucgeninin satir sayisini girin: ");
 scanf("%d",&satir);
 
 for(i = 0 ; i < satir ; i++) 
 {
  for(j = 1 ; j <= satir - i ; j++)   
  {
   printf(" ");  
  }

  for(k = 0 ; k <= i ; k++) 
  {
   if(k == 0 || i == 0)
   {
    sayi = 1;
   }

   else
   {
     sayi = sayi * (i - k + 1) / k;
   }

   printf("%4d",sayi);
  }

  printf("\n");
 } 

  return 0;
  
}