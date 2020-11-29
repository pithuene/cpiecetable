#ifndef PIECETABLE_H_
#define PIECETABLE_H_

struct piecetable;
typedef struct piecetable * Piecetable;

Piecetable piecetable_create(char * original);
void piecetable_free(Piecetable pt);
char * piecetable_value(Piecetable pt);
void piecetable_insert(Piecetable pt, char * value, int at);

#endif
