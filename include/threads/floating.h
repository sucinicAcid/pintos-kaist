/* Prj 1.3 */
#ifndef THREADS_FLOATING_H
#define THREADS_FLOATING_H

#define F   (1 << 14)

/*    n : 정수
   x, y : 실수 */

int int_to_float (int n);
int float_to_int (int x);
int float_to_round_int (int x);

int float_add_float (int x, int y);
int float_sub_float (int x, int y);
int float_mul_float (int x, int y);
int float_div_float (int x, int y);

int float_add_int (int x, int n);
int float_sub_int (int x, int n);
int float_mul_int (int x, int n);
int float_div_int (int x, int n);

int int_to_float (int n) {
    return n * F;
}

int float_to_int (int x) {
    return x / F;
}

int float_to_round_int (int x) {
    if (x >= 0) return (x + F / 2) / F;
    else return (x - F / 2) / F;
}

int float_add_float (int x, int y) {
    return x + y;
}

int float_sub_float (int x, int y) {
    return x - y;
}

int float_mul_float (int x, int y) {
    return ((int64_t) x) * y / F;
}

int float_div_float (int x, int y) {
    return ((int64_t) x) * F / y;
}

int float_add_int (int x, int n) {
    return x + n * F;
}

int float_sub_int (int x, int n) {
    return x - n * F;
}

int float_mul_int (int x, int n) {
    return x * n;
}

int float_div_int (int x, int n) {
    return x / n;
}

#endif /* threads/floating.h */