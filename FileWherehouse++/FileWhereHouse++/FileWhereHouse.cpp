/*
 * FileWhereHouse.cpp
 *
 *  Created on: 6 de jun. de 2016
 *      Author: acacia
 */

#include "FileWhereHouse.h"

FileWhereHouse::FileWhereHouse(int pPortNumber, char* pIpNumber, string pFileUbication) {
	this->portNumber=pPortNumber;
	this->ipNumber=pIpNumber;
	this->fileUbication=pFileUbication;
	this->server = new TCPAcceptor(portNumber ,ipNumber);
}

FileWhereHouse::~FileWhereHouse() {
	// TODO Auto-generated destructor stub
}

