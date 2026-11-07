
   
char* longestCommonPrefix(char** strs, int strsSize) 
{
    static char prefix[201];
    int i, j;

    for(i = 0; strs[0][i] != '\0'; i++)
    {
        for(j = 1; j < strsSize; j++)
        {
            if(strs[j][i] == '\0' || strs[j][i] != strs[0][i])
            {
                prefix[i] = '\0';
                return prefix;
            }
        }

        prefix[i] = strs[0][i];
    }

    prefix[i] = '\0';

    return prefix;
}

