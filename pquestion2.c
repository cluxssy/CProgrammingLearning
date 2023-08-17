# include<stdio.h>;
int main() {
    int radius;

    printf("Enter the raidus of the circle: \n");
    scanf("%d", &radius);

    float area = 3.14* radius*radius;
    printf("The area of the circle with the radius %d = %f" , radius , area);

    return 0;
}