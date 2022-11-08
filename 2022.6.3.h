#pragma once
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
	const char* shape;
};

obj * Player;
obj * Booster;

// 함수
/*
void Screen_Init()
{
	CONSOLE_CURSOR_INFO cursor;
	COORD size = { BufferWidth, BufferHeight };
	SMALL_RECT rect = { 0,0, BufferWidth - 1, BufferHeight - 1 };

	// 화면 2개를 생성합니다.
	Screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CONSOLE_TEXTMODE_BUFFER, NULL
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

void ScreenPrint(int x, int y, const char* string)
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
	case 1: Player->x++;
		break;
	case 2: Player->x--;
		break;
	case 3: Player->y--;
		break;
	case 4: Player->y++;
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
*/

// main
/*
int main()
{
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
*/

