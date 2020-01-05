#ifndef Nice-like_hpp
#define Nice-like_hpp

#include <ncurses.h>
#include <vector>
#include <string>
#include "shared.hpp"

#define KEY_ESC 27
#define KEY_ENTER '\n'

using namespace std;

class nice: public Backend
{
    private:
        vector<vector<BindingString>> menu;
        virtual void draw_main_menu(int h);
        virtual void draw_submenu(int h, int n);
        virtual string draw_box(string str);
        virtual void main_menu_controler();
        virtual void submenu_controler(int n);
        virtual void quit();
        virtual void help();
    public:
        nice()
        {
            bind(".File.Quit", [&](){this->quit();}, "Close program");
            bind(".File.Help", [&](){this->help();}, "Show functions descriptions");
        }
        ~nice()
        {
            delete tool;
            endwin();
        }
        Tool* tool;
        virtual void bind(std::string str, std::function<void()> func, std::string help);
        virtual void start();
};

#endif
