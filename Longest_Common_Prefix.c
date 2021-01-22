char * longestCommonPrefix(char ** strs, int strsSize){
    if (strsSize == 0) return "";
    if (strsSize == 1) return strs[0];
    
    int c = 0, stop = 0;
    char *pre;
    
    while (strs[0][c] && !stop) {
        for (int k = 1; k < strsSize; k++) 
            if (strs[k][c] != strs[0][c]) {
                stop = 1;
                break;
            }
        
        if (!stop) c++;
    }
    
    if (c) {
        char *newString = (char*)malloc((c + 1) * sizeof(char));
        strncpy(newString, strs[0], c);
        newString[c] = '\0';
        return newString;
    }
    return "";    

}