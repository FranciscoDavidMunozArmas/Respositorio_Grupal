/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of RUC_verificator
*/
#include "RUC_verificator.h"

#include "ID_verificator.cpp"
#include "To_number.cpp"
#include "Verify_number.cpp"
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

/**
 * @brief RUC_verify
 * @param RUC
*/
bool RUC_verificator::RUC_verify(char* RUC) {
    if (!is_int_number(RUC))
    {
        return false;
    }
    string axu_ruc = RUC;
    if (axu_ruc.length() != 13) {
        return false;
    }

    char* province = (char*)calloc(2, sizeof(char));
    *(province + 0) = *(RUC + 0);
    *(province + 0) = *(RUC + 1);
    if (!is_between(0, to_int(province), 24)) {
        return false;
    }

    switch (to_int(*(RUC + 2))) {
    case 6:
        if (!check_for_6(RUC, 3, 2, 7, 6, 5, 4, 3, 2)) {
            return false;
        }
        break;
    case 9:
        if (!check_for_9(RUC, 4, 3, 2, 7, 6, 5, 4, 3, 2)) {
            return false;
        }
        break;
    default:
        if (!is_between(-1, to_int(*(RUC + 2)), 6)) {
            return false;
        }
        string ID;
        for (int i = 0; i < 10; i++) {
            ID += *(RUC + i);
        }
        if (!check_last_digit((char*)ID.c_str())) {
            return false;
        }
        break;
    }

    char *last = (char*)calloc(3,sizeof(char));
    *(last + 0) = RUC[10];
    *(last + 1) = RUC[11];
    *(last + 2) = RUC[12];
    if (!last_digits(last)) {
        return false;
    }

    return true;
}

/**
 * @brief check_for_6
 * @param RUC, coef_1, coef_2, coef_3, coef_4, coef_5, coef_6, coef_7, coef_8
*/
bool RUC_verificator::check_for_6(char* RUC, int coef_1, int coef_2, int coef_3, int coef_4, int coef_5, int coef_6, int coef_7, int coef_8) {
    int check_number = 0;
    for (int i = 0; i < 8; i++) {
        switch (i) {
        case 0:
            check_number += to_int(*(RUC +i )) * coef_1;
            break;
        case 1:
            check_number += to_int(*(RUC + i)) * coef_2;
            break;
        case 2:
            check_number += to_int(*(RUC + i)) * coef_3;
            break;
        case 3:
            check_number += to_int(*(RUC + i)) * coef_4;
            break;
        case 4:
            check_number += to_int(*(RUC + i)) * coef_5;
            break;
        case 5:
            check_number += to_int(*(RUC + i)) * coef_6;
            break;
        case 6:
            check_number += to_int(*(RUC + i)) * coef_7;
            break;
        case 7:
            check_number += to_int(*(RUC + i)) * coef_8;
            break;
        }
    }

    if (get_module(check_number, 11) != to_int(*(RUC + 8))) {
        return false;
    }

    return true;
}

/**
 * @brief check_for_9
 * @param RUC, coef_1, coef_2, coef_3, coef_4, coef_5, coef_6, coef_7, coef_8
*/
bool RUC_verificator::check_for_9(char* RUC, int coef_1, int coef_2, int coef_3, int coef_4, int coef_5, int coef_6, int coef_7, int coef_8, int coef_9) {
    int check_number = 0;
    for (int i = 0; i < 9; i++) {
        switch (i) {
        case 0:
            check_number += to_int(*(RUC + i)) * coef_1;
            break;
        case 1:
            check_number += to_int(*(RUC + i)) * coef_2;
            break;
        case 2:
            check_number += to_int(*(RUC + i)) * coef_3;
            break;
        case 3:
            check_number += to_int(*(RUC + i)) * coef_4;
            break;
        case 4:
            check_number += to_int(*(RUC + i)) * coef_5;
            break;
        case 5:
            check_number += to_int(*(RUC + i)) * coef_6;
            break;
        case 6:
            check_number += to_int(*(RUC + i)) * coef_7;
            break;
        case 7:
            check_number += to_int(*(RUC + i)) * coef_8;
            break;
        case 8:
            check_number += to_int(*(RUC + i)) * coef_9;
            break;
        }
    }

    if (get_module(check_number, 11) != to_int(*(RUC + 9))) {
        return false;
    }

    return true;
}

/**
 * @brief las_digits
 * @param digits
*/
bool RUC_verificator::last_digits(char* digits) {
    return (0 <= to_int(digits) && to_int(digits) <= 3);
}

/**
 * @brief get_module
 * @param num, den
*/
int RUC_verificator::get_module(int num, int den) {
    return den - (num % den);
}
