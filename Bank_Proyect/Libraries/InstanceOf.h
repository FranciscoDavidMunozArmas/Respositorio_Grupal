/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 19:07:11
 * @function Declaration of the class InstanceOf
*/
#if !defined(__InstanceOf_h)
#define __InstanceOf_h
template<class T>
	bool intanceOfString(T var);
template<class T>
	bool instanceOfInt(T var);
template<class T>
	bool instanceOfFloat(T var);
template<class T>
	bool instanceOfDouble(T var);
template<class T>
	bool instanceOfLongDouble(T var);
template<class T>
	bool instanceOfLongInt(T var);
template<class T, class R>
	bool instanceOf(T var_1, T var_2);
template<class T, class R>
	bool instanceOf(T var_1, R var_2);

#endif
