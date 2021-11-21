/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Vuolo
 */

#include <iostream>
#include <cmath>

using namespace std;

// function prototype
void calcRoots(double a, double b, double c);

int main() {
    // init variables
	double a, b, c;

    // read a, b, & c from user
	cout << "Enter a, b, and c: ";
	cin >> a >> b >> c;

    // calculate and display root(s) (if real)
    calcRoots(a, b, c);

    return 0;
}

void calcRoots(double a, double b, double c) {
    // init variables used for calculation
    double x1, x2, root;

    // calculate root
    root = pow(b, 2) - (4 * a * c);

    // calculate & display roots
	if (root == 0) {
        x1 = -b + sqrt(root) / (2 * a);
        cout << "The real root is " << x1 << ".";
	}
	else if (root > 0) {
        x1 = (-b - sqrt(root)) / (2 * a);
        x2 = (-b + sqrt(root)) / (2 * a);
        cout << "The real roots are " << x1 << " or " << x2 << ".";
	}
	else
        cout << "No real roots.";
}