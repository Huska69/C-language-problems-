//NDHU CSIE Lab of programming 1, week 12.4

/*************************************************************
function name: convertToDifferentBase
description: Convert a decimal number @dec to the number with different @base and store the result as a string in result
return vaule: Result after convert.
notice: The letter you see in the number should be upper case.
*************************************************************/

char *convertToDifferentBase(int dec, int base, char *result) {

    if (base < 2 || base > 16){
        result[0] = '\0';
        return result;
    }
char *digits = "0123456789ABCDEF";
int quot = dec;
int i = 0;

while (quot > 0){
    int remainder = quot % base;
    result[i++] = digits[remainder];   
    quot /= base;             //division method
    }
    if (i == 0){
            result[i++] = '0';
    }
    result[i] = '\0';

char *start = result;
char *end = result + strlen(result) - 1;
while (start < end){
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
   }
  return result;
}
