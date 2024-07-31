#define DIMENSIONS 11
int main() {
    double scalar = 3.0; // 定义标量
    double vec = {1.0, 2.0, 3.0, 4.0}; // 定义四维向量  
    double result; // 用于存储结果的数组   
     return 0;
}
typedef struct {
    float coordinates[DIMENSIONS]; // DIMENSIONS是结构体的维度
} MinkowskiVector;
float calculateDistance(const MinkowskiVector *event1, const MinkowskiVector *event2, float p) {
    float sum = 0.0;
    for (int i = 0; i < DIMENSIONS; ++i) {
        sum += pow(fabs(event1->coordinates[i] - event2->coordinates[i]), p);
    }
    return pow(sum, 1.0 / p);
}
