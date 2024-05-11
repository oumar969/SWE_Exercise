#ifndef SQUARE_H
#define SQUARE_H

typedef struct {
    int side_length;
} square_t;

void square_create(square_t *square, int side_length);
int square_get_sl(const square_t *square);
int square_get_area(const square_t *square);
int square_get_perimeter(const square_t *square);

#endif  // SQUARE_H
