#include<stdio.h>
#include<string.h>

// Global struct definition that I made up
struct object {
    char name[50];
    float width;
    float length;
    short quantity;
};

int main(void){
    // Create a local object
    struct object my_object;
    // Create a FILE pointer
    FILE* my_file = NULL;

    // Enter the info:
    // C library function to deal with strings
    strcpy(my_object.name, "Spanner");
    my_object.width = 2;
    my_object.length = 10;
    my_object.quantity = 3;

    // Create a file and open it for writing in binary
    my_file = fopen("binary.bin", "wb");

    // Checking to see that the file definitely opened:
    if (my_file == NULL) {
        printf("Couldn't open file\n");
        return -1;
    }

    // Parameters:
    // 1) Address of the struct object
    // 2) Number of items to write (i.e. 1 struct object)
    // 3) Size of the item
    // 4) File location
    fwrite(&my_object, 1, sizeof(struct object), my_file);

    // Close the file
    fclose(my_file);

    return 0;
}
