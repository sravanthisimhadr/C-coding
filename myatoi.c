int myAtoi(char* str) {
        int len = strlen(str);
    int res = 0;
    int base = 1;
    int isneg = 0;
    for(int i = 0; i< len; i++)
    {
        int dig = (int)str[i];
        if((res<=0) &&(dig == 45))
            isneg = 1;
        if ((dig<48)||(dig>57))
           continue;
        dig = dig - 48;   
        res = res + (base*dig);
        base=base*10;
        
    }
    res = reverse(res);
    if(isneg)
     res = -1*res;
    return res;
    
}
