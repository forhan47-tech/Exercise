#include <stdio.h>

int main() {
    int actual[]    = {1, 0, 1, 1, 0, 0, 1, 0}; 
    int predicted[] = {1, 0, 0, 1, 0, 1, 1, 0}; 
    int size = sizeof(actual) / sizeof(actual[0]);

    int TP = 0, TN = 0, FP = 0, FN = 0;

    for (int i = 0; i < size; i++) {
        if (actual[i] == 1 && predicted[i] == 1)
            TP++;
        else if (actual[i] == 0 && predicted[i] == 0)
            TN++;
        else if (actual[i] == 0 && predicted[i] == 1)
            FP++;
        else if (actual[i] == 1 && predicted[i] == 0)
            FN++;
    }

    double accuracy  = (TP + TN) / (double) size;
    double precision = TP / (double)(TP + FP);
    double recall    = TP / (double)(TP + FN);
    double f1        = 2 * precision * recall / (precision + recall);

    printf("Confusion Matrix:\n");
    printf("TP: %d\n", TP);
    printf("TN: %d\n", TN);
    printf("FP: %d\n", FP);
    printf("FN: %d\n", FN);

    printf("\nPerformance Metrics:\n");
    printf("Accuracy : %.2f\n", accuracy);
    printf("Precision: %.2f\n", precision);
    printf("Recall   : %.2f\n", recall);
    printf("F1-Score : %.2f\n", f1);

    return 0;
}
