// 定义四维向量结构体
typedef struct {
    double x, y, z, t; // 四维坐标
} MinkowskiVector;
// 打印四维向量函数
void printMinkowskiVector(const MinkowskiVector *vec) {
    printf("(%lf, %lf, %lf, %lf)\n", vec->x, vec->y, vec->z, vec->t);
}
// 四维向量加法函数
MinkowskiVector addMinkowskiVectors(const MinkowskiVector *v1, const MinkowskiVector *v2) {
    MinkowskiVector result;
    result.x = v1->x + v2->x;
    result.y = v1->y + v2->y;
    result.z = v1->z + v2->z;
    result.t = v1->t + v2->t;
    return result;
}
// 四维向量减法函数
MinkowskiVector subtractMinkowskiVectors(const MinkowskiVector *v1, const MinkowskiVector *v2) {
    MinkowskiVector result;
    result.x = v1->x - v2->x;
    result.y = v1->y - v2->y;
    result.z = v1->z - v2->z;
    result.t = v1->t - v2->t;
    return result;
}
// 主函数
int main() {
    // 定义四维向量实例
    MinkowskiVector event1 = {1.0, 2.0, 3.0, 4.0};
    MinkowskiVector event2 = {5.0, 6.0, 7.0, 8.0};
    // 输出事件
    printf("Event 1: ");
    printMinkowskiVector(&event1);
    printf("Event 2: ");
    printMinkowskiVector(&event2);
    // 计算并输出两个事件之间的四维差
    MinkowskiVector diff = subtractMinkowskiVectors(&event1, &event2);
    printf("Difference: ");
    printMinkowskiVector(&diff);
    return 0;
}