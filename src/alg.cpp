// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    bool b = true;
    for (int i = 2; i < value; i++) {
        if (value % i == 0) {
            b = false;
            break;
        }
    }
    return b;
}

uint64_t nPrime(uint64_t n) {
    int a = 2;
    int c = 2;
    for (int i = 1; i < n; i++) {
        ++a;
        while (true) {
            if (a == c) {
                c = 2;
            break;
            }
            if (a % c == 0) {
                ++a;
                c = 2;
                continue;
            }
            if (!(a % c == 0)) {
                ++c;
                continue;
            }
        }
    }
    return a;
}

uint64_t nextPrime(uint64_t value) {
    int a = value;
    while (true) {
        bool b = true;
        a++;
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                b = false;
                break;
            }
        }
        if (b) {
            return a;
            break;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t a = 2;
    uint64_t sum = 0;
    uint64_t i = 2;
    while (true) {
        if (a == hbound) {
            break;
        }
        if (i == a) {
            sum = sum + a;
            ++a;
            i = 2;
            continue;
        }
        if (a % i == 0) {
            ++a;
            i = 2;
            continue;
        }
        if (!(a % i == 0)) {
            ++i;
            continue;
            }
    }
    return sum;
}
