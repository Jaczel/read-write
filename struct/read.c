#include<stdio.h>
#include<assert.h>

// Identical copy of the struct object layout
struct object {
    char name[50];
    float width;
    float length;
    short quantity;
};

int main(void){
    // Create a struct object buffer
    struct object my_object;
    // Create a FILE pointer
    FILE* my_file = NULL;

    // Open the file
    my_file = fopen("binary.bin", "rb");

    // Checking to see that the file definitely opened:
    if (my_file == NULL) {
        printf("Couldn't open file\n");
        return -1;
    }

    // Read the object and store in the buffer
    fread(&my_object, 1, sizeof(struct object), my_file);

    // Print each element of the object
    printf("Object name is %s\n", my_object.name);
    printf("Object width is %f\n", my_object.width);
    printf("Object length is %f\n", my_object.length);
    printf("Object quantity is %d\n", my_object.quantity);

    // Close the file
    fclose(my_file);

    return 0;
}
