#include <stdio.h>

int main(){
    printf("Enter the sign: ");
    
    char i;
    int number;
    int second;
    
    scanf("%c", &i);
 while( number != 12){   
    printf("Enter the firtst number: ");
    scanf("%d", &number);

    printf("Enter the second one: ");
    scanf("%d", &second);
    
    int c; 
    if (i == '+'){
        c = number + second;
        printf("The result is %d \n", c);
    }
    else if (i == "-"){
        c = number - second;
         printf("The result is %d \n", c);
    }
    else if (i == '*'){
        c = number * second;
         printf("The result is %d ", c);
    }
   
 }
    printf("Your program is finished");
}
