#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define BufferWidth 80
#define BufferHeight 40

int move = 1;
int ScreenIndex;
HANDLE Screen[2];

struct obj 
{
	int x;
	int y;
	const char * shape;
};

obj * Player;
obj * Booster;

void Screen_Init()
{
	CONSOLE_CURSOR_INFO cursor;
	COORD size = { BufferWidth, BufferHeight };
	SMALL_RECT rect = { 0,0, BufferWidth - 1, BufferHeight - 1 };

	// 화면 2개를 생성합니다.
	Screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CONSOLE_TEXTMODE_BUFFER,NULL
	);
	SetConsoleScreenBufferSize(Screen[0], size);
	SetConsoleWindowInfo(Screen[0], TRUE, &rect);

	Screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CONSOLE_TEXTMODE_BUFFER, NULL
	);
	SetConsoleScreenBufferSize(Screen[1], size);
	SetConsoleWindowInfo(Screen[1], TRUE, &rect);

	// 커서 숨기기
	cursor.dwSize = 1;
	cursor.bVisible = false;
	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}

void ScreenFlipping()
{
	SetConsoleActiveScreenBuffer(Screen[ScreenIndex]);
	ScreenIndex = !ScreenIndex;
}

void ScreenClear()
{
	COORD Coord = { 0,0 };
	DWORD dw;
	FillConsoleOutputCharacter(Screen[ScreenIndex], ' ', BufferWidth * BufferHeight, Coord, &dw);
}

void ScreenRelese()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

void ScreenPrint(int x, int y, const char * string)
{
	COORD CursorPosition = { x, y };
	DWORD dw;

	SetConsoleCursorPosition(Screen[ScreenIndex], CursorPosition);
	WriteFile(Screen[ScreenIndex], string, strlen(string), &dw, NULL);
}

void PlayerInitialize()
{
	Player = (obj*)malloc(sizeof(obj));
	Player->x = 5;
	Player->y = 5;
	Player->shape = "◎";
}

void BoosterInitialize()
{
	Booster = (obj*)malloc(sizeof(obj));
	Booster->x = rand() % 9 + 1;
	Booster->y = rand() % 9 + 1;
	Booster->shape = "⊙";
}

void Render()
{
	ScreenPrint(Player->x, Player->y, Player->shape);
	ScreenPrint(Booster->x, Booster->y, Booster->shape);
}

void KeyBoard()
{
	switch (move)
	{
	case 1 : Player->x++;
		break;
	case 2 : Player->x--;
		break;	
	case 3 : Player->y--;	
		break;	
	case 4 : Player->y++;
		break;
	}

	if (GetAsyncKeyState(VK_RIGHT))
	{
		move = 1;
	}

	if (GetAsyncKeyState(VK_LEFT))
	{
		move = 2;
	}

	if (GetAsyncKeyState(VK_UP))
	{

		move = 3;
	}

	if (GetAsyncKeyState(VK_DOWN))
	{

		move = 4;
	}
}

int main()
{ 
	// 지렁이 게임
	/*
	// [1]
	// Left Right Up Down
	// ex) Up 키를 눌렀을 때 Up 방향으로 계속 이동합니다.

	// 지렁이 몸체 
	// Level (1) 몸체가 5개가 되면 Clear
	// ○○○○○
	// Level (2) 몸체가 7개가 되면 Clear
	// ○○○○○○○
	// Level (3) 몸체가 9개가 되면 Clear
	// ○○○○○○○○○

	// 충돌()
	// 양식장 안에서 ★ 아이템이 랜덤으로 생성되어야 합니다.
	// ★과 충돌을 하게 되면 몸체가 늘어나게 됩니다.
	// 양식장과 충돌하게 되면 게임 오버가 되면서 게임이 초기화됩니다.
	*/

	// 지렁이 소스
	int move = 4;

	srand(time(NULL));

	Screen_Init();
	PlayerInitialize();
	BoosterInitialize();

	while (1)
	{
		KeyBoard();
		Render();

		ScreenFlipping();
		ScreenClear();

		Sleep(100);
	}

	ScreenRelese();

	return 0;
}

