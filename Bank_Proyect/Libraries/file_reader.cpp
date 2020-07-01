/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of file_reader
*/
#include "File_reader.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <malloc.h>

#include "Array_dinamic.h"
#include "InstanceOf.cpp"

#pragma once

using namespace std;

/**
 * @brief _check_file
 * @param file, file_name
*/
void File_reader::_check_file(FILE* file, char* file_name)
{
	try {
		if ((file = fopen(file_name, "rb")) == NULL) {
			throw file_name;
		}
	}
	catch (char* file_name) {
		fclose(file);
		//cout << "Error: No se puede abrir el archivo: " << file_name << endl;
		file = fopen(file_name, "wb");
		//cout << "Archivo creado" << endl;
	}
	fclose(file);
}

/**
 * @brief _write_in_file
 * @param file, file_name, data
*/
template<typename T>
void File_reader::_write_in_file(FILE* file, char* file_name, T* data)
{
	_check_file(file, file_name);
	file = fopen(file_name, "ab");
	fwrite(data, sizeof(T), 1, file);
	fclose(file);
}

/**
 * @brief _read_file
 * @param file, file_name, data
*/
template<typename T>
T* File_reader::_read_file(FILE* file, char* file_name, T* data)
{
	int index;
	_check_file(file, file_name);
	file = fopen(file_name, "rb");

	fseek(file, 0, SEEK_END);
	index = ftell(file) / sizeof(T);

	data = (T*)malloc(index*sizeof(T));

	fseek(file, 0, SEEK_SET);
	for (int i = 0; i < index; i++) {
		fread((data + i), sizeof(T), 1, file);
	}

	fclose(file);

	return data;
}

/**
 * @brief _look_by_key
 * @param file, file_name, key, data
*/
template<typename T>
void File_reader::_look_by_key(FILE* file, char* file_name, string key, T* data)
{
}

/**
 * @brief _delete
 * @param file, file_name, _element
*/
template<typename T>
void File_reader::_delete(FILE* file, char* file_name, T& _element)
{
	Array_dynamic _ad;
	T* _auxiliar_array;
	_auxiliar_array = _read_file(file,file_name, _auxiliar_array);

	_delete_all(file_name);

	for (int i = 0; i < _ad._dynamic_size(_auxiliar_array); i++) {
		if (!((_element) == *(_auxiliar_array + i))) {
			_write_in_file(file, file_name, (_auxiliar_array + i));
		}
	}

	free(_auxiliar_array);
	fclose(file);
}

/**
 * @brief _check_file
 * @param file, file_name, _data_update
*/
template<typename T>
void File_reader::_update(FILE* file, char* file_name, T* _data_update) {
	Array_dynamic _ad;
	T* _auxiliar_array;
	_auxiliar_array = _read_file(file, file_name, _auxiliar_array);

	_delete_all(file_name);

	for (int i = 0; i < _ad._dynamic_size(_auxiliar_array); i++) {
		if (*(_data_update) == *(_auxiliar_array + i)) {
			_write_in_file(file, file_name, _data_update);
		} else {
			_write_in_file(file, file_name, (_auxiliar_array + i));
		}
	}

	free(_auxiliar_array);
}

/**
 * @brief _delete_all
 * @param file_name
*/
void File_reader::_delete_all(char* file_name) {
	remove(file_name);
}
