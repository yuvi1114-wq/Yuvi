#include <stdio.h>

int main() {
    float cost, selling, percent;

    // Input cost price and selling price
    scanf("%f %f", &cost, &selling);

    // Check profit or loss
    if (selling > cost) {
        percent = ((selling - cost) / cost) * 100;
        printf("Profit %.0f%%", percent);
    }
    else if (selling < cost) {
        percent = ((cost - selling) / cost) * 100;
        printf("Loss %.0f%%", percent);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
