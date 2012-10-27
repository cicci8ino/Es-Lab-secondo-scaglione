#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,x,ntentativi;
    int i,c;
    
    do{
    printf("Inserire il primo numero intero:\n");
    scanf("%i",&a);
    } while (a<0);
    
    do{
    printf("Inserire il secondo numero intero:\n");
    scanf("%i",&b);
    } while (b<(a+1));
        
    while(1){
    printf("Inserire il numero intero tra il primo e il secondo:\n");
    scanf("%i",&x);
    if(x>a&&x<b) break;
    }
    
    do{
    printf("Inserire il numero di tentativi:\n");
    scanf("%i",&ntentativi);
    } while (ntentativi<1);
      
    for(i=0;i<ntentativi;i++){
                              printf("Tentativo %i  Cerco %i a=%i\t b=%i\t a+b/2 : ",i+1,x,a,b);
                              if(x<(a+b)/2){
                                            b = (a+b)/2;
                                                        if(a==x||b==x){
                                                           printf("trovato!\n");
                                                           break;
                                                        } else printf("non trovato - cerco a sx\n");
                                            } else {
                                            a = (a+b)/2;
                                                        if(a==x||b==x){
                                                           printf("trovato!\n");
                                                           break;
                                                        } else printf("non trovato - cerco a dx\n");
                                            }
           
                              }  
    printf("Numero Tentativi:%i",i);
    
  
  
  system("PAUSE>NUL");	
  return 0;
}
