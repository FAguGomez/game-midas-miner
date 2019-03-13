#include "Gem.h"


Gem::Gem(SDL_Renderer *r)
{
	_mRenderer = r;
}

Gem::Gem() 
{
	_mRenderer = NULL;
}

Gem::~Gem()
{
}

void SetColor(unsigned short color)
{
	_mColor = color;
}

unsigned short GetColor() 
{
	return _mColor;
}

void SetColumn(unsgined short column)
{
	_mColumn = column;
}

unsigned short GetColumn()
{
	return _mColumn;
}

void SetRow(unsigned short row)
{
	row = _mRow
}

unsigned short GetColumn()
{
	return _mColumn;
}


void DrawGem(Texture textura, float x, float y,float rotation = 0.0f)
{
	mEngine.Render(King::Engine::TEXTURE_PURPLE, 250.0f, 250.0f);
}
