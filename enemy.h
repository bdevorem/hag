#ifndef ENEMY_H
#define ENEMY_H
    #include <ncurses.h>
    #include "list.h"
    typedef struct enemy {
        int type;
        char pic;
        int hp;
        int y;
        int x;
        int sight_range;
        int strength;
        node_t *node;
    } enemy_t;
    enemy_t *enemy_add(list_t *floor_enemy_list, int type, char pic, int hp, int y, int x, int sight_range, int strength);
    enemy_t *enemy_at(int y, int x);
    void enemy_set(list_t *list);
    void enemy_hurt(enemy_t *e, int d);
    void enemy_draw(WINDOW *win, int y, int x);
    void enemy_clear();
    void enemy_turn_driver(WINDOW *win, int y, int x);
    void enemy_take_turn(enemy_t *e, WINDOW *win, int player_y, int player_x);
#endif
