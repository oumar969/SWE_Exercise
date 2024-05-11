#include"unity.h"
#include <stdbool.h>

#include "room.h"

void setUp(void) {
}

void tearDown(void) {
}

void test_room_create_and_getLocation(void) {
    char location[] = "Living room";
    room_create(location, 20);
    TEST_ASSERT_EQUAL_STRING(location, room_getLocation());
}

void test_room_create_and_getArea(void) {
    int _size =6;
    char _name[] = "Living room";
    room_create(_name, _size);
    TEST_ASSERT_EQUAL(_size, room_getArea());
}

void test_room_getRoomHealthText_disaster(void) {
    room_roomHealth_t health = 4;
    TEST_ASSERT_EQUAL_STRING("DISASTER", room_getRoomHealthText(health));
}

void test_room_getRoomHealthText_bad(void) {
    room_roomHealth_t health = 3;
    TEST_ASSERT_EQUAL_STRING("BAD", room_getRoomHealthText(health));
}

void test_room_getRoomHealthText_average(void) {
    room_roomHealth_t health = 2;
    TEST_ASSERT_EQUAL_STRING("AVERAGE", room_getRoomHealthText(health));
}
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_room_create_and_getLocation);
    RUN_TEST(test_room_create_and_getArea);
    RUN_TEST(test_room_getRoomHealthText_disaster);
    RUN_TEST(test_room_getRoomHealthText_bad);
    return UNITY_END();
}
