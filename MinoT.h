#ifndef MINOT_H
#define MINOT_H
#include<cstdlib>
#include<cstdio>
#include<iostream>
using namespace std;
char T_arr[4][4][4] = {{{'0','0','0','0'},
					{'0','0','0','0'},
					{'0','0','1','0'},
					{'0','1','1','1'}},
					{{'0','0','0','0'},
					{'0','0','1','0'},
					{'0','0','1','1'},
					{'0','0','1','0'}},
					{{'0','0','0','0'},
					{'0','0','1','0'},
					{'0','1','1','0'},
					{'0','0','1','0'}},
					{{'0','0','0','0'},
					{'0','0','0','0'},
					{'0','0','0','0'},
					{'0','0','0','0'}}};
class Mino_T{
	public:
		Mino_T(int xx=0,int yy=0,int ri=0):x(xx),y(yy),rotate_index(ri){};
		Mino_T& rotate(){
			rotate_index=(rotate_index>0)?0:rotate_index+1;

			return *this;
		}
		Mino_T& left(){
			x = (x>0)?(x-1):10;
			return *this;
		}
		Mino_T& right(){
			x=(x>10)?0:x+1;
			return *this;
		}
		virtual void paint(){
			for(int i=0;i<4;i++)
			{
				for(int j=0;j<4;j++)
				{
					cout<<T_arr[rotate_index][i][j];
				}
				cout<<endl;
			}
			cout<<endl;
		}
	protected:
		int x,y;
		int rotate_index;
};
#endif
