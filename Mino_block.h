#ifndef MINO_BLOCK_H
#define MINO_BLOCK_H
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include"MinoT.h"
using namespace std;
char block_arr[1][4][4] = {{{'0','0','0','0'},
							{'0','0','0','0'},
							{'0','1','1','0'},
							{'0','1','1','0'}}};
class Mino_block: public Mino_T{
	public:
		virtual void paint(){
			for(int i =0;i<4;i++)
			{
				for(int j =0;j<4;j++)
				{
					cout<<block_arr[rotate_index][i][j];
				}
				cout<<endl;
			}
			cout<<endl;
		} 
};
#endif
