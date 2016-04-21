#ifndef card_h
#define card_h

#include <string>

class Card
{
private:
	std::string mTitle;
	std::string mDescription;

public:
	Card(std::string Title, std::string Description);
	~Card();
	std::string GetTitle() const;
};

#endif
