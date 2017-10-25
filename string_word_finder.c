/******************************************************************************/

                           
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.*/
This code finds the number of words in between given words in a large text.
/******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* text = "Adele - Hello from the other side";
char* word1 = "from";
char* word2 = "side";


int main()
{
    //first make sure that both words exists in the text
    if(strstr(text, word1) != NULL) 
    {
        if(strstr(text, word2) != NULL) 
        {
            char* word_ptr1 = strstr(text, word1) + strlen(word1);
            char* word_ptr2 = strstr(text, word2);
            
            char* str = text;
            int count = 0;
            int space = 0;
            for( space;*str+word_ptr1;str++) 
            {
                count++;
                if(count == word_ptr2-word_ptr1)
                    break;
                if(*str!= ' ') 
                continue; 
                space++; 
            
            }
            printf("\nNmber of words between %s and %s is %d",word1,word2,space );
        }
        else printf("%s not found in the text", word2);
        return 0;
    }
    else printf("%s not found in the text", word1);
    return 0;
}
