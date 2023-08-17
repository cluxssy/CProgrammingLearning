# include<stdio.h>;
// Calculating the cube of the given number
int main() {
    int number;
    printf("Give me a number \n");
    scanf("%d", &number);

    int cube = number * number * number;
    printf("The cude of number %d = %d", number, cube);
    
    return 0;
}