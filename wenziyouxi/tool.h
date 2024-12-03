#pragma once
#include<iostream>
#include <windows.h>
#include <iomanip>
#include<time.h>
#include<conio.h>
using namespace std;
void wait(int m_seconds);
void setPrintColor(int color);
void gotoXY(double x, double y);
void clear(int x, int y, int w, int h);
void printMessage(const char* str);
void sidejudge(int& x1, int& y1);

void clearLine(int x, int y);

