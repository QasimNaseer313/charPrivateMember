#include"Header.h"
#include<iostream>
#include<cstring>
using namespace std;

Employee::Employee(int id, char* n){
	int i = 0;
	employeID = id;
	int len = strlen(n);
	name = new char[len+1];
	while (n[i] != '\0')
	{
		name[i] = n[i];
		i++;
	}
	name[i] = '\0';

}


Employee Employee::operator+ (const Employee& obj){
	int newId = employeID + obj.employeID;
	int len = strlen(name) + strlen(obj.name) + 1;
	char* newName = new char[len];
	strcpy_s(newName,len,name);
	strcat_s(newName,len,obj.name);
	return Employee(newId,newName);
}

//Employee::~Employee(){
//	delete name[];
//}
void Employee::display(){
	cout <<"id :" <<employeID<<endl;
	cout <<"name: "<< name<<endl;
}