#include <stdio.h>

int main() {
    float base, height, area;

    printf("Nhập độ dài cạnh đáy của tam giác: ");
    scanf("%f", &base);

    printf("Nhập chiều cao của tam giác: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("Diện tích của tam giác: %.2f\n", area);

    return 0;
}
