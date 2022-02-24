// www.mike.education
// Copyright (c) 2022.

//
// Created by Maikol Guzman Alan on 2/23/22.
//

#ifndef OOP_POLYMORPHISM_OVERLOADING_ADDITION_H
#define OOP_POLYMORPHISM_OVERLOADING_ADDITION_H

/**
 * Class to represent the addition
 */
class Addition {
public:
    /**
     * Add method
     * @param paramX
     * @param paramY
     * @return the addition of paramX plus paramY
     */
    int add(int paramX, int paramY);

    /**
     * Function overloading
     * @return a fixed number
     */
    int add();
};

#endif //OOP_POLYMORPHISM_OVERLOADING_ADDITION_H
