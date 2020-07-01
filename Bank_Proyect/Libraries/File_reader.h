/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 19:07:11
 * @function Declaration of the class File_reader
*/
#if !defined(__File_Reader_File_reader_h)
#define __File_Reader_File_reader_h

#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

class File_reader
{
public:
   void _check_file(FILE *file, char* file_name);
   template<typename T>
   void _write_in_file(FILE* file, char* file_name, T* data);
   template<typename T>
   T* _read_file(FILE* file, char* file_name, T* data);
   template<typename T>
   void _look_by_key(FILE* file, char* file_name, string key, T* data);
   template<typename T>
   void _delete(FILE* file, char* file_name, T& key);
   template<typename T>
   void _update(FILE* file, char* file_name, T* _data_update);

   void _delete_all(char* file_name);
protected:
private:

};

#endif
