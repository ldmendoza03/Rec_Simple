#ifndef OPERACIONES_H
#define OPERACIONES_H

template<typename T>
T factorial(T n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

#endif // OPERACIONES_H