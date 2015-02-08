#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mialibreria.h"

int main(int argc, char** argv) {
    float a,b,c;
    float determinante;
    float x1 = 0;
    float x2 = 0;
    
    printf("Inserisci il coefficiente a:\n");
    scanf("%f", &a);
    
    printf("Inserisci il coefficiente b:\n");
    scanf("%f", &b);
    
    printf("Inserisci il coefficiente c:\n");
    scanf("%f", &c);
    
    determinante=EsistonoSoluzioniReali(a,b,c);
    if(determinante==0)
    {
            x1=CalcolaSoluzione1(a,b,c);
            x2=CalcolaSoluzione2(a,b,c);
            StampaRisultato(x1,x2);
    }
   
    else if(determinante>0) 
    {
            x1=CalcolaSoluzione1(a,b,c);
            x2=CalcolaSoluzione2(a,b,c);
            StampaRisultato(x1,x2);
    }
    else
    {
     printf("Non esistono soluzioni reali che soddisfano l'equazione data");   
    }
   
    
    return (EXIT_SUCCESS);
}
