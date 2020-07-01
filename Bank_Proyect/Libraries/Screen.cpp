/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Screen
*/
#include "Screen.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>
#include <mmsystem.h>

#pragma once

using namespace std;

/**
 * @brief gotoxy
 * @param x, y
*/
void Screen::gotoxy(int x, int y)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

/**
 * @brief hide_cursor
 * @param 
*/
void Screen::hide_cursor()
{
    HANDLE Cursor = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = false;
    SetConsoleCursorInfo(Cursor, &info);
}

/**
 * @brief color_text
 * @param color
*/
void Screen::color_text(int color) {
    HANDLE ColorText = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(ColorText, color);
}

//void Screen::color_background() {
//
//}
