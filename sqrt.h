#ifndef _SQRT_H_
#define _SQRT_H_

// original in SICP book 

static double sqrt_iter(double, double);
static double dabs(double);
static double dsquare(double);
static double good_enough(double, double);
static double average(double, double);
static double improve(double, double);

double msqrt(double num) {
    return sqrt_iter(1.0, num);
}

static double sqrt_iter(double guess, double x) {
    if (good_enough(guess, x)) {
        return guess;
    }
    return sqrt_iter(improve(guess, x), x);
}

static double dabs(double x) {
    return x < 0 ? -x : x;
}

static double dsquare(double num) {
    return num * num;
}

static double good_enough(double guess, double x) {
    return dabs(dsquare(guess) - x) < 0.001;
}

static double average(double x, double y) {
    return (x + y) / 2;
}

static double improve(double guess, double x) {
    return average(guess, x / guess);
}

#endif