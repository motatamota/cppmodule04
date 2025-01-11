#include "ICharacter.h"

std::ostream	&operator<<(std::ostream &os, const ICharacter &tmp)
{
	os << tmp.getName();
	return os;
}
