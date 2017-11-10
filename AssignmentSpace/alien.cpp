#include "alien.h"

Alien::Alien(std::string file_name,int dx, int dy): QDialog(parent)
{
    alien_sprite.load(file_name);

    QPainter painter();
    painter.drawPixmap(dx, dy, alien_sprite);
}
