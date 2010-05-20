//#ifndef utils
//#define utils
#include "dataStructs.h"

//Strip packing

bool compareHeight(Item, Item);

void init_visited(vector <Item> &);

//void init_coord(vector <Item> &);

void init_vi_strip(vector <Strip> &);


//Heuristics
int searchItem(const vector<Placement>,int);

int searchBin(const vector<Placement>,int);

bool linS(int*,int,int);

long factorial(int i);

long comb(int n, int k);

int * combinations(int,int,int*);

//Others
void printPack(const Packing);

//#endif
