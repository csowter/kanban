#ifndef kanbanboard_h
#define kanbanboard_h

#include "KanbanInterface.h"
#include "card.h"
#include <vector>
#include <iterator>

class KanbanBoard : public KanbanInterface
{
private:
	std::vector<Card> mCards;
public:
	KanbanBoard();
	bool CreateCard(std::string Title, std::string Description);
	std::vector<Card>& GetCards();
};

#endif
