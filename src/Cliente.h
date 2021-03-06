/*
 * Cliente.h
 *
 *  Created on: 27/10/2015
 *      Author: ASUS
 */

#ifndef SRC_CLIENTE_H_
#define SRC_CLIENTE_H_

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

class Cliente
{private:
	string nome;
	unsigned int nif;
public:
	Cliente(string nome, unsigned int nif);
	~Cliente() {};
	string getNome() const;
	unsigned int getNif() const;
	void updateNome(string nome);
	void updateNif(unsigned int nif);
	bool operator==(Cliente c1);

};

class ClienteInexistente
{
	string nome;
public:
	string getNome() { return nome; };
	ClienteInexistente(string nome) : nome(nome) {};
};


#endif /* SRC_CLIENTE_H_ */
