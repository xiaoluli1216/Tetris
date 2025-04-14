#pragma once
#include<vector>
#include<graphics.h>
#include "Block.h"
using namespace std;
class Tetris
{
public:
	Tetris(int rows, int cols,int left,int top,int blockSize);
	void init(); //初始化
	void play(); //开始游戏
private:
	void keyEvent();
	void updateWindow();
	int getDelay(); //距离上一次调用该函数间隔多少ms
	void drop();
	void clearline();
	void moveLeftRight(int offset);
	void rotate();
	void drawScore();
	void checkOver();
	void saveScore();
	void displayer();


private:
	int delay;
	bool update;
	//0表示没有任何方块；5表示第五种俄罗斯方块
	vector<vector<int>>map;
	int rows;
	int cols;
	int leftMargin;
	int topMargin;
	int blockSize;
	IMAGE imgbg;
	Block* curBlock;
	Block* nextBlock; //预告方块
	Block bakBlock; //备份上一个合法位置
	int score;
	int lineCount;
	int level;
	int highestScore;
	bool gameOver;

	IMAGE imgOver;
	IMAGE imgWin;
};

