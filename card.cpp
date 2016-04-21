#include "card.h"
#include <string>
#include <iostream>

Card::Card(std::string Title, std::string Description)
: mTitle(Title), mDescription(Description)
{
	
}

Card::~Card()
{
}

std::string Card::GetTitle() const
{
	return mTitle;
}