#include <stdio.h> 
int main() {
    int firstNumber,secondNumber,thirdNumber;
    printf("nhap vao so dau tien: ");
    scanf("%d", &firstNumber);
    printf("nhap tiep so thu hai: ");
    scanf("%d", &secondNumber);
    printf("hay nhap so cuoi cung (so can ktr co nam giua hay khong): ");
    scanf("%d", &thirdNumber);
    if ((thirdNumber > firstNumber && thirdNumber < secondNumber) || (thirdNumber > secondNumber && thirdNumber < firstNumber)) {
        printf("so %d nam trong khoang %d va %d.\n", thirdNumber, firstNumber, secondNumber);
    } else {
        printf("so %d khong nam trong khoang %d va %d.\n", thirdNumber, firstNumber, secondNumber);
    }
    return 0;
}
 
