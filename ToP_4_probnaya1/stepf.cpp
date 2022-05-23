#include "stepf.h"

template <class T1, class T2, class T3, class T4>
void step(T1 mass, T2 length, T3 step, T4 buffer) {
    int i = 0, j = 0;

    if (step == 1) {
        for (i = 0, j = 1; j < length; ++i, ++j) mass[i] = mass[j];
        mass[length - 1] = buffer[0];
    }
    else if (step == 2) {
        for (i = 0, j = 2; j < length; ++i, ++j) mass[i] = mass[j];
        mass[length - 2] = buffer[0];
        mass[length - 1] = buffer[1];
    }
    else if (step == 3) {
        for (i = 0, j = 3; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 3, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 4) {
        for (i = 0, j = 4; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 4, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 5) {
        for (i = 0, j = 5; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 5, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 6) {
        for (i = 0, j = 6; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 6, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 7) {
        for (i = 0, j = 7; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 7, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 8) {
        for (i = 0, j = 8; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 8, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 9) {
        for (i = 0, j = 9; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 9, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 10) {
        for (i = 0, j = 10; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 10, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 11) {
        for (i = 0, j = 11; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 11, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 12) {
        for (i = 0, j = 12; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 12, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 13) {
        for (i = 0, j = 13; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 13, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 14) {
        for (i = 0, j = 14; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 14, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 15) {
        for (i = 0, j = 15; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 15, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 16) {
        for (i = 0, j = 16; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 16, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 17) {
        for (i = 0, j = 17; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 17, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 18) {
        for (i = 0, j = 18; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 18, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
    else if (step == 19) {
        for (i = 0, j = 19; j < length; ++i, ++j) mass[i] = mass[j];
        for (i = length - 19, j = 0; i < length; ++i, ++j) mass[i] = buffer[j];
    }
}