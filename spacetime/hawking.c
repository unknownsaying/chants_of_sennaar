#define PI 3.1415926
void law1(double M, double J) {
    double A = 4 * M * sqrt(1 - J * J / (M * M * M * M));
    printf("Area before process: %.2lf\n", A);
    printf("Area after process: %.2lf\n", A);
}
void law2(double M, double A) {
    double g = M / A;
    printf("Surface gravity: %.2lf\n", g);
}
void law3(double M) {
    double T = 1 / (8 * M * PI);
    printf("Temperature: %.2lf\n", T);
}
void law4(double S, double A) 
    S = (1 / 4) * A;
    printf("Entropy: %.2lf\n", S);
}
