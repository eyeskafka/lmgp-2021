/*Aluna: Lia Manis Guedes Pereira, 
Tecnologia em Informática em Saúde*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
   
  int n, i, j;
  float temp=0;
  float num[100], sum=0, avg; 
  float variance, std_deviation;
  float median; 
  float min=sizeof i, max=sizeof i;
   
     
      printf("Enter number: ");
      scanf("%d", &n); 
    
  for (i = 0; i < n; i++) { 
      
      printf("%d -> Numbers: ", i);
      scanf("%f", &num[i]);
   
    
      if (num[i]<min) min=num[i];        /* funcão para achar o número mínimo e máximo */
     
      if (num[i]>max) max=num[i];             
      
   
   
      sum += num[i];        /* soma dos números digitados*/
        
      avg = sum/n;         /* cálculo da média */
            
      variance += pow((num[i] - avg),2)/n;     /* cálculo da variância */    
      
      std_deviation = sqrt(variance);       /* cálculo do desvio padrão */
    
   } 
      
      printf("min = %.2f\n, max = %.2f\n", min, max);

      printf("Average = %.2f\n", avg);
      
      printf("variance of all elements = %.2f\n", variance);
    
      printf("Standard deviation = %.2f\n", std_deviation);
      
      
    
  for (i=0; i <n; i++) {
         for (j=i+1; j<n; j++) {
            if (num[i] > num[j]) {
                 temp = num[i];
                 num[i]=num[j];
                 num[j]=temp;
        
           }
     
       }
  }
                 if (n%2==0) 
              
                    median=(temp[(i-1)/2] + temp[i/2])/2.0;
                 
                 else
                     median= temp[i/2];
                
                          
                 
  printf("Median= %.2f\n", median);
}
        
