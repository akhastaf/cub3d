#include "cub3d.h"



int     main()
{  
    t_game game;

    game.setting.m_ptr = mlx_init();
    game.setting.title = "Cub3d";
    game.setting.r.x = 1920;
    game.setting.r.y = 1024;
    
    game.setting.w_ptr = mlx_new_window(game.setting.m_ptr, game.setting.r.x, game.setting.r.y, game.setting.title);
    game.data.img = mlx_new_image(game.setting.m_ptr, game.setting.r.x,  game.setting.r.y);
    game.data.addr = mlx_get_data_addr(game.data.img, &game.data.bits_per_pixel, &game.data.line_length, &game.data.endian);
    
    setup(&game);
    mlx_hook(game.setting.w_ptr, EVENT_KEYDOWN, 0, key_down, &game);
    mlx_hook(game.setting.w_ptr, EVENT_KEYUP, 0, key_up, &game);
    mlx_hook(game.setting.w_ptr, EVENT_EXIT, 0, exit_game, &game);
    mlx_loop_hook(game.setting.m_ptr, &main_loop, &game);

    
    mlx_loop(game.setting.m_ptr);
    return (0);
}