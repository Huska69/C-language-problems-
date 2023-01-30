//NDHU CSIE Lab of programming 1, week 11.1

//char *mystrcat(char *dest, char *src);
//char *mystrncat(char *dest, char *src, int n);
//Please finish function mystrcat and mystrncat
//char *mystrcat(char *dest, char *src);
//Function mystrcat appends a copy of the src string to the dest string.
//char *mystrncat(char *dest, char *src, int n);
//Function mystrncat appends the first n characters of src to dest.


char *mystrcat(char *dest, char *src)
{
    // determine the length of the dest and src strings
    size_t dest_len = strlen(dest);
    size_t src_len = strlen(src);
    // use the memcpy function to copy the src string to the end of the dest string
    memcpy(dest + dest_len, src, src_len + 1);
    return dest;
}
char *mystrncat(char *dest, char *src, int n)
{
    // Determine the length of the dest and src strings
    size_t dest_len = strlen(dest);
    size_t src_len = strlen(src);
    // Make sure the value of n does not exceed the length of the src string
    if (n > src_len)
    {
        n = src_len;
    }
    // Use the memcpy function to copy the first n characters of the src string to the end of the dest string
    memcpy(dest + dest_len, src, n);
    dest[dest_len + n] = '\0';
    return dest;
}
