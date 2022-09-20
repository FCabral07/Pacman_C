#ifndef _HEADER_H_
#define _HEADER_H_

#define CIMA 'w'
#define BAIXO 's'
#define ESQUERDA 'a'
#define DIREITA 'd'

void move(char direcao);
int acabou();
int ehDirecao(char direcao);
void fantasmas();
int andarFantasma(int xatual, int yatual, int* xdestino, int* ydestino);
void explodePilula2(int x, int y, int somax, int somay, int qtd);
void explodePilula();

#endif