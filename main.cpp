#include"Mino_block.h"
#include"MinoT.h"
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	Mino_T *tp,t;
	Mino_block b,*bp;
	tp = &t;
	bp = &b;
	t.paint();
	b.paint();
	cout<<"pointer:"<<endl;
	tp->paint();
	bp->paint();
	tp = &b;
	cout<<"change:"<<endl;
	tp->paint();
	bp->paint();
	cout<<"rotate:"<<endl;
	tp->rotate();
	bp->rotate();
	tp->paint();
	bp->paint();
	return 0;
}
