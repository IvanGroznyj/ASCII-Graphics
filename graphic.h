/*
 * graphic.h
 *
 *  Created on: Sep 22, 2019
 *      Author: Nazarec
 */

#ifndef GRAPHIC_H_
#define GRAPHIC_H_

#include <stdlib.h>
#include <iostream>
using namespace std;

enum  Brightneses {
	Black = 0, 
	White
};

class Graphic {
private:
	int M, N;
	char **arr;
	char symbols[2]={' ', '#'};
public:
	Graphic(int m, int n);

	void Update();

	void SetPixel(int x, int y, int brightnes);

	void Clear(int brightnes = 0);

	void DrawRectangle(int x, int y, int width, int height, int linebrightnes = 1);

	void FillRectangle(int x, int y, int width, int height, int linebrightnes = 1, int fillbrightnes = 0);
};

#endif /* GRAPHIC_H_ */
