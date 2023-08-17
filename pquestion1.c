# include<stdio.h>; 

//Area of a square
int main() {
    int side;
    printf("Give the side of the square \n");
    scanf("%d", &side);

    printf("The area of square with side %d = %d", side, side*side);
    return 0;
}