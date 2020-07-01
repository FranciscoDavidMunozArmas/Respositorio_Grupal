/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of InstanceOf
*/
#include <iostream>
#include <typeinfo>
#include "InstanceOf.h"

using namespace std;

/**
 * @brief instanceOfString
 * @param var
*/
template<typename T>
bool intanceOfString(T var) {
	return typeid(string).name() == typeid(var).name();
}

/**
 * @brief instanceOfInt
 * @param var
*/
template<typename T>
bool instanceOfInt(T var) {
	return typeid(int).name() == typeid(var).name();
}

/**
 * @brief instanceOfFloat
 * @param var
*/
template<typename T>
bool instanceOfFloat(T var) {
	return typeid(float).name() == typeid(var).name();
}

/**
 * @brief instanceOfDouble
 * @param var
*/
template<typename T>
bool instanceOfDouble(T var) {
	return typeid(double).name() == typeid(var).name();
}

/**
 * @brief instanceOfLongDouble 
 * @param var
*/
template<typename T>
bool instanceOfLongDouble(T var) {
	return typeid(long double).name() == typeid(T).name();
}

/**
 * @brief instanceOfLongInt
 * @param var
*/
template<typename T>
bool instanceOfLongInt(T var) {
	return typeid(long int).name() == typeid(var).name();
}

/**
 * @brief instanceOf
 * @param var_1, var_2
*/
template<typename T>
bool instanceOf(T var_1, T var_2) {
	return true;
}

/**
 * @brief instanceOf
 * @param  var_1, var_2
*/
template<typename T, typename R>
bool instanceOf(T var_1, R var_2) {
	return false;
}
