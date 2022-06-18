#include "userData.h"
#include <string>

struct travel {
	std::string dest;
	int person;
	int price;
	int day, night;
}t;

struct usr {
	std::string uN;
	std::string email;
	travel trvl[];
}u;

void createUser(std::string name, std::string email) {
	u.uN = name;
	u.email = email;
}
int i = 0;
void addTrvl() {
	u.trvl[i] = t;
	i++;
}

void addTour(std::string dest, int person, int price, int day, int night) {
	t.dest = dest;
	t.person = person;
	t.price = price;
	t.day = day;
	t.night = night;
}
