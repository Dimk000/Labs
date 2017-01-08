#include<stdio.h>

int main() {
    double number,root;
    printf("Введите число: ");
    scanf("%lf", &number);
    root=number;
    while (root*root!=number){
        root = (root + (number/root))/2;
    }
    printf("Квадратный корень числа равен: %.3lf", root);
    return 0;
}