#include <stdio.h>

int main(void) {
   int urgenza;
   float distanza, peso, spese;
   printf("Distanza: ");
   scanf("%f", &distanza);
   printf("Peso: ");
   scanf("%f", &peso);
   printf("Urgenza (0 o 1): ");
   scanf("%d", &urgenza);
   if (distanza < 100) {
   if (urgenza == 0) {
   spese = peso * 1;
}else {
   spese = peso * 2.5;
}}else if (distanza >= 100 && distanza <= 300){
   if (urgenza == 0) {
   spese = peso * 2;
}else {
   spese = peso * 3.5;
}}else if (distanza > 300) {
   if (urgenza == 0) {
   spese = peso * 3;
}else{
   spese = peso * 4;}}
   printf("La spesa e': %.2f ", spese);
}




