/*
 * graphic.cpp
 *
 *  Created on: Sep 22, 2019
 *      Author: root
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
