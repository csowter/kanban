#ifndef kanbaninterface_h
#define kanbaninterface_h

#include "Card.h"

#include <string>
#include <vector>
#include <iterator>

class KanbanInterface
{
public:
	virtual ~KanbanInterface(){}
	virtual bool CreateCard(std::string Title, std::string Description) = 0;
	virtual std::vector<Card>& GetCards() = 0;
};

#endif
