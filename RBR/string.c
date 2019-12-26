#include<stdio.h>
#include<string.h>

int main(){
    char s[]="pravince";
    char t[]="kumar";
    //printf("%s",strcat(s,t));     //pravincekumar
    //printf("%s",strncat(s,t,2)); //pravinceku
    strcpy(s,t);
    printf("%s",s);

}
