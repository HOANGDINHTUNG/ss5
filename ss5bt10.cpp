#include <stdio.h>
#include <stdlib.h> //hàm khai báo giá trá tri tuyet doi

int main() {
    long long number;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%lld", &number);

    printf("Cac chu so cua %lld la:\n", number);
	if (number < 0) {
        printf("- ");
        number = abs(number);
    }
	if (number == 0) {
        printf("0\n");
        return 0;
    }
	long long count[19];
    long long number_count = 0;
	while (number > 0) {
        count[number_count] = number % 10;
        number /= 10;
        number_count++;
    }
	for (long long i = number_count - 1; i >= 0; i--) {
        printf("%lld ", count[i]);
    }
    printf("\n");

    return 0;
}
