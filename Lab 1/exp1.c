#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    float weight;
    float postage;
    void (*calculatePostage)(struct Letter*); //Funtion pointer to calculate postage
} Letter;

void calculatePostage(Letter * letter){
    float total;
    if(letter->weight < 0){
        printf("Invalid weight");
    }
    else if (letter->weight <= 50 && letter->weight > 0)
    {
        total = letter->weight * 0.05;
    }
    else if (letter->weight > 50 && letter->weight <= 150)
    {
        total = ((letter->weight - 50) * 0.04) + 2.5 ;
    }
    else if (letter->weight > 150)
    {
        total = ((letter->weight - 150) * 0.025) + 2.5 + 4;
    }
     // Print the postage
    printf("The postage to be paid is: Rs %.2f\n", total);
}


int main(){
    
    Letter letter;

    // Input prompt
    printf("Enter the weight of the letter in grams: ");
    scanf("%f", &letter.weight);

    // Calculate the postage
    calculatePostage(&letter);


    return 0;
}