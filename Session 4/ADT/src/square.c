#include "square.h"

void square_create(square_t *square, int side_length) {
    square->side_length = side_length;
}

int square_get_sl(const square_t *square) {
    return square->side_length;
}

int square_get_area(const square_t *square) {
    return square->side_length * square->side_length;
}

int square_get_perimeter(const square_t *square) {
    return 4 * square->side_length;
}
