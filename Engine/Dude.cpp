#include "Dude.h"
#include "Graphics.h"
#include "SpriteCodex.h"

void Dude::ClampToScreen()
{
	const float right = pos.x + width;
	if( pos.x < 0 )
	{
		pos.x = 0;
	}
	else if( right >= float( Graphics::ScreenWidth ) )
	{
		pos.x = float( Graphics::ScreenWidth - 1 ) - width;
	}

	const float bottom = pos.y + height;
	if( pos.y < 0 )
	{
		pos.y = 0;
	}
	else if( bottom >= float( Graphics::ScreenHeight ) )
	{
		pos.y = float( Graphics::ScreenHeight - 1 ) - height;
	}
}

void Dude::Draw( Graphics& gfx ) const
{
	SpriteCodex::DrawDude( int( pos.x ), int( pos.y ), gfx );
}

void Dude::Update( const Keyboard & kbd,float dt )
{
	if( kbd.KeyIsPressed( VK_RIGHT ) )
	{
		pos.x += speed * dt;
	}
	if( kbd.KeyIsPressed( VK_LEFT ) )
	{
		pos.x -= speed * dt;
	}
	if( kbd.KeyIsPressed( VK_DOWN ) )
	{
		pos.y += speed * dt;
	}
	if( kbd.KeyIsPressed( VK_UP ) )
	{
		pos.y -= speed * dt;
	}
}

Vec2 Dude::getPos() const 
{
	return pos;
}

float Dude::GetWidth() const
{
	return width;
}

float Dude::GetHeight() const
{
	return height;
}
