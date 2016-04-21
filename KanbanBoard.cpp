#include "KanbanBoard.h"
#include "card.h"

KanbanBoard::KanbanBoard()
: mCards()
{
}

bool KanbanBoard::CreateCard(std::string Title, std::string Description)
{
	Card c(Title, Description);
	mCards.push_back(c);
	return true;
}

std::vector<Card>& KanbanBoard::GetCards()
{
	return mCards;
}