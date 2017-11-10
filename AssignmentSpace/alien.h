#include <string>
#include <QDialog>
#include <QPainter>
#include <QPixmap>

#ifndef ALIEN_H
#define ALIEN_H

class Alien : public QDialog(parent)
{
    Q_OBJECT
    QPixmap alien_sprite;

public:
    Alien(std::string file_name = "",int dx=0, int dy=0);

private:
    int alien_hit_score=1;
    std::string alien_image="alien.png";
};

#endif // ALIEN_H
