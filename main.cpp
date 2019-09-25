#include <iostream>
using namespace std;

#include "graphic.h"

int main(int argc, char* argv[]){
	Graphic g(10,10);
	g.SetPixel(0, 0, White);
	g.SetPixel(9, 9, White);
	g.Update();
	char a;
	cin>>a;
	g.Clear();
	g.Update();
	return 0;
}