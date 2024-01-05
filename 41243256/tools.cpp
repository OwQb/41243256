#include "tools.h"
/*
*�o��tools.cpp�ɩMtools.h�ɬO�Ω�ݮe�z���榡,���ɨä��O���H�Ҽg,�ӷ��Ц�
*https://www.bilibili.com/video/BV1vM4y1X7Kb/?share_source=copy_web&vd_source=f387be602c0e9f90a4635284f77db973
*/
// ���JPNG�Ϩåh�z������
void _putimagePNG(int picture_x, int picture_y, IMAGE* picture) //x�����J�Ϥ���X�y�СAy��Y�y��
{
	DWORD* dst = GetImageBuffer(); // GetImageBuffer()��ơA�Ω���oø�ϸ˸m���O������w�AEASYX�۱a
	DWORD* draw = GetImageBuffer();
	DWORD* src = GetImageBuffer(picture); //���opicture����s���w
	int picture_width = picture->getwidth(); //���opicture���e�סAEASYX�۱a
	int picture_height = picture->getheight(); //���opicture�����סAEASYX�۱a
	int graphWidth = getwidth(); //���oø�ϰϪ��e�סAEASYX�۱a
	int graphHeight = getheight(); //���oø�ϰϪ����סAEASYX�۱a
	int dstX = 0; //�b��s�̹���������

	// ��@�z���K�� �����G Cp=�\p*FP+(1-�\p)*BP �A �������w�z�Ӷi���I�C�⪺���v�p��
	for (int iy = 0; iy < picture_height; iy++)
	{
		for (int ix = 0; ix < picture_width; ix++)
		{
			int srcX = ix + iy * picture_width; //�b��s�̹���������
			int sa = ((src[srcX] & 0xff000000) >> 24); //0xAArrggbb;AA�O�z����
			int sr = ((src[srcX] & 0xff0000) >> 16); //���oRGB�̪�R
			int sg = ((src[srcX] & 0xff00) >> 8); //G
			int sb = src[srcX] & 0xff; //B
			if (ix >= 0 && ix <= graphWidth && iy >= 0 && iy <= graphHeight && dstX <= graphWidth * graphHeight)
			{
				dstX = (ix + picture_x) + (iy + picture_y) * graphWidth; //�b��s�̹���������
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

// �A�Ω� y <0 �H��x<0�����󱡪p
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