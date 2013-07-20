#ifndef TILE_H
#define TILE_H

#include <QLabel>
#include <QWidget>
#include <QPainter>
#include <QPalette>
#include <QBrush>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QDebug>


class Tile : public QLabel
{
public:
    Tile(int row, int col);
    void setSnake(bool);
    void setFood(bool);
    int getRowPosition();
    int getColPosition();
    bool isSnake();
    bool isFood();

private:
    int tile_row;
    int tile_col;
    bool snake;
    bool food;

signals:
    void signalGotFood();

};

#endif // TILE_H
