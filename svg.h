#include <vector>
#include <iostream>
#include <math.h>
using namespace std;
#ifndef SVG_H_INCLUDED
#define SVG_H_INCLUDED

void svg_begin(double width, double height);

void svg_text (double left, double baseline, string text);

void svg_rect (double x, double y, double width, double height, string stroke = "black", string fill = "black");

void svg_end();

void show_histogram_svg(const vector<size_t>& bins,const vector <size_t> proc );

#endif // SVG_H_INCLUDED
