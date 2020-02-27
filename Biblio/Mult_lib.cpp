//! @file Multi_lib.cpp
//! @mainpage Главная страница
//! Описания функций создания облачков, живых солнца и озера находятся в меню <b>Файлы</b>.
//! <p>Пример их использования можно посмотреть в пункте ниже.
//! @see https://github.com/Yuletsky/Multik_Help/
//! @author Sidorina Y.A.
//! @date 27.02.2020


#include "TXLib.h"

//! Константное значение цвета неба.

const COLORREF   SKY_COLOR = RGB (134, 210, 230);

//! Константное значение цвета солнца.

const COLORREF   SUN_COLOR = RGB (255, 255,   0);

//! Константное значение цвета полюшка.

const COLORREF FIELD_COLOR = RGB ( 56, 236,  47);

//! Константное значение цвета, подходящего для рисования губ.

const COLORREF SMILE_COLOR = RGB (235,  20,  47);

//! Константное значение цвета воды.

const COLORREF WATER_COLOR = RGB (128, 255, 255);


//! Рисует облако, состоящее из 7 окружностей.
//! @param x - Координата x для самого левого круга, входящего в состав облака.
//! @param y - Координата y для самого левого круга, входящего в состав облака.
//! @param r - Радиус самого левого круга, входящего в состав облака.
//! @warning Радиус должен быть одинаковым для всех окружностей, входящих в состав облака.

void DrawOblako  (int x, int y, int r);

//! Рисует солнце, которое выглядит как разумное существо.
//! Глаза и нос создаются на основе координат расположения солнца.
//! Лучи и рот привязаны к определенным значениям координат, поэтому стоит дописать функцию, используя для них координаты солнца.
//! @param x - Координата x для лица солнца.
//! @param y - Координата y для лица солнца.
//! @param r - Радиус солнца.
//! @param ConturSun - Цвет контура солнца.
//! @param BaseColorSun - Базовый цвет солнца.
//! @param ConturGlaz - Цвет контура глаз.
//! @param ColorZrachka - Цвет зрачка.
//! @param ColorGlaz - Цвет глаз.
//! @param ColorNosa - Цвет носа.
//! @param ColorLuchey - Цвет лучей.
//! @param ColorSmile - Цвет губ.

void DrawSolntse (int x, int y, int r, int ConturSun, int BaseColorSun, int ConturGlaz, int ColorZrachka, int ColorGlaz, int ColorNosa, int ColorLuchey, int ColorSmile);

//! Рисует полюшко, представлющее собой прямоугольник.
//! @param x1 - Координата x1 точки, являющейся самой верхей левой в прямоугольнике.
//! @param y1 - Координата y1 точки, являющейся самой верхей левой в прямоугольнике.
//! @param x2 - Координата x2 точки, являющейся самой нижней правой в прямоугольнике.
//! @param y2 - Координата y2 точки, являющейся самой нижней правой в прямоугольнике.
//! @param ColorPolya - Цвет поля.
//! @param ConturPolya - Цвет контура поля.

void DrawPole    (int x1, int y1, int x2, int y2, int ColorPolya,   int ConturPolya);

//! Рисует озерцо при помощи эллипса.
//! @param x1 - Координата x1 точки, являющейся самой верхей левой в прямоугольнике, на основе которого строится эллипс.
//! @param y1 - Координата y1 точки, являющейся самой верхей левой в прямоугольнике, на основе которого строится эллипс.
//! @param x2 - Координата x2 точки, являющейся самой нижней правой в прямоугольнике, на основе которого строится эллипс.
//! @param y2 - Координата y2 точки, являющейся самой нижней правой в прямоугольнике, на основе которого строится эллипс.
//! @param ColorLake - Цвет озера.
//! @param ConturLake - Цвет контура озера.
//! @param Zoom - Целое число, указывающее на сколько увеличатся координаты прямоугольника, на основе которого строится эллипс.

void DrawLake    (int x1, int y1, int x2, int y2, int ColorLake,    int ConturLake, int Zoom);

//! Рисует капли дождя. Количество капель можно увеличить, изменив переменную i внутри цикла while.
//! @param x1 - Координата x1 точки, входящей в многоугольник, на основе которого строится капля.
//! @param y1 - Координата y1 точки, входящей в многоугольник, на основе которого строится капля.
//! @param x2 - Координата x2 точки, входящей в многоугольник, на основе которого строится капля.
//! @param y2 - Координата y2 точки, входящей в многоугольник, на основе которого строится капля.
//! @param ugol1 - Угол между ОХ и начальной точкой многоугольника.
//! @param ugol2 - Угол дуги эллипса.
//! @param ConturRain - Цвет контура капли.
//! @param ColorRain - Цвет капли.

void DrawRain    (int x1, int y1, int x2, int y2, int ugol1, int ugol2, int ConturRain, int ColorRain);

//! Так как озеро живое, то у него есть глаза. Оно описано следующими переменными:
//! @param x1 - Координата x1 точки, являющейся самой верхей левой в прямоугольнике, на основе которого строится эллипс.
//! @param y1 - Координата y1 точки, являющейся самой верхей левой в прямоугольнике, на основе которого строится эллипс.
//! @param x2 - Координата x2 точки, являющейся самой нижней правой в прямоугольнике, на основе которого строится эллипс.
//! @param y2 - Координата y2 точки, являющейся самой нижней правой в прямоугольнике, на основе которого строится эллипс.
//! @param ColorEye - Цвет глаз озера.
//! @param DistanceBetween - Расстояние между глазами озера.

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
