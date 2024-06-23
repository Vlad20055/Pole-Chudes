#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <QGraphicsItem>
#include <QPainter>
#include <QImage>

const QString BACKGROUND_IMAGE = ":/img/images/Backgroung.jpg";
const QString BACKGROUND_FOR_LETTERS_IMAGE = ":/img/images/BackgroundForLetters.webp";
const QString BACKGROUND_FOR_MENU_IMAGE = ":/img/images/BackgroundForMenu.jpg";
const QString BACKGROUND_FOR_GAME_IMAGE = ":/img/images/BackgroundForGame.jpeg";

class Background : public QGraphicsItem
{
private:
    QImage background;
    QRectF targetRectForBackground;

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

public:
    Background(int forWhat);
};

#endif // BACKGROUND_H
