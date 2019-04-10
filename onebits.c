/************
Function to count the number of 1 bits in 32 bit number.
This function doesn't use loops and division.
It is fast but takes up more code space.
************/

int hammingWeight(uint32_t n) {
    int ret = 0;
    int orig = n;
    if (orig & 0x1)
        ret++;
    if(orig & 0x2)
        ret++;
    if(orig & 0x4)
        ret++;
    if(orig & 0x8)
      ret++; 
    if(orig & 0x10)
      ret++; 
    if(orig & 0x20)
      ret++; 
    if(orig & 0x40)
      ret++; 
    if(orig & 0x80)
      ret++; 
    if(orig & 0x100)
      ret++; 
    if(orig & 0x200)
      ret++; 
    if(orig & 0x400)
      ret++; 
    if(orig & 0x800)
      ret++; 
    if(orig & 0x1000)
      ret++; 
    if(orig & 0x2000)
      ret++; 
    if(orig & 0x4000)
      ret++; 
    if(orig & 0x8000)
      ret++; 
    if(orig & 0x10000)
      ret++; 
    if(orig & 0x20000)
      ret++; 
    if(orig & 0x40000)
      ret++; 
    if(orig & 0x80000)
      ret++; 
    if(orig & 0x100000)
      ret++; 
    if(orig & 0x200000)
      ret++; 
    if(orig & 0x400000)
      ret++; 
    if(orig & 0x800000)
      ret++; 
    if(orig & 0x1000000)
      ret++; 
    if(orig & 0x2000000)
      ret++; 
    if(orig & 0x4000000)
      ret++; 
    if(orig & 0x8000000)
      ret++; 
    if(orig & 0x10000000)
      ret++; 
    if(orig & 0x20000000)
      ret++; 
    if(orig & 0x40000000)
      ret++; 
    if(orig & 0x80000000)
      ret++; 
    
    
    return ret;
}
