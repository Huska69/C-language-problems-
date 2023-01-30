//NDHU CSIE Lab of programming 1, week 11.2

//char *trim(char *dest);
//Please finish the function trim as below
//char *trim(char *dest);
//Removes all leading and trailing occurrences '\n', '\t' and ' ' of a set of characters specified in dest.

char *trim(char *dest)
{
    // First check if dest is a null pointer
    if (dest == NULL)
    {
        return NULL;
    }
    // determine the length of the string
    size_t length = strlen(dest);
    if (length == 0)
    {
        return dest;
    }
    // Define two pointers, pointing to the beginning and end of the string respectively
    char *front = dest;
    char *end = dest + length - 1;
    // Check from the beginning and end of the string until the first character that is not a blank character is found
    while (front <= end && isspace(*front))
    {
        ++front;
    }
    while (end >= front && isspace(*end))
    {
        --end;
    }
    // If there are all blank characters in the string, set them all to \0
    if (front > end)
    {
        memset(dest, 0, length);
        return dest;
    }
    // Otherwise, move the non-blank part to the front of the string
    size_t trim_length = end - front + 1;
    memmove(dest, front, trim_length);
    dest[trim_length] = '\0';
    return dest;
}
