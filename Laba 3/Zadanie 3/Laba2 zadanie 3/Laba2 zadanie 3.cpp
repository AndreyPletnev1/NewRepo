#include <iostream>
#include <map>

int main()
{
	system("chcp 1251");
	std::map<char, int> character;

	char name[100] = "AndreyPletnevAleksandrovij";

	int nameLenght = 26;

	for (int i = 0; i < nameLenght; i++)
	{
		if (character.count(name[i]))
			character[name[i]]++;
		else
			character[name[i]] = 1;
	}

	for (const auto& el : character)
		std::cout << el.first << " " << el.second << std::endl;

	return 0;
}