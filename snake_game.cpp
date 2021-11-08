#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

bool game_over;
const int width = 20;
const int height = 20;
int x, y, fruit_x, fruit_y, score;
int i = 0;
int j = 0;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup() {
	game_over = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruit_x = rand() % width;
	fruit_y = rand() % height;
}

void Draw() {
	system("cls");  //limpar a consola
	for (int i = 0; i < height; i++)
		if(i == 0 || i == height - 1) {
			for (int j = 0; j < width; j++)
					cout << "#";	
			cout << endl;
		}
		else {
			for (int j = 0; j < width; j++)
				if (j == 0 || j == width - 1){
					cout << "#";
				}
				else {
					cout << " ";
				}
			cout << endl;
		}
}

void Input() {

}

void Logic() {

}

int main() {
	Setup();
	while (!game_over) {
		Draw();
		Input();
		Logic();
	}


}