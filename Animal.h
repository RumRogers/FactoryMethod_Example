#pragma once

#include <iostream>

class Animal // PRODUCT INTERFACE
{
public:
	Animal(const std::string& name) : mName(name) {}
	void greet();

private:
	virtual void makeNoise() = 0;
	void sayName();

	std::string mName;
};