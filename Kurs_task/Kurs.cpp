#include "Kurs.h"
#include <iostream>
using namespace std;

void RemMedia::Search(){
	fout.open(path, fstream::in | fstream::out |  fstream::app);
	if (!fout.is_open())
	{
		throw cipher_error("Error! File was not opened!");
		}
		else{
			cout << "File was opened!" << "\n";
			test.open (path1, fstream::in | fstream::out | ios::trunc);
			while (!fout.eof()){
				info = "";
				getline(fout, info);
				tmp = info.find("usb");
				if (tmp != -1){
			test.close();
			test.open (path1, fstream::in | fstream::out | fstream::app);
		test << info << "\n";
		test.close();}
			}
	}
			fout.close();
	}
	
	void RemMedia::read(const string& name){
		test.open (path1,   fstream::in | fstream::out);
		INFO.open (INF, fstream::in | fstream::out |  ios::trunc);
		INFO.close();
		while(!test.eof()){
		str = "";
		getline(test, str);
	
		tmp1 = str.find(name);
		if (tmp1 != -1){
		INFO.open (INF, fstream::in | fstream::out |  fstream::app);
		INFO << str;
		INFO.close();
		break;
		}
		
	}	if (tmp1 == -1) {
		throw cipher_error ("Flesh was not find!!! Try to enter correct Fleshcard name!");
}
	
	test.close();
		}
		
	void RemMedia::output(){
			int usb;
	INFO.open (INF, fstream::in |  fstream::out |  fstream::app);
		getline(INFO, str);
		while (usbnumb != "]"){
		usbnumb = str[0];
			str.erase(0, 1);}
			if (str[0] ==' '){
				str.erase(0, 1);
				}
		usb = str.find(":");
		if (usb != -1){
			str.erase(usb, 100);}
		INFO<< str;
		search = str;
		INFO.close();
		
		
		
	text.open(path1, fstream::in |  fstream::out |  fstream::app);
		USB.open(a, fstream::in | fstream::out|  ios::trunc);
		USB.close();
		
	while(!text.eof()){
		str = "";
		getline(text, str);
		tmp1 = str.find(search);
		if (tmp1 != -1){
		USB.open(a, fstream::in | fstream::out|  fstream::app);
		
		USB << str << endl;}
		}
		USB.close();
		text.close();
		
		
		
		USB.open(a, fstream::in | fstream::out);
		while(!USB.eof()){
		getline(USB, str);
		usb = str.find("idVendor=");
		
		if (usb != -1){
			while (str[usb + 9] != ','){
				maker += str[usb + 9];
				usb ++;
			}
			
		usb = str.find("idProduct=");
		if (usb != -1){
			while (str[usb + 10] != ','){
				idProduct += str[usb + 10];
				usb++;
				}
				}
		}
		}
		USB.close();
		USB.open(a, fstream::in | fstream::out);
	
		getline (USB, str);
		for ( int i = 0; i < 16; ++i){
			date += str[i]; 
		}
		USB.close();
		fstream finishInfo;
		finishInfo.open("FinishInfo.txt", fstream::in | fstream::out | ios::trunc);
		finishInfo.close();
		finishInfo.open("FinishInfo.txt", fstream::in | fstream::out | ios::app);
		finishInfo << "id производителя : " << maker << "\n"<<"id продукта : " << idProduct << "\n" << "Дата использования : "<< date << "\n" ;
		finishInfo.close();
		}