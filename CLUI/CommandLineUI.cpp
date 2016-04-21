#include "CommandLineUI.h"
#include <iostream>
#include <vector>

CommandLineUI::CommandLineUI(KanbanInterface &Board)
: mBoard(Board)
{
	ShowWelcome();
	Run();
}

void CommandLineUI::ShowWelcome()
{
	std::cout << "Simple Kanban" << std::endl;
}

void CommandLineUI::Run()
{
	mRun = true;
	while(mRun)
	{
		char Command = ReadCommand();
		RunCommand(Command);
	}
}

char CommandLineUI::ReadCommand()
{
	std::cout << "\r\n> ";
	std::string input;
	std::getline(std::cin, input);
	return input[0];
}

void CommandLineUI::RunCommand(char Command)
{
	switch(Command)
	{
		case CommandLineUI::CreateCardCommand:
			CreateCard();
			break;
		case CommandLineUI::ListCardsCommand:
			ListCards();
			break;
		case CommandLineUI::QuitCommand:
			Quit();
			break;
	}
}

void CommandLineUI::CreateCard()
{
	std::string title;
	std::string description;

	std::cout << "Adding card\r\nTitle: ";
	std::getline(std::cin, title);
	std::cout << "\r\nDescription: ";
	std::getline(std::cin, description);
	
	if(mBoard.CreateCard(title, description))
		std::cout << "Card added" << std::endl;
	else
		std::cout << "Failed to add card" << std::endl;
}

void CommandLineUI::ListCards()
{
	std::vector<Card> cards = mBoard.GetCards();
	for(std::vector<Card>::iterator it = cards.begin(); it != cards.end(); it++)
	{
		std::cout << it->GetTitle() << std::endl;
	}
}

void CommandLineUI::Quit()
{
	std::cout << "Quit" << std::endl;
	mRun = false;
}
