//Manipulating structs aggregated by an array
// Importing libraries:

#include<stdio.h>
#include<string.h>

// Defining a variable with a fixed number:

#define NUM_PRODUCTS 5 

// Defining the Structs:

struct Product{
    char name[50];
    int code;
    int quantity;
    float price;
};

//Principal function:

int main(){
    int i;
    struct Product prodructs[NUM_PRODUCTS]; //Declarating an Array of Structs.
    
    // Registering the Products Data:
    strcpy(prodructs[0].name, "Shirt");
    prodructs[0].code = 101;
    prodructs[0].quantity = 50;
    prodructs[0].price = 29.99;

    strcpy(prodructs[1].name, "Pants");
    prodructs[1].code = 102;
    prodructs[1].quantity = 30;
    prodructs[1].price = 79,90;

    strcpy(prodructs[2].name, "Shoes");
    prodructs[2].code = 103;
    prodructs[2].quantity = 40;
    prodructs[2].price = 99.99;

    strcpy(prodructs[3].name, "Purse");
    prodructs[3].code = 104;
    prodructs[3].quantity = 15;
    prodructs[3].price = 89.90;

    strcpy(prodructs[4].name, "Dress");
    prodructs[4].code = 105;
    prodructs[4].quantity = 10;
    prodructs[4].price = 129.99;

    // Displaying the Data:

    printf("--> Product Stock <--\n");
    for (i = 0; i < 5; i++){
        printf("Product: %d \n", i + 1);
        printf("Name: %s\n", prodructs[i].name);
        printf("Code: %d\n", prodructs[i].code);
        printf("Quantity: %d\n", prodructs[i].quantity);
        printf("Price: %.2f\n", prodructs[i].price);
    }
    return 0;
    }
    