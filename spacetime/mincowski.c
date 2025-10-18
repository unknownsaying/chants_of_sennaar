typedef struct {
    double x, y, z, t;
} MinkowskiVector;
void printMinkowskiVector(const MinkowskiVector *vec) {
    printf("(%lf, %lf, %lf, %lf)\n", vec->x, vec->y, vec->z, vec->t);
}
MinkowskiVector addMinkowskiVectors(const MinkowskiVector *v1, const MinkowskiVector *v2) {
    MinkowskiVector result;
    result.x = v1->x + v2->x;
    result.y = v1->y + v2->y;
    result.z = v1->z + v2->z;
    result.t = v1->t + v2->t;
    return result;
}

MinkowskiVector subtractMinkowskiVectors(const MinkowskiVector *v1, const MinkowskiVector *v2) {
    MinkowskiVector result;
    result.x = v1->x - v2->x;
    result.y = v1->y - v2->y;
    result.z = v1->z - v2->z;
    result.t = v1->t - v2->t;
    return result;
}

int main() {
    MinkowskiVector event1 = {1.0, 2.0, 3.0, 4.0};
    MinkowskiVector event2 = {5.0, 6.0, 7.0, 8.0};
    printf("Event 1: ");
    printMinkowskiVector(&event1);
    printf("Event 2: ");
    printMinkowskiVector(&event2);
    MinkowskiVector diff = subtractMinkowskiVectors(&event1, &event2);
    printf("Difference: ");
    printMinkowskiVector(&diff);
    return 0;
}
