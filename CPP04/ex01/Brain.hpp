#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	void setIdea(std::string idea, int id);
	
	std::string getIdea(int id) const;

	Brain &operator=(Brain const &rhs);

	Brain(Brain const &rhs);
	Brain();
	~Brain();
};

#endif