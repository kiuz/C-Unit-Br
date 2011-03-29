/*
 * matematica.c
 *
 *  Created on: 24/mar/2011
 *      Author: Domenico Monaco
 *
 */

#ifndef _MATEMATICA_H_
#define _MATEMATICA_H_

#include <stdio.h>
#include <stdlib.h>
#include "CUnit/basic.h"
#include <math.h>

//Declaration functions
int massimo(int a, int b);
int minimo(int a, int b);

int fattoriale(int a);
int signof(int a);

int prodotto(int a, int b);
float divisione(int dividendo, int divisore);

int somma(int a, int b);
int sottrazione(int a, int b);

//extra
float primalita(int input);
int ismul(int a, int b);
int isinteger(float input);

//Pinters
void inverti(int * a, int * b);

//POIONTER
int* summ(int a, int b);
void summ_p(int *a, int *b, int *result);

#endif