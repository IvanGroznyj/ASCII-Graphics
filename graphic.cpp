/*
 * graphic.cpp
 *
 *  Created on: Sep 22, 2019
 *      Author: Nazarec
 */
# include "graphic.h"

Graphic::Graphic(int m, int n){
	Graphic::M = m;
	Graphic::N = n;

	Graphic::arr = new char*[m];
	for(int i = 0; i < m; i++){
		Graphic::arr[i]=new char [n];
		for(int j = 0; j < n; j++){
			Graphic::arr[i][j] = ' ';
		}
	}
}

void Graphic::SetPixel(int x, int y, int brightnes){
	Graphic::arr[y][x] = Graphic::symbols[brightnes];
}

void Graphic::Update(){
	system("clear");
	for(int i = 0; i < Graphic::M; i++){
		for(int j = 0; j < Graphic::N; j++){
			cout<< Graphic::arr[i][j];
		}
		cout<<'\n';
	}
}

void Graphic::Clear(int brightnes){
	for(int i = 0; i < Graphic::M; i++){
		for(int j = 0; j < Graphic::N; j++){
			Graphic::arr[i][j] = Graphic::symbols[brightnes];
		}
	}
}

void Graphic::DrawRectangle(int x, int y, int width, int height, int linebrightnes){
	for(int j=0; j<width; j++){
		Graphic::arr[y][j+x] = Graphic::symbols[linebrightnes];
		Graphic::arr[y+height-1][j+x] = Graphic::symbols[linebrightnes];
	}
	for(int j=0; j<height-2; j++){
		Graphic::arr[y+j+1][x] = Graphic::symbols[linebrightnes];
		Graphic::arr[y+j+1][x+width-1] = Graphic::symbols[linebrightnes];
	}
}

void Graphic::FillRectangle(int x, int y, int width, int height, int linebrightnes, int fillbrightnes){
	for(int j=0; j<width; j++){
		for(int i=0; i<height; i++){
			if(i==0||j==0||i==height-1||j==width-1){
				Graphic::arr[i+y][j+x] = Graphic::symbols[linebrightnes];
			}else{
				Graphic::arr[i+y][j+x] = Graphic::symbols[fillbrightnes];
			}
		}
	}
	
}
