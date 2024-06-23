#ifndef PRIZEIMAGE_H
#define PRIZEIMAGE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QImage>

const QString MONEY_IMAGE = ":/img/images/Деньги.jpg";
const QString COFFECUTTER_IMAGE = ":/img/images/Кофемолка.jpg";
const QString IRON_IMAGE = ":/img/images/Утюг.jpg";
const QString MULTYCOOKER_IMAGE = ":/img/images/Мультиварка.jpg";
const QString MICROWAVE_IMAGE = ":/img/images/Микроволновка.jpg";
const QString TV_IMAGE = ":/img/images/Телевизор.webp";
const QString WASHING_MACHINE_IMAGE = ":/img/images/Стиралка.jpeg";
const QString COMPUTER_IMAGE = ":/img/images/Компьютер.jpeg";
const QString AUTOMOBILE_IMAGE = ":/img/images/Automobile.jpeg";
const QString DELTAPLAN_IMAGE = ":/img/images/Суперприз.webp";

class PrizeImage : public QGraphicsItem
{
private:
    QImage _prize;
    QRectF targetRect = QRectF(0, 0, 100, 100);

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

public:
    PrizeImage(int numberOfPrize);
};

#endif // PRIZEIMAGE_H
