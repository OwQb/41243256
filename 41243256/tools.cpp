#include "tools.h"
/*
*這個tools.cpp檔和tools.h檔是用於兼容透明格式,此檔並不是本人所寫,來源請至
*https://www.bilibili.com/video/BV1vM4y1X7Kb/?share_source=copy_web&vd_source=f387be602c0e9f90a4635284f77db973
*/
// 載入PNG圖並去透明部分
void _putimagePNG(int picture_x, int picture_y, IMAGE* picture) //x為載入圖片的X座標，y為Y座標
{
	DWORD* dst = GetImageBuffer(); // GetImageBuffer()函數，用於取得繪圖裝置的記憶體指針，EASYX自帶
	DWORD* draw = GetImageBuffer();
	DWORD* src = GetImageBuffer(picture); //取得picture的顯存指針
	int picture_width = picture->getwidth(); //取得picture的寬度，EASYX自帶
	int picture_height = picture->getheight(); //取得picture的高度，EASYX自帶
	int graphWidth = getwidth(); //取得繪圖區的寬度，EASYX自帶
	int graphHeight = getheight(); //取得繪圖區的高度，EASYX自帶
	int dstX = 0; //在顯存裡像素的角標

	// 實作透明貼圖 公式： Cp=αp*FP+(1-αp)*BP ， 貝葉斯定理來進行點顏色的機率計算
	for (int iy = 0; iy < picture_height; iy++)
	{
		for (int ix = 0; ix < picture_width; ix++)
		{
			int srcX = ix + iy * picture_width; //在顯存裡像素的角標
			int sa = ((src[srcX] & 0xff000000) >> 24); //0xAArrggbb;AA是透明度
			int sr = ((src[srcX] & 0xff0000) >> 16); //取得RGB裡的R
			int sg = ((src[srcX] & 0xff00) >> 8); //G
			int sb = src[srcX] & 0xff; //B
			if (ix >= 0 && ix <= graphWidth && iy >= 0 && iy <= graphHeight && dstX <= graphWidth * graphHeight)
			{
				dstX = (ix + picture_x) + (iy + picture_y) * graphWidth; //在顯存裡像素的角標
				int dr = ((dst[dstX] & 0xff0000) >> 16);
				int dg = ((dst[dstX] & 0xff00) >> 8);
				int db = dst[dstX] & 0xff;
				draw[dstX] = ((sr * sa / 255 + dr * (255 - sa) / 255) << 16)
					| ((sg * sa / 255 + dg * (255 - sa) / 255) << 8)
					| (sb * sa / 255 + db * (255 - sa) / 255);
			}
		}
	}
}

// 適用於 y <0 以及x<0的任何情況
void putimagePNG(int x, int y, IMAGE* picture) {

	IMAGE imgTmp, imgTmp2, imgTmp3;
	int winWidth = getwidth();
	int winHeight = getheight();
	if (y < 0) {
		SetWorkingImage(picture);
		getimage(&imgTmp, 0, -y,
			picture->getwidth(), picture->getheight() + y);
		SetWorkingImage();
		y = 0;
		picture = &imgTmp;
	}
	else if (y >= getheight() || x >= getwidth()) {
		return;
	}
	else if (y + picture->getheight() > winHeight) {
		SetWorkingImage(picture);
		getimage(&imgTmp, x, y, picture->getwidth(), winHeight - y);
		SetWorkingImage();
		picture = &imgTmp;
	}

	if (x < 0) {
		SetWorkingImage(picture);
		getimage(&imgTmp2, -x, 0, picture->getwidth() + x, picture->getheight());
		SetWorkingImage();
		x = 0;
		picture = &imgTmp2;
	}

	if (x > winWidth - picture->getwidth()) {
		SetWorkingImage(picture);
		getimage(&imgTmp3, 0, 0, winWidth - x, picture->getheight());
		SetWorkingImage();
		picture = &imgTmp3;
	}


	_putimagePNG(x, y, picture);
}

int getDelay() {
	static unsigned long long lastTime = 0;
	unsigned long long currentTime = GetTickCount();
	if (lastTime == 0) {
		lastTime = currentTime;
		return 0;
	}
	else {
		int ret = currentTime - lastTime;
		lastTime = currentTime;
		return ret;
	}
}