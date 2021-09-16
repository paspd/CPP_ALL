#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon gun = Weapon("9mm");
	HumanA Bob = HumanA("Bob", gun);
	std::string ak47 = "ak47";
	Bob.attack();
	gun.setType("AK47");
	Bob.attack();

	Weapon club = Weapon("golf club");
	HumanB Jhon = HumanB("Jhon");
	Jhon.attack();
	Jhon.setWeapon(club);
	Jhon.attack();
	club.setType("spiked club");
	Jhon.attack();
	return 0;
}
