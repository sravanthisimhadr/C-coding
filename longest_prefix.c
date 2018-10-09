/******************************************************************************

program to find longest common prefix in set of strings

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    
    int index=0;
    char ret[20];
    char* retptr;
    retptr=ret;
    int min_len = strlen(*(strs));
    for (int i=0;i<strsSize;i++)
    {
        if (strlen(*(strs+i))<min_len)
             min_len = strlen(*(strs+i));
    }
    

    while(1)
    {
        if(index>min_len)
        return strdup(retptr);
        ret[index]=strs[0][index];

        for (int i=0;i<(strsSize);i++)
        {
            if (ret[index]!=strs[i][index])
            {
                ret[index]= '\n';
                printf("%s\n",ret);
                return strdup(retptr);
            }
               
        }
        index++;
    }
    
    return strdup(retptr);
}
int main()
{
    const char *a[2];
    a[0] = "flow";
    a[1] = "fluid";
    //char* str_arr= {"flow","fluid","flounder"};
    
    char* ret = longestCommonPrefix(a,2);
    printf("%s\n",ret);
}

