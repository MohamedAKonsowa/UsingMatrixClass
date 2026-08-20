#include <matrix/Matrix.hpp>

#include <iostream>

int main() {
    matrix::Matrix left(2, 2);
    left.set(0, 0, 1.0);
    left.set(0, 1, 2.0);
    left.set(1, 0, 3.0);
    left.set(1, 1, 4.0);

    matrix::Matrix right(2, 2);
    right.set(0, 0, 5.0);
    right.set(0, 1, 6.0);
    right.set(1, 0, 7.0);
    right.set(1, 1, 8.0);

    const matrix::Matrix result = left * right;

    std::cout << result.get(0, 0) << '\n';
    return 0;
}
