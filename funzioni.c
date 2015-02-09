float CalcolaDeterminante(float a, float b, float c){
    float determinante;
    determinante = b*b -4*a*c;
    return determinante;
}
int EsistonoSoluzioniReali(float a, float b, float c){
    float determinante;
    
    determinante=CalcolaDeterminante( a, b, c);
    
    if(determinante<0){
        return 0;
    }
    else{
        return 1;
    }
}
float CalcolaSoluzione1(float a, float b, float c){
    float x1;
    float determinante;
    determinante=CalcolaDeterminante( a, b, c);
    determinante=sqrt(determinante);
    x1 = (-b+determinante)/(a*2);
    return x1;
}
float CalcolaSoluzione2(float a, float b, float c){
    float x2;
    float determinante;
    determinante=CalcolaDeterminante( a,  b, c);
    determinante=sqrt(determinante);
    x2 = (-b-determinante)/(a*2);
    return x2;
}
void StampaRisultato(float x1, float x2){
    
    printf("X1 vale: %f\n", x1);
    printf("X2 vale: %f\n", x2);
    return;
}
