//
//  Module.cpp
//  ArrayOfObjects
//
//  Created by Lia Martinez on 10/26/12.
//  Copyright (c) 2012 liamartinez.com. All rights reserved.
//

#include <iostream>
#include "Module.h" //remember to include your class' .h file

//constructor
Module::Module() {

}

//we added setup since we can't initialize these in the .h file
void Module::setup(int xOffsetTemp, int yOffsetTemp, int xTemp, int yTemp, float speedTemp, int tempUnit) {
	xOffset = xOffsetTemp;
    yOffset = yOffsetTemp;
    x = xTemp;
    y = yTemp;
    speed = speedTemp;
    unit = tempUnit;
	xDirection = 1;
	yDirection = 1;	
}

//exactly the same as processing
void Module::update() {
	x = x + (speed * xDirection);
    if (x >= unit || x <= 0) {
		xDirection *= -1;
		x = x + (1 * xDirection);
		y = y + (1 * yDirection);
    }
    if (y >= unit || y <= 0) {
		yDirection *= -1;
		y = y + (1 * yDirection);
    }
}

void Module::draw() {
	ofSetColor(255); //fill(255)					 
	ofEllipse(xOffset + x, yOffset + y, 6, 6); //ellipse(xOffset + x, yOffset + y, 6, 6);
}