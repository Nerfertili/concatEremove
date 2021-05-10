#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int ConcatERemove(char s[100],char t[100],int k){
    int size_s = strlen(s);
    int size_t = strlen(t);
    
    for(int a=0;a<=size_s-1;a++){
        if(s[a]==t[a]){
            //printf("\ns e t tao iguais nisso");
        }
        else if(a>size_t-1){
            //printf("\n s ta com um tamanho maior que t");
            k-=1;
        }
        else if(s[a]!=t[a]){
            //printf("\n s diferente de t");
            k-=1;
        }
    }
    
    if(k>=0){
        return 1;
    }
    else if(k<0){
        return 0;
    }
}

int main()
{
    int k;
    
    char s[100] = "as";// escreva a palara desejada
    char t[100] = "ash";//escreva a palavra target desejada
    k = 2;// escreva o maximo de operações
    if((strlen(s)<=100 and strlen(s)>=1) and (strlen(t)<=100 and strlen(t)>=1)){
        if(ConcatERemove(s,t,k)==1){
            printf("\nda certo");
        }
        else if(ConcatERemove(s,t,k)==0){
            printf("\nnao da certo");
        }
        return 0;
    }
    else{
        printf("erro: string fora de formato com dimensão entre 1 e 100");
    }
}


