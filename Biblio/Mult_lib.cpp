//! @file Multi_lib.cpp
//! @mainpage ������� ��������
//! �������� ������� �������� ��������, ����� ������ � ����� ��������� � ���� <b>�����</b>.
//! <p>������ �� ������������� ����� ���������� � ������ ����.
//! @see https://github.com/Yuletsky/Multik_Help/tree/master/Multik
//! @author Sidorina Y.A.
//! @date 27.02.2020


#include "TXLib.h"

//! ����������� �������� ����� ����.

const COLORREF   SKY_COLOR = RGB (134, 210, 230);

//! ����������� �������� ����� ������.

const COLORREF   SUN_COLOR = RGB (255, 255,   0);

//! ����������� �������� ����� �������.

const COLORREF FIELD_COLOR = RGB ( 56, 236,  47);

//! ����������� �������� �����, ����������� ��� ��������� ���.

const COLORREF SMILE_COLOR = RGB (235,  20,  47);

//! ����������� �������� ����� ����.

const COLORREF WATER_COLOR = RGB (128, 255, 255);


//! ������ ������, ��������� �� 7 �����������.
//! @param x - ���������� x ��� ������ ������ �����, ��������� � ������ ������.
//! @param y - ���������� y ��� ������ ������ �����, ��������� � ������ ������.
//! @param r - ������ ������ ������ �����, ��������� � ������ ������.
//! @warning ������ ������ ���� ���������� ��� ���� �����������, �������� � ������ ������.

void DrawOblako  (int x, int y, int r);

//! ������ ������, ������� �������� ��� �������� ��������.
//! ����� � ��� ��������� �� ������ ��������� ������������ ������.
//! ���� � ��� ��������� � ������������ ��������� ���������, ������� ����� �������� �������, ��������� ��� ��� ���������� ������.
//! @param x - ���������� x ��� ���� ������.
//! @param y - ���������� y ��� ���� ������.
//! @param r - ������ ������.
//! @param ConturSun - ���� ������� ������.
//! @param BaseColorSun - ������� ���� ������.
//! @param ConturGlaz - ���� ������� ����.
//! @param ColorZrachka - ���� ������.
//! @param ColorGlaz - ���� ����.
//! @param ColorNosa - ���� ����.
//! @param ColorLuchey - ���� �����.
//! @param ColorSmile - ���� ���.

void DrawSolntse (int x, int y, int r, int ConturSun, int BaseColorSun, int ConturGlaz, int ColorZrachka, int ColorGlaz, int ColorNosa, int ColorLuchey, int ColorSmile);

//! ������ �������, ������������� ����� �������������.
//! @param x1 - ���������� x1 �����, ���������� ����� ������ ����� � ��������������.
//! @param y1 - ���������� y1 �����, ���������� ����� ������ ����� � ��������������.
//! @param x2 - ���������� x2 �����, ���������� ����� ������ ������ � ��������������.
//! @param y2 - ���������� y2 �����, ���������� ����� ������ ������ � ��������������.
//! @param ColorPolya - ���� ����.
//! @param ConturPolya - ���� ������� ����.

void DrawPole    (int x1, int y1, int x2, int y2, int ColorPolya,   int ConturPolya);

//! ������ ������ ��� ������ �������.
//! @param x1 - ���������� x1 �����, ���������� ����� ������ ����� � ��������������, �� ������ �������� �������� ������.
//! @param y1 - ���������� y1 �����, ���������� ����� ������ ����� � ��������������, �� ������ �������� �������� ������.
//! @param x2 - ���������� x2 �����, ���������� ����� ������ ������ � ��������������, �� ������ �������� �������� ������.
//! @param y2 - ���������� y2 �����, ���������� ����� ������ ������ � ��������������, �� ������ �������� �������� ������.
//! @param ColorLake - ���� �����.
//! @param ConturLake - ���� ������� �����.
//! @param Zoom - ����� �����, ����������� �� ������� ���������� ���������� ��������������, �� ������ �������� �������� ������.

void DrawLake    (int x1, int y1, int x2, int y2, int ColorLake,    int ConturLake, int Zoom);

//! ������ ����� �����. ���������� ������ ����� ���������, ������� ���������� i ������ ����� while.
//! @param x1 - ���������� x1 �����, �������� � �������������, �� ������ �������� �������� �����.
//! @param y1 - ���������� y1 �����, �������� � �������������, �� ������ �������� �������� �����.
//! @param x2 - ���������� x2 �����, �������� � �������������, �� ������ �������� �������� �����.
//! @param y2 - ���������� y2 �����, �������� � �������������, �� ������ �������� �������� �����.
//! @param ugol1 - ���� ����� �� � ��������� ������ ��������������.
//! @param ugol2 - ���� ���� �������.
//! @param ConturRain - ���� ������� �����.
//! @param ColorRain - ���� �����.

void DrawRain    (int x1, int y1, int x2, int y2, int ugol1, int ugol2, int ConturRain, int ColorRain);

//! ��� ��� ����� �����, �� � ���� ���� �����. ��� ������� ���������� �����������:
//! @param x1 - ���������� x1 �����, ���������� ����� ������ ����� � ��������������, �� ������ �������� �������� ������.
//! @param y1 - ���������� y1 �����, ���������� ����� ������ ����� � ��������������, �� ������ �������� �������� ������.
//! @param x2 - ���������� x2 �����, ���������� ����� ������ ������ � ��������������, �� ������ �������� �������� ������.
//! @param y2 - ���������� y2 �����, ���������� ����� ������ ������ � ��������������, �� ������ �������� �������� ������.
//! @param ColorEye - ���� ���� �����.
//! @param DistanceBetween - ���������� ����� ������� �����.

void LakeEye     (int x1, int y1, int x2, int y2, int ColorEye, int DistanceBetween);

void DrawOblako (int x, int y, int r)
{
    txSetColor (TX_GRAY);
    txSetFillColor (TX_GRAY);

    for (int i = 0; i < 7; i++)
    {
        txCircle (x + r*i, y + r*(i%2), r);
    }
}

void DrawSolntse (int x, int y, int r, int ConturSun, int BaseColorSun, int ConturGlaz, int ColorZrachka, int ColorGlaz, int ColorNosa, int ColorLuchey, int ColorSmile)
{
    txSetColor (ConturSun);
    txSetFillColor (BaseColorSun);

    txCircle (x, y, r);

    txSetColor (ConturGlaz);
    txSetFillColor (ColorZrachka);

    txEllipse (x - 34, y - 20, x - 20, y + 3);
    txEllipse (x - 14, y - 20, x     , y + 3);

    txSetFillColor (ColorGlaz);
    txEllipse (x - 34, y - 20, x - 25, y);
    txEllipse (x - 14, y - 20, x - 5 , y);

    txSetFillColor (ColorNosa);
    txCircle (x - 22, y + 11, r / 5);

    txSetColor (ColorLuchey, 3);
    txSetFillColor (TX_TRANSPARENT);
    txLine (1313,  33, 1335,  10);
    txLine (1328,  50, 1335,  45);
    txLine (1335,  78, 1344,  78);
    txLine (1327, 102, 1337, 106);
    txLine (1315, 121, 1343, 149);
    txLine (1298, 124, 1341, 201);
    txLine (1278, 138, 1278, 201);
    txLine (1248, 140, 1212, 227);
    txLine (1222, 124, 1171, 170);
    txLine (1207,  99, 1118, 133);
    txLine (1206,  71, 1124,  71);
    txLine (1211,  49, 1151,  25);
    txLine (1225,  33, 1203,  11);
    txLine (1252,  19, 1248,   9);
    txLine (1277,  17, 1277,   7);
    txLine (1298,  21, 1302,  13);

    txSetColor (TX_BLACK, 1);
    txSetFillColor (ColorSmile);
    POINT point [3] = {{1253, 101}, {1259, 104}, {1266, 91}};
    txPolygon (point, 3);

}

void DrawPole (int x1, int y1, int x2, int y2, int ConturPolya, int ColorPolya)
{
    txSetColor (ConturPolya, 1);
    txSetFillColor (ColorPolya);

    txRectangle (x1, y1, x2, y2);
}

void DrawLake (int x1, int y1, int x2, int y2, int ConturLake, int ColorLake, int Zoom)
{
    txSetColor (ConturLake, 1);
    txSetFillColor (ColorLake);

    txEllipse (x1 - Zoom , y1 - Zoom, x2 + Zoom, y2 + Zoom);
    LakeEye (602, 346, 641, 402, TX_LIGHTBLUE, 110);

    txSetColor (SMILE_COLOR, 3);

    txLine (620, 422, 720, 422);
}

void DrawRain (int x1, int y1, int x2, int y2, int ugol1, int ugol2, int ConturRain, int ColorRain)
{
    txSetColor (ConturRain, 1);
    txSetFillColor (ColorRain);

    int k = 30, i = 0;
    while (y1 + i < 500)
        {
        for (int j = 0; j < 25; j++)
            {
                txPie (x1 + k * j, y1 + i, x2 + k * j, y2 + i, ugol2, ugol1);
            }
        txSleep (100);
        i += 30;
        }

}

void LakeEye (int x1, int y1, int x2, int y2, int ColorEye, int DistanceBetween)
{
    txSetColor (TX_BLACK, 1);
    txSetFillColor (TX_WHITE);

    for (int i = 0; i < 2; i++)
    {
        txEllipse (x1 + DistanceBetween * i, y1, x2 + DistanceBetween * i, y2);
    }

    txSetFillColor (ColorEye);

    {
        for (int i = 0; i < 2; i++)
        {
            txCircle (x2 - 18 + DistanceBetween * i, y2 - 18, 10);
        }
    }

}
