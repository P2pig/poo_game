#include "Poo.h"
#include "Graphics.h"
#include <assert.h>

void Poo::Init( float in_x, float in_y, float in_vx, float in_vy )
{
	assert( initialized == false );
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
	initialized = true;
}

void Poo::Update()
{
	assert( initialized == true );
	x += vx;
	y += vy;

	const float right = x + width;
	if( x < 0 )
	{
		x = 0;
		vx = -vx;
	}
	else if( right >= (float) Graphics::ScreenWidth )
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	const float bottom = y + height;
	if( y < 0 )
	{
		y = 0;
		vy = -vy;
	}
	else if( bottom >= Graphics::ScreenHeight )
	{
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}
}

bool Poo::TestCollision( const Dude& dude ) const
{
	assert( initialized == true );
	const float duderight = dude.GetX() + dude.GetWidth();
	const float dudebottom = dude.GetY() + dude.GetHeight();
	const float pooright = x + width;
	const float poobottom = y + height;

	return
		duderight >= x &&
		dude.GetX() <= pooright &&
		dudebottom >= y &&
		dude.GetY() <= poobottom;
}

void Poo::Draw( Graphics& gfx ) const
{
	const int x_in = int(x);
	const int y_in = int(y);

	assert( initialized == true );
	gfx.PutPixel( 14 + x_in,0 + y_in,138,77,0 );
	gfx.PutPixel( 7 + x_in,1 + y_in,138,77,0 );
	gfx.PutPixel( 13 + x_in,1 + y_in,138,77,0 );
	gfx.PutPixel( 20 + x_in,1 + y_in,138,77,0 );
	gfx.PutPixel( 6 + x_in,2 + y_in,138,77,0 );
	gfx.PutPixel( 13 + x_in,2 + y_in,138,77,0 );
	gfx.PutPixel( 20 + x_in,2 + y_in,138,77,0 );
	gfx.PutPixel( 6 + x_in,3 + y_in,138,77,0 );
	gfx.PutPixel( 6 + x_in,4 + y_in,138,77,0 );
	gfx.PutPixel( 14 + x_in,4 + y_in,138,77,0 );
	gfx.PutPixel( 21 + x_in,4 + y_in,138,77,0 );
	gfx.PutPixel( 7 + x_in,5 + y_in,138,77,0 );
	gfx.PutPixel( 13 + x_in,5 + y_in,138,77,0 );
	gfx.PutPixel( 21 + x_in,5 + y_in,138,77,0 );
	gfx.PutPixel( 7 + x_in,6 + y_in,138,77,0 );
	gfx.PutPixel( 20 + x_in,6 + y_in,138,77,0 );
	gfx.PutPixel( 6 + x_in,7 + y_in,138,77,0 );
	gfx.PutPixel( 14 + x_in,7 + y_in,51,28,0 );
	gfx.PutPixel( 15 + x_in,7 + y_in,51,28,0 );
	gfx.PutPixel( 20 + x_in,7 + y_in,138,77,0 );
	gfx.PutPixel( 12 + x_in,8 + y_in,51,28,0 );
	gfx.PutPixel( 13 + x_in,8 + y_in,51,28,0 );
	gfx.PutPixel( 14 + x_in,8 + y_in,51,28,0 );
	gfx.PutPixel( 7 + x_in,9 + y_in,138,77,0 );
	gfx.PutPixel( 11 + x_in,9 + y_in,51,28,0 );
	gfx.PutPixel( 12 + x_in,9 + y_in,102,57,0 );
	gfx.PutPixel( 13 + x_in,9 + y_in,138,77,0 );
	gfx.PutPixel( 14 + x_in,9 + y_in,138,77,0 );
	gfx.PutPixel( 15 + x_in,9 + y_in,51,28,0 );
	gfx.PutPixel( 21 + x_in,9 + y_in,138,77,0 );
	gfx.PutPixel( 10 + x_in,10 + y_in,51,28,0 );
	gfx.PutPixel( 11 + x_in,10 + y_in,51,28,0 );
	gfx.PutPixel( 12 + x_in,10 + y_in,102,57,0 );
	gfx.PutPixel( 13 + x_in,10 + y_in,138,77,0 );
	gfx.PutPixel( 14 + x_in,10 + y_in,138,77,0 );
	gfx.PutPixel( 15 + x_in,10 + y_in,51,28,0 );
	gfx.PutPixel( 20 + x_in,10 + y_in,138,77,0 );
	gfx.PutPixel( 9 + x_in,11 + y_in,51,28,0 );
	gfx.PutPixel( 10 + x_in,11 + y_in,138,77,0 );
	gfx.PutPixel( 11 + x_in,11 + y_in,138,77,0 );
	gfx.PutPixel( 12 + x_in,11 + y_in,51,28,0 );
	gfx.PutPixel( 13 + x_in,11 + y_in,51,28,0 );
	gfx.PutPixel( 14 + x_in,11 + y_in,51,28,0 );
	gfx.PutPixel( 15 + x_in,11 + y_in,51,28,0 );
	gfx.PutPixel( 16 + x_in,11 + y_in,51,28,0 );
	gfx.PutPixel( 9 + x_in,12 + y_in,51,28,0 );
	gfx.PutPixel( 10 + x_in,12 + y_in,138,77,0 );
	gfx.PutPixel( 11 + x_in,12 + y_in,138,77,0 );
	gfx.PutPixel( 12 + x_in,12 + y_in,111,62,0 );
	gfx.PutPixel( 13 + x_in,12 + y_in,102,57,0 );
	gfx.PutPixel( 14 + x_in,12 + y_in,102,57,0 );
	gfx.PutPixel( 15 + x_in,12 + y_in,102,57,0 );
	gfx.PutPixel( 16 + x_in,12 + y_in,51,28,0 );
	gfx.PutPixel( 9 + x_in,13 + y_in,51,28,0 );
	gfx.PutPixel( 10 + x_in,13 + y_in,109,61,0 );
	gfx.PutPixel( 11 + x_in,13 + y_in,138,77,0 );
	gfx.PutPixel( 12 + x_in,13 + y_in,138,77,0 );
	gfx.PutPixel( 13 + x_in,13 + y_in,138,77,0 );
	gfx.PutPixel( 14 + x_in,13 + y_in,138,77,0 );
	gfx.PutPixel( 15 + x_in,13 + y_in,138,77,0 );
	gfx.PutPixel( 16 + x_in,13 + y_in,51,28,0 );
	gfx.PutPixel( 5 + x_in,14 + y_in,51,28,0 );
	gfx.PutPixel( 7 + x_in,14 + y_in,51,28,0 );
	gfx.PutPixel( 8 + x_in,14 + y_in,51,28,0 );
	gfx.PutPixel( 9 + x_in,14 + y_in,51,28,0 );
	gfx.PutPixel( 10 + x_in,14 + y_in,51,28,0 );
	gfx.PutPixel( 11 + x_in,14 + y_in,138,77,0 );
	gfx.PutPixel( 12 + x_in,14 + y_in,138,77,0 );
	gfx.PutPixel( 13 + x_in,14 + y_in,138,77,0 );
	gfx.PutPixel( 14 + x_in,14 + y_in,138,77,0 );
	gfx.PutPixel( 15 + x_in,14 + y_in,138,77,0 );
	gfx.PutPixel( 16 + x_in,14 + y_in,51,28,0 );
	gfx.PutPixel( 4 + x_in,15 + y_in,51,28,0 );
	gfx.PutPixel( 5 + x_in,15 + y_in,138,77,0 );
	gfx.PutPixel( 6 + x_in,15 + y_in,51,28,0 );
	gfx.PutPixel( 7 + x_in,15 + y_in,116,65,0 );
	gfx.PutPixel( 8 + x_in,15 + y_in,138,77,0 );
	gfx.PutPixel( 9 + x_in,15 + y_in,138,77,0 );
	gfx.PutPixel( 10 + x_in,15 + y_in,138,77,0 );
	gfx.PutPixel( 11 + x_in,15 + y_in,51,28,0 );
	gfx.PutPixel( 12 + x_in,15 + y_in,51,28,0 );
	gfx.PutPixel( 13 + x_in,15 + y_in,51,28,0 );
	gfx.PutPixel( 14 + x_in,15 + y_in,51,28,0 );
	gfx.PutPixel( 15 + x_in,15 + y_in,51,28,0 );
	gfx.PutPixel( 16 + x_in,15 + y_in,51,28,0 );
	gfx.PutPixel( 17 + x_in,15 + y_in,51,28,0 );
	gfx.PutPixel( 18 + x_in,15 + y_in,51,28,0 );
	gfx.PutPixel( 1 + x_in,16 + y_in,51,28,0 );
	gfx.PutPixel( 2 + x_in,16 + y_in,51,28,0 );
	gfx.PutPixel( 3 + x_in,16 + y_in,51,28,0 );
	gfx.PutPixel( 4 + x_in,16 + y_in,51,28,0 );
	gfx.PutPixel( 5 + x_in,16 + y_in,138,77,0 );
	gfx.PutPixel( 6 + x_in,16 + y_in,51,28,0 );
	gfx.PutPixel( 7 + x_in,16 + y_in,116,65,0 );
	gfx.PutPixel( 8 + x_in,16 + y_in,138,77,0 );
	gfx.PutPixel( 9 + x_in,16 + y_in,138,77,0 );
	gfx.PutPixel( 10 + x_in,16 + y_in,138,77,0 );
	gfx.PutPixel( 11 + x_in,16 + y_in,138,77,0 );
	gfx.PutPixel( 12 + x_in,16 + y_in,138,77,0 );
	gfx.PutPixel( 13 + x_in,16 + y_in,109,61,0 );
	gfx.PutPixel( 14 + x_in,16 + y_in,51,28,0 );
	gfx.PutPixel( 15 + x_in,16 + y_in,138,77,0 );
	gfx.PutPixel( 16 + x_in,16 + y_in,138,77,0 );
	gfx.PutPixel( 17 + x_in,16 + y_in,138,77,0 );
	gfx.PutPixel( 18 + x_in,16 + y_in,123,69,0 );
	gfx.PutPixel( 19 + x_in,16 + y_in,51,28,0 );
	gfx.PutPixel( 0 + x_in,17 + y_in,51,28,0 );
	gfx.PutPixel( 1 + x_in,17 + y_in,87,49,0 );
	gfx.PutPixel( 2 + x_in,17 + y_in,87,49,0 );
	gfx.PutPixel( 3 + x_in,17 + y_in,87,49,0 );
	gfx.PutPixel( 4 + x_in,17 + y_in,87,49,0 );
	gfx.PutPixel( 5 + x_in,17 + y_in,51,28,0 );
	gfx.PutPixel( 6 + x_in,17 + y_in,51,28,0 );
	gfx.PutPixel( 7 + x_in,17 + y_in,43,24,0 );
	gfx.PutPixel( 8 + x_in,17 + y_in,51,28,0 );
	gfx.PutPixel( 9 + x_in,17 + y_in,51,28,0 );
	gfx.PutPixel( 10 + x_in,17 + y_in,51,28,0 );
	gfx.PutPixel( 11 + x_in,17 + y_in,51,28,0 );
	gfx.PutPixel( 12 + x_in,17 + y_in,51,28,0 );
	gfx.PutPixel( 13 + x_in,17 + y_in,40,22,0 );
	gfx.PutPixel( 14 + x_in,17 + y_in,51,28,0 );
	gfx.PutPixel( 15 + x_in,17 + y_in,138,77,0 );
	gfx.PutPixel( 16 + x_in,17 + y_in,138,77,0 );
	gfx.PutPixel( 17 + x_in,17 + y_in,138,77,0 );
	gfx.PutPixel( 18 + x_in,17 + y_in,123,69,0 );
	gfx.PutPixel( 19 + x_in,17 + y_in,51,28,0 );
	gfx.PutPixel( 0 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 1 + x_in,18 + y_in,138,77,0 );
	gfx.PutPixel( 2 + x_in,18 + y_in,138,77,0 );
	gfx.PutPixel( 3 + x_in,18 + y_in,138,77,0 );
	gfx.PutPixel( 4 + x_in,18 + y_in,138,77,0 );
	gfx.PutPixel( 5 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 6 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 7 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 8 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 9 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 10 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 11 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 12 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 13 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 14 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 15 + x_in,18 + y_in,138,77,0 );
	gfx.PutPixel( 16 + x_in,18 + y_in,138,77,0 );
	gfx.PutPixel( 17 + x_in,18 + y_in,138,77,0 );
	gfx.PutPixel( 18 + x_in,18 + y_in,123,69,0 );
	gfx.PutPixel( 19 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 20 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 21 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 22 + x_in,18 + y_in,51,28,0 );
	gfx.PutPixel( 0 + x_in,19 + y_in,51,28,0 );
	gfx.PutPixel( 1 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 2 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 3 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 4 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 5 + x_in,19 + y_in,51,28,0 );
	gfx.PutPixel( 6 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 7 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 8 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 9 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 10 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 11 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 12 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 13 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 14 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 15 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 16 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 17 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 18 + x_in,19 + y_in,123,69,0 );
	gfx.PutPixel( 19 + x_in,19 + y_in,51,28,0 );
	gfx.PutPixel( 20 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 21 + x_in,19 + y_in,138,77,0 );
	gfx.PutPixel( 22 + x_in,19 + y_in,65,36,0 );
	gfx.PutPixel( 23 + x_in,19 + y_in,51,28,0 );
	gfx.PutPixel( 1 + x_in,20 + y_in,51,28,0 );
	gfx.PutPixel( 2 + x_in,20 + y_in,51,28,0 );
	gfx.PutPixel( 3 + x_in,20 + y_in,51,28,0 );
	gfx.PutPixel( 4 + x_in,20 + y_in,51,28,0 );
	gfx.PutPixel( 5 + x_in,20 + y_in,51,28,0 );
	gfx.PutPixel( 6 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 7 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 8 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 9 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 10 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 11 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 12 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 13 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 14 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 15 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 16 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 17 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 18 + x_in,20 + y_in,123,69,0 );
	gfx.PutPixel( 19 + x_in,20 + y_in,51,28,0 );
	gfx.PutPixel( 20 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 21 + x_in,20 + y_in,138,77,0 );
	gfx.PutPixel( 22 + x_in,20 + y_in,65,36,0 );
	gfx.PutPixel( 23 + x_in,20 + y_in,51,28,0 );
	gfx.PutPixel( 0 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 1 + x_in,21 + y_in,138,77,0 );
	gfx.PutPixel( 2 + x_in,21 + y_in,138,77,0 );
	gfx.PutPixel( 3 + x_in,21 + y_in,138,77,0 );
	gfx.PutPixel( 4 + x_in,21 + y_in,138,77,0 );
	gfx.PutPixel( 5 + x_in,21 + y_in,138,77,0 );
	gfx.PutPixel( 6 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 7 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 8 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 9 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 10 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 11 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 12 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 13 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 14 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 15 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 16 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 17 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 18 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 20 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 21 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 22 + x_in,21 + y_in,51,28,0 );
	gfx.PutPixel( 0 + x_in,22 + y_in,51,28,0 );
	gfx.PutPixel( 1 + x_in,22 + y_in,65,36,0 );
	gfx.PutPixel( 2 + x_in,22 + y_in,65,36,0 );
	gfx.PutPixel( 3 + x_in,22 + y_in,65,36,0 );
	gfx.PutPixel( 4 + x_in,22 + y_in,65,36,0 );
	gfx.PutPixel( 5 + x_in,22 + y_in,65,36,0 );
	gfx.PutPixel( 6 + x_in,22 + y_in,51,28,0 );
	gfx.PutPixel( 1 + x_in,23 + y_in,51,28,0 );
	gfx.PutPixel( 2 + x_in,23 + y_in,51,28,0 );
	gfx.PutPixel( 3 + x_in,23 + y_in,51,28,0 );
	gfx.PutPixel( 4 + x_in,23 + y_in,51,28,0 );
	gfx.PutPixel( 5 + x_in,23 + y_in,51,28,0 );
	gfx.PutPixel( 6 + x_in,23 + y_in,51,28,0 );
}