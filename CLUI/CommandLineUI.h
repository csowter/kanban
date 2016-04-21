#ifndef commandlineui_h
#define commandlineui_h

#include "../KanbanInterface.h"

class CommandLineUI
{
private:
	static const char CreateCardCommand = '1';
	static const char ListCardsCommand = '2';
	static const char QuitCommand = 'q';

	KanbanInterface &mBoard;
	bool mRun;

private:
	void ShowWelcome();
	void Run();
	char ReadCommand();
	void RunCommand(char Command);

	void CreateCard();
	void ListCards();
	void Quit();
	
public:
	CommandLineUI(KanbanInterface &Board);
};

#endif
