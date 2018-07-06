/**
 * @header Person.h
 *
 * @brief This is the header file of Person.
 *
 * @author jmrs83@gmail.com 2018
 *
 * */

#include "Person.h"

Person::Person() {

}

Person::Person(const std::string &firstName, const std::string &lastName, int age, const std::string &address, const std::string &city,
               unsigned int phoneNumber) : _firstName(firstName), _lastName(lastName), _age(age), _address(address),
                                           _city(city), _phoneNumber(phoneNumber) {

}

void Person::outputAge() const {
  std::cout << "I'm " << _age << " years old." << std::endl;
}


