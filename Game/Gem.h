#pragma once


class gem(__single_inheritance texture)
{
	static const int gem_width = 0;
	static const int gem_height = 0;
	static const int pixel_separation = 0;

	static enum JEWEL_COLOR(RED, YELLOW, BLUE, GREEN, PURPLE);


	Gem(SDL_Renderer*r);
	public gem();
	~public gem();

	private unsigned short _mColor;
	private unsigned short _Row;
	private unsigned short _Column;

	SetColor();
	GetColor();

	SetRow();
	GetRow();

	SetColumn();
	GetColumn();


}   


}

