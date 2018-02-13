#pragma once

#include "Graphics.h"

class SpriteCodex
{
public:
	static void DrawTitleScreen( int x, int y, Graphics& gfx );
	static void DrawGameOver( int x, int y, Graphics& gfx );
	static void DrawDude(int x, int y, Graphics& gfx);
	static void DrawPoo( int x, int y, Graphics& gfx );
};