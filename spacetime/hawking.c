#define PI 3.1415926
void law1(double M, double J) {
    // M为黑洞质量，J为黑洞角动量
    // 计算黑洞的表面积
    double A = 4 * M * sqrt(1 - J * J / (M * M * M * M));
    // 输出面积
    printf("Area before process: %.2lf\n", A);
    // 此处添加处理过程，确保新的黑洞面积不小于原有面积
    // 输出面积
    printf("Area after process: %.2lf\n", A);
}
void law2(double M, double A) {
    // M为黑洞质量，A为黑洞表面积
    // 计算表面重力加速度
    double g = M / A;
    // 输出表面重力加速度
    printf("Surface gravity: %.2lf\n", g);
}
void law3(double M) {
    // M为黑洞质量
    // 计算黑洞的温度（霍金辐射温度）
    double T = 1 / (8 * M * PI);
    // 输出温度
    printf("Temperature: %.2lf\n", T);
}
void law4(double S, double A) {
    // S为黑洞熵，A为黑洞表面积
    // 输出熵
    S = (1 / 4) * A;
    printf("Entropy: %.2lf\n", S);
}