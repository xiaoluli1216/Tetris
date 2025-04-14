#pragma once
#include<graphics.h>
#include<vector>
using namespace std;

struct Point {
	int row;
	int col;
};
class Block
{
public:
	Block();
	void drop();
	void moveLeftRIght(int offset);
	void rotate();
	void draw(int leftMargin,int topMargin);
	static IMAGE** getImages();
	Block& operator=(const Block& other);
	//Point* getSmallBlocks();
	bool blockInMap(const vector<vector<int>>& map);
	void solidify(vector<vector<int>>& map);
	int getBlockType();

private:
	int blockType; //∑ΩøÈ¿‡–Õ
	Point smallBlocks[4];
	IMAGE *img;
	static IMAGE* imgs[7];
	static int size;

};

