#include <math.h>
#include <stdio.h>
 
 
int main(){
 
    int user1, user2, user3, user4, candidato1, candidato2, candidato3;
 
    printf("Qual o seu voto user1?  : \n canditados:|| 1 || 2 || 3 ||; \n");
    scanf("d", &user1);
    printf("Qual o seu voto user2?  : \n canditados:|| 1 || 2 || 3 ||; \n");
    scanf("d", &user2);
    printf("Qual o seu voto user3?  : \n canditados:|| 1 || 2 || 3 ||; \n");
    scanf("d", &user3);
    printf("Qual o seu voto user4?  : \n canditados:|| 1 || 2 || 3 ||; \n");
    scanf("d", &user4);
 
 
    if(user1 != 1 && user1 != 2 && user1 != 3){
        printf("user1 votou nulo");
    } else if(user2 != 1 && user2 != 2 && user3 != 3){
        printf("user2 votou nulo");
    } else if(user3 != 1 && user2 != 2 && user3 != 3){
        printf("user3 votou nulo");
    } else if(user4 != 1 && user2 != 2 && user3 != 3){
        printf("user4 votou nulo");
    } else {
   
    //if do primeiro voto
        if(user1 == 1){
            candidato1 = 1;
        } else if(user1 == 2){
            candidato2 = 1;
        } else{
            candidato3 = 1;
        }
    }
 
    //if do segundo voto
    if( user2 == 1){
        candidato1++;
    } else if(user2 == 2 ){
        candidato2++;
    } else{
        candidato3++;
    }
   
    //if do terceiro voto
    if( user3 == 1){
        candidato1++;
    } else if(user3 == 2 ){
        candidato2++;
    } else{
        candidato3++;
    }
   
    //if do ultimo voto
        if( user4 == 1){
        candidato1++;
    } else if(user4 == 2 ){
        candidato2++;
    } else{
        candidato3++;
    }
 
    if(candidato1 > candidato2 && candidato1 > candidato3 ) {
        printf("candidato 1 ganhou");
    }  else if( candidato2 > candidato1 && candidato2 > candidato3){
        printf("candidato 2 ganhou");
    } else if(candidato3 > candidato1 && candidato3 > candidato2 ) {
        printf("candidato 3 ganhou");
    } else{
        printf("houve um empate");
    }
}