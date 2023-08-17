# include <stdio.h>;
//CALCULATING THE AREA OF RECTANGLE

int main() {
    int side_a, side_b;
    printf("Input the value of the side a: \n");
    scanf("%d", &side_a);

    printf("Input the value od the side b: \n");
    scanf("%d", &side_b);

    int area = side_a * side_b;
    printf("The area of the Rectangle with side %d and %d = %d", side_a, side_b, area);

    return 0;
}