#include "./Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other) { *this = other; }

Intern &Intern::operator=(const Intern &) { return *this; }

// AForm *Intern::makeForm(std::string name, std::string target) const
// {
// }

Intern::~Intern() {}
