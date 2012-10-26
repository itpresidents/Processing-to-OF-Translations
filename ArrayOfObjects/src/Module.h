//
//  Module.h
//  ArrayOfObjects
//
//  Created by Lia Martinez on 10/26/12.
//  Copyright (c) 2012 liamartinez.com. All rights reserved.
//

#ifndef ArrayOfObjects_Module_h
#define ArrayOfObjects_Module_h

#include "ofMain.h" //include the OF functionality

class Module {
	
public:

	Module(int xOffsetTemp, int yOffsetTemp, int xTemp, int yTemp, float speedTemp, int tempUnit); 
	
	void setup(); 
	void update(); 
	void draw(); 
	
	int xOffset;
	int yOffset;
	float x, y;
	int unit;
	int xDirection;
	int yDirection;
	float speed; 
	
};

#endif
