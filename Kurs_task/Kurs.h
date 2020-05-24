/**@author Fomin V.V.
 * @date 24.05.2020
 * @brief "Kurs task"
 */
#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


/**@class RemMedia
 * @brief Аудит
 * @file Kurs.h
 * @brief Аудит съемных носителей
 * @details Содержит конструктор по умолчанию и 3 метода Search - для поиска информации о usb в файле syslog,
														 read - для поиска информации в текстовом файле о конкретном съемном носителе
														 output - для вывода информации о конкретном съемном носителе в текстовый файл.
 */ 
	class RemMedia{
private:
char* value;
int len;
	string path = "/var/log/syslog";
	string path1 = "/home/user/Kurs_task/Kurs_task/test.txt";
	string INF= "/home/user/Kurs_task/Kurs_task/info.txt";
	string a = "/home/user/Kurs_task/Kurs_task/USB.txt";
    fstream fout;
	fstream test;
	fstream INFO;
	fstream text;
	fstream USB;
	int tmp, tmp1,usb;
	string info, str, usbnumb, search, maker, batch, idProduct, date;
public:
	RemMedia():value(new char[1]{}),len(0){}; ///< Конструктор по умолчанию
	/**
 * @brief Поиск информации о usb
 * @details Метод ищет информацию о всех usb, подключенных к PC в файле syslog и записывает ее в файл test.txt
 * 
 **/
	void Search();
	/**
 * @brief Выбор информации
 * @details Метод ищет информацию о конкретном usb в файле test.txt по имени съемного носителя, которое ввел пользователь.
 * @param [in] name 		Имя съемного носителя(Вводится пользователем).
 **/
	void read(const string& name);
	/**
 * @brief Вывод информации
 * @details Метод ищет информацию о конкретном usb в файле info.txt по имени съемного носителя, под которым usb хранится в системе Linux.
 **/
	void output();
		};
		/**
		 * @class cipher_error
		 * @file Kurs.h
		 * @brief Вызов исключений при возникновении ошибок.
		 */
		class cipher_error: public invalid_argument {
public:
		/**
		 * @brief 
		 * @param what_arg Возвращает причину возникновения ошибки
		 * @throw cipher_error
		 * @code
		 code = errno , what = 'Error! File was not opened!'
		  * @endcode
		 */
		explicit cipher_error (const string& what_arg):invalid_argument(what_arg) {}
		};