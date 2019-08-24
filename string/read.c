// Joe Aczel 18/8/19
// Example of reading a binary file with fopen and fclose

#include<stdio.h>

int main(void){
    // Open a file
    FILE* my_file = fopen("binary.bin", "rb");
    // Create a buffer of 100 bytes
    char buffer[100];

    // Read and store how many elements were read in ret
    // Note: 100 assumes there will be at most 10 bytes
    int ret = fread(buffer, 1, 100, my_file);
    
    // Add the null character to the end of the string
    buffer[ret] = '\0';
    
    // Print the string
    printf("%s\n", buffer);
    
    // Close the file
    fclose(my_file);
    return 0;
}
