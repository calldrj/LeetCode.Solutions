bool isDigit(char c){
    return c >= '0' && c <= '9';
}

int myAtoi(char *s) {
    char *p = s;
    long sign, num = 0;
    
    while(*p == ' ') ++p;
    
    if (*p == '-') sign = -1;
    else if (*p == '+' || isDigit(*p)) sign = 1;
    else return 0;
    
    if (!isDigit(*p)) ++p;
    
    while(isDigit(*p) && num < INT_MAX)
        num = 10 * num + *p++ - '0';  
     
    num *= sign;
    
    return num > INT_MAX ? INT_MAX : num < INT_MIN ? INT_MIN : num;;
}