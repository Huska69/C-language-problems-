//NDHU CSIE Lab of programming 1, week 11.3

//char *replace(char *source, char *pattern, char *replacement);
//char *replaceAll(char *source, char *pattern, char *replacement);
//Please finish the function replace and function replaceAll.
//char *replace(char *source, char *pattern, char *replacement);
//char *replaceAll(char *source, char *pattern, char *replacement);
//Function replace will find the first appear pattern in source and replace it withreplacement.
//Function replaceAll will find all pattern in source and replace it with replacement.

char *replace(char *source, char *pattern, char *replacement)
{
    // First use strstr to find the first occurrence of pattern in source
    char *found = strstr(source, pattern);
    // If not found, return directly to source
    if (found == NULL)
    {
        return source;
    }
    // Otherwise, in order to prevent the original string from being overwritten, the length of the replacement needs to be determined first
    // and copy a new source string
    size_t replacement_len = strlen(replacement);
    size_t pattern_len = strlen(pattern);
    size_t source_len = strlen(source);

    char *new_source = malloc(source_len + replacement_len - pattern_len + 1);
    // copy the first part of the source string to the new string
    strncpy(new_source, source, found - source);
    // copy replacement to new string
    strncpy(new_source + (found - source), replacement, replacement_len);
    // copy the latter part of the source string to the new string
    strcpy(new_source + (found - source) + replacement_len, found + pattern_len);
    // Copy the new string to source and return source
    strcpy(source, new_source);
    free(new_source);
    return source;
}
char *replaceAll(char *source, char *pattern, char *replacement)
{
    // Use the strstr function to find the position of the pattern in the source
    char *found = strstr(source, pattern);
    // If not found, return directly to source
    if (found == NULL)
    {
        return source;
    }
    // Otherwise, in order to prevent the original string from being overwritten, the length of the replacement needs to be determined first
    // and copy a new source string
    size_t replacement_len = strlen(replacement);
    size_t pattern_len = strlen(pattern);
    size_t source_len = strlen(source);
    char *new_source = malloc(source_len + replacement_len - pattern_len + 1);
    // copy the first part of the source string to the new string
    strncpy(new_source, source, found - source);
    // Use a loop to continuously find the pattern and replace it
    while (found != NULL)
    {
        // copy replacement to new string
        strncpy(new_source + (found - source), replacement, replacement_len);

        // copy the latter part of the source string to the new string
        strcpy(new_source + (found - source) + replacement_len, found + pattern_len);

        // copy the new string to source
        strcpy(source, new_source);

        // Continue to find the next pattern
        found = strstr(source, pattern);
    }
    // return the replaced source string
    free(new_source);
    return source;
}
