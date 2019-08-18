// Joe Aczel 18/8/19
// Example of writing a binary file with fopen and fwrite

#include<stdio.h>

int main(void){
    // Create a string
    char *my_string = "Max Power\0";
    // Open a file for writing in binary
    FILE* my_file = fopen("binary.bin", "wb");

    // Write to the file
    // Parameters: 
    //     - source
    //     - size of each element (i.e. 1 byte)
    //     - number of elements
    //     - destination
    fwrite(my_string, 1, 10, my_file);

    // Close the file
    fclose(my_file);
    return 0;
}
