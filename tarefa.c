
// Aluna: Lia Manis Guedes Pereira
// Tecnologia em Informática em Saúde, Unifesp-EPM//
// Tafera C, final//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n, i, j, av, **p, *pr;
  int sum=0;
  int avg, variance, std_deviation;
      
  printf("Quantidade de alunos: ");
  scanf("%d",&n);
  printf("Número de avaliações: ");
  scanf("%d",&av);
    
                 
    // alocação dinâmica//  
    
    
   p= (int**)malloc(n*sizeof(int*));
    
   pr= (int*)malloc(av*sizeof(int));
       
      if (p==NULL|| pr==NULL) {
          
           printf ("memória não alocada\n");
           exit(0);
     }                
    
      else {
      }    
    
      for(i=0;i<n;i++) { 
           printf("\n- Aluno %d\n", i+1);
             for(j=0;j<av;j++){
                        
               printf("%d > ", j+1);            
               scanf("%d", &pr[i]);  
              
            
               sum += pr[i];  /* soma das notas digitados*/  
               
               avg = sum/ av;        /* cálculo da média */ 
               
               variance += pow((pr[i] - avg),2)/ av;     /* cálculo da variância */ 
    
               std_deviation = sqrt(variance);      /* cálculo do desvio padrão */          
               
               
          }
          
      
                   
                   printf("\n-Aluno %d\n", i+1);
                       
                   printf("\nResultado final:\n");      
        
                   printf("Average = %d\n", avg); 
                 
                   printf("Variance of all elements = %d\n", variance);
    
                   printf("Standard deviation = %d\n", std_deviation);
                               
                          
                 
    }  
         
        free (pr);
        free (p);
        return (0);
                                         
}  

