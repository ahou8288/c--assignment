#include "gameframe.h"
#include "player.h"
#include "ui_gameframe.h"
#include <iostream>
#include <fstream>
#include <string>

int toInteger(std::__cxx11::string source) {
    try
    {
       return std::stoi(source);
    }
    catch(...)
    {
       std::cout << "Exception caught. Invalid config options. String inside integer field. " << std::endl;
    }
}

GameFrame::GameFrame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameFrame)
{
    const int fixed_width_size = 14;

    // Store the fields in the text file in memory before the classes are initialised.
    std::string spaceship_size;
    std::string alien_image;
    int spaceship_x;
    int window_width;
    int window_height;
    int alien_left_x;
    int alien_right_x;
    int alien_top_y;
    int alien_bottom_y;
    int alien_num_rows;
    int alien_num_cols;
    int hit_score;

    // loop though each line of the config file
    // game is stored as fixed width labels followed by data.
    std::ifstream file("config.txt");
    std::string config_line;
    while (std::getline(file, config_line)) {
        if (config_line.size()>15) // Only look at lines which have values/data
        {
            // Seperate out the labels and values
            std::string item = config_line.substr(0,fixed_width_size);
            std::string value = config_line.substr(fixed_width_size+1,config_line.size());

            if (item == "spaceship_size") spaceship_size = value;
            if (item == "spaceship_x   ") alien_image = value;
            try
            {
                if (item == "window_width  ") window_width = std::stoi(value);
                if (item == "window_height ") window_height = std::stoi(value);
                if (item == "alien_left_x  ") alien_left_x = std::stoi(value);
                if (item == "alien_right_x ") alien_right_x = std::stoi(value);
                if (item == "alien_top_y   ") alien_top_y = std::stoi(value);
                if (item == "alien_bottom_y") alien_bottom_y = std::stoi(value);
                if (item == "alien_num_rows") alien_num_rows = std::stoi(value);
                if (item == "alien_num_cols") alien_num_cols = std::stoi(value);
                if (item == "spaceship_size") hit_score = std::stoi(value);
            }
            catch(...)
            {
               std::cout << "Exception caught. Invalid config options. String inside integer field. " << std::endl;
            }
        }
    }


    // Set screen style
    setStyleSheet(back_colour);
    this->resize(window_width, window_height);
    ui->setupUi(this);

    // Initialise screen objects.
    Player* p = Player::getInstance();
}

GameFrame::~GameFrame()
{
    delete ui;
}
