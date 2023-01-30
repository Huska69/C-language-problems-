//NDHU CSIE Lab of programming 1, week 12.2

/*******************************************
function name: replace
description: When mode is 1, replace the first target finded in source with the replacement.
             When mode is 2, replace all the target in source with replacement until there are no target can find in source.
return value: Return the result after replace.
*******************************************/

char *replace(char *source, char *target, char *replacement, int mode) { 
    if (mode == 1 ){  //mode 1
        // First use strstr to find the first occurrence of target in source
        char *found = strstr(source, target);
        // If not found, return directly to source
        if (found == NULL)
        {
            return source;
        }
        // Otherwise, in order to prevent the original string from being overwritten, the length of the replacement needs to be determined first
        // and copy a new source string
        size_t replacement_len = strlen(replacement);
        size_t target_len = strlen(target);
        size_t source_len = strlen(source);

        char *new_source = malloc(source_len + replacement_len - target_len + 1);
        // copy the first part of the source string to the new string
        strncpy(new_source, source, found - source);
        // copy replacement to new string
        strncpy(new_source + (found - source), replacement, replacement_len);
        // copy the latter part of the source string to the new string
        strcpy(new_source + (found - source) + replacement_len, found + target_len);
        // Copy the new string to source and return source
        strcpy(source, new_source);
        free(new_source);
        return source;
    }

    else if (mode == 2){  //mode 2
        // Use the strstr function to find the position of the pattern in the source
    char *found = strstr(source, target);
    // If not found, return directly to source
    if (found == NULL)
    {
        return source;
    }
    // Otherwise, in order to prevent the original string from being overwritten, the length of the replacement needs to be determined first
    // and copy a new source string
    size_t replacement_len = strlen(replacement);
    size_t target_len = strlen(target);
    size_t source_len = strlen(source);
    char *new_source = malloc(source_len + replacement_len - target_len + 1);
    // copy the first part of the source string to the new string
    strncpy(new_source, source, found - source);
    // Use a loop to continuously find the pattern and replace it
    while (found != NULL)
    {
        // copy replacement to new string
        strncpy(new_source + (found - source), replacement, replacement_len);

        // copy the latter part of the source string to the new string
        strcpy(new_source + (found - source) + replacement_len, found + target_len);

        // copy the new string to source
        strcpy(source, new_source);

        // Continue to find the next pattern
        found = strstr(source, target);
    }
    // return the replaced source string
    free(new_source);
    return source;
} 
}
