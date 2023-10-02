// Basic input and output in c language
// \n means new lines
/*    
==========================================================================

        scanf() ==> The scanf() method input form the user.

        scanf(“%X”, &variableOfXType); // x = Data Type

        %X ==> formate specifier in the c 
                it is a way to tell the compiler what type of data is in a variable.

        & ==> address operator i the c 
                which tells the compiler to change the real value of this variable,
                stored at this address in the memory.

============================================================================

        printf() ==> The printf() method : prints the value passed as the 
                        parameter to it, on the display screen.

        printf(“%X”, variableOfXType); // x = Date Type

        %X ==> formate specifier in the c 
                it is a way to tell the compiler what type of data is in a variable.

===================================================================================

        Integer:
                int intVariable = 10;
                Input: scanf("%d", &intVariable);
                Output: printf("%d", intVariable);

        Float:
                float floatVariable = 3.1415;
                Input: scanf("%f", &floatVariable);
                Output: printf("%f", floatVariable);

        Character:
                char charVariable = 'K';
                Input: scanf("%c", &charVariable);
                Output: printf("%c", charVariable);
            
*/
#include <stdio.h>
#include <string.h>
int main(){

        // print a word
        char str[50];

        printf("\n\nEnter a Word :");
        scanf("\n%s",str);
        printf("You have entered a word of string :%s",str);
        
        // print a sentence
        getchar();
        
        printf("\n\nEnter a sentence :");
        scanf("%[^\n]s", str);
        printf("You have entered a sentence of string :%s\n",str);

        getchar();
          // print a character
        char ch;

        printf("\n\nEnter a char :");
        scanf("%c",&ch);
        printf("You have entered a char : %c\n",ch);

        // print a integer number
        int num;

        printf("Enter a number :");
        scanf("\n%d",&num);
        printf("You have entered a number :%d",num);


        // print a decimal number
        float decimal;
        
        printf("\n\nEnter a decimal number :");
        scanf("\n%f",&decimal);
        printf("You have entered a decimal number : %f",decimal);

        
        return 0;
}