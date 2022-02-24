// Copyright (c) 2022.
// www.mike.education
//
// Created by Maikol Guzman Alan on 2/23/22.
//

#include <iostream>
#include "Addition.h"
using namespace std;

/**
 * Main class to represent the polymorphism in Compile-time
 * @return 0
 */
int main() {
    cout << "Welcome to the mike.education!" << endl;  // display message
    cout << "Polymorphism Compile-time - [Function Overloading]\n" << endl;  // display message

    Addition addition;   // Object is created
    cout<<"First Method: "<<addition.add(5, 5)<<endl; //first method is called
    cout<<"Second Method: "<<addition.add()<<endl; // second method is called
    return 0;
}

