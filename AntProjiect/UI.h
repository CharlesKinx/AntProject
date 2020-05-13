#pragma once
#include<graphics.h>
#include"Ant.h"
#include<conio.h>
#include<vector>
#include<time.h>
#include<stdlib.h>

using namespace std;
void showMain(vector<Ant *> ant) {

	//cleardevice();
	initgraph(800, 600);
	for (int i = 200; i <= 600; i = i + 20) {
		line(i, 100, i, 500);
	}

	for (int i = 100; i <= 500; i = i + 20) {
		line(200, i, 600, i);
	}

	char str[] = "Ê¨ÒÏºÍËûµÄÅóÓÑÂìÒÏ";
	char str1[] = "°´Enter½øÈëÏÂÒ»¸ötimeStep";
	char str2[] = "Ê¨ÒÏ X µÄÊýÁ¿£º";
	char str3[] = "ÂìÒÏ O µÄÊýÁ¿£º";
	char str4[5];
	char str5[5];

	settextstyle(40, 15, _T("Î¢ÈíÑÅºÚ"));
	outtextxy(260, 30, str);

	settextstyle(25, 10, _T("Î¢ÈíÑÅºÚ"));
	outtextxy(260, 520, str1);

	settextstyle(25, 10, _T("Î¢ÈíÑÅºÚ"));
	outtextxy(620, 220, str3);

	_itoa_s(ant.size(), str4, 10);
	settextstyle(25, 10, _T("Î¢ÈíÑÅºÚ"));
	outtextxy(660, 250, str4);

	settextstyle(25, 10, _T("Î¢ÈíÑÅºÚ"));
	outtextxy(620, 320, str2);

	char ant_ = 'O';
	int length = ant.size();
	for (int i = 0; i < length; i++) {
		setbkmode(TRANSPARENT);
		outtextxy(ant[i]->x, ant[i]->y, ant_);
	}
	_getch();
	closegraph();

}

void showMessage() {

}
void showAnt(vector<Ant *> ant) {
	printf("%d", ant.size());
}

