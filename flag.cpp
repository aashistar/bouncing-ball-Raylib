#include<raylib.h>
int main() {
	int CirRadius = 50;
	int Scrwidth = 800;
	int ScrHeight = 800;
	InitWindow(Scrwidth, ScrHeight, "Bouncing Ball");
	SetTargetFPS(60);
	int Xspeed = 3;
	int Yspeed = 5;
	int Xlength = 375;
	int Ylength = 375;
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLUE);
		if (Xlength + CirRadius/2 >= Scrwidth || Xlength - CirRadius/2 <= 0)
			Xspeed *= -1;
		if (Ylength + CirRadius/2 >= ScrHeight || Ylength - CirRadius/2 <= 0)
			Yspeed *= -1;
		Xlength += Xspeed;
		Ylength += Yspeed;
		DrawCircle(Xlength, Ylength, CirRadius, PINK);
		EndDrawing();
	}
	CloseWindow();
}