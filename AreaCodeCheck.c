#include <stdio.h>

int main() {

    int area;

    printf("\nEnter the area code to be identified: ");
    scanf("%d", &area);

    switch(area) {

        case 910:
        case 704:
        printf("\nThe caller is in North Carolina.\n");
        break;

        case 501:
        case 870:
        printf("\nThe caller is in Arkansas.\n");
        break;

        case 510:
        case 415:
        printf("\nThe caller is in California.\n");
        break;

        default:
        printf("\nArea code not recognized.\n");
        break;
    }//end switch

    printf("\n... bye ...\n");
    return 0;
}