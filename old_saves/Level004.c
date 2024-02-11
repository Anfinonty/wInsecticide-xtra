
#define GROUND_NUM 82
#define ENEMY_NUM 5
#define MAP_WIDTH 1120
#define MAP_HEIGHT 1120
double saved_ground_x1[GROUND_NUM]={761,721,656,560,489,442,436,483,753,712,627,514,453,433,433,472,496,562,472,632,659,712,632,475,475,482,705,593,641,567,509,522,533,674,685,627,707,515,515,433,443,432,436,478,480,480,721,762,474,476,481,513,513,561,536,520,675,713,472,472,530,530,631,631,631,687,473,459,739,803,803,809,817,864,863,870,912,926,920,959,959,475};
double saved_ground_y1[GROUND_NUM]={650,716,764,764,726,657,586,442,489,422,388,404,465,524,525,529,485,485,527,523,484,485,524,574,573,666,669,709,646,644,677,485,509,485,509,388,457,404,404,524,660,525,585,714,717,717,717,651,573,574,667,676,676,645,510,485,485,483,529,529,510,510,523,523,523,511,518,576,371,266,266,298,330,257,257,293,251,249,319,282,282,706};
double saved_ground_x2[GROUND_NUM]={771,762,721,656,559,489,443,712,771,753,712,627,515,454,437,496,563,585,584,658,712,731,730,728,483,592,727,706,693,642,567,534,581,686,724,711,755,627,717,452,480,438,479,559,717,720,761,772,727,483,592,592,566,642,563,567,713,725,497,539,539,579,656,730,674,731,481,520,804,815,846,847,856,878,905,905,948,941,959,1008,1004,507};
double saved_ground_y2[GROUND_NUM]={582,650,716,765,764,725,659,423,583,490,423,389,403,466,586,483,484,526,527,483,486,526,524,576,666,709,577,670,675,647,644,510,514,509,512,422,495,389,429,467,714,586,713,765,719,719,650,583,576,667,708,708,646,647,486,484,484,510,482,527,528,513,484,524,488,525,444,571,332,329,260,288,320,321,266,268,245,317,312,247,314,737};
double saved_ground_x3[GROUND_NUM]={1,15,15,15,15,15,15,481,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,754,720,717,474,479,439,480,480,658,656,711,756,756,705,707,710,693,693,694,579,533,687,686,521,522,585,585,677,683,686,724,491,482,15,15,15,15,15,15,15,15,15,15,15,15,15,482};
double saved_ground_y3[GROUND_NUM]={1,15,15,15,15,15,15,717,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,494,718,429,446,443,587,442,441,763,765,425,493,493,669,670,670,674,674,674,513,512,509,511,485,484,526,526,485,511,515,510,491,530,15,15,15,15,15,15,15,15,15,15,15,15,15,667};
bool saved_ground_is_ghost[GROUND_NUM]={0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
int saved_ground_color[GROUND_NUM]={0,0,0,0,0,0,0,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,14,14,14,14,14,14,14,14,14,14,14,14,4,4,4,12,12,12,0,0,0,0,15,15,15,15,15,15,15,15,14,14,0,0,0,0,0,0,0,0,0,0,0,0,0,14};
int saved_ground_type[GROUND_NUM]={0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,3};
char *saved_ground_text[GROUND_NUM]={"","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""};
int saved_enemy_type[ENEMY_NUM]={0,0,0,0,0};
double saved_enemy_x[ENEMY_NUM]={710,473,531,693,609};
double saved_enemy_y[ENEMY_NUM]={367,374,300,297,289};
double saved_enemy_type_speed[ENEMY_TYPE_NUM]={0.1,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0};
double saved_enemy_type_bullet_speed[ENEMY_TYPE_NUM]={1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0};
int saved_enemy_type_species[ENEMY_TYPE_NUM]={0,0,0,0,0,0,0,0,0,0};
int saved_enemy_type_follow_range[ENEMY_TYPE_NUM]={100,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_unchase_range[ENEMY_TYPE_NUM]={1,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_chase_range[ENEMY_TYPE_NUM]={0,100,100,100,100,100,100,100,100,100};
int saved_enemy_type_color[ENEMY_TYPE_NUM]={12,0,0,0,0,0,0,0,0,0};
int saved_enemy_type_speed_multiplier[ENEMY_TYPE_NUM]={1,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_health[ENEMY_TYPE_NUM]={1,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_shoot_at_player_range[ENEMY_TYPE_NUM]={100,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_aim_rand[ENEMY_TYPE_NUM]={640,0,0,0,0,0,0,0,0,0};
int saved_enemy_type_bullet_cooldown[ENEMY_TYPE_NUM]={1,500,500,500,500,500,500,500,500,500};
int saved_enemy_type_bullet_fire_cooldown[ENEMY_TYPE_NUM]={0,0,0,0,0,0,0,0,0,0};
int saved_enemy_type_bullet_fire_at_once[ENEMY_TYPE_NUM]={1,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_bullet_length[ENEMY_TYPE_NUM]={1,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_bullet_damage[ENEMY_TYPE_NUM]={1,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_bullet_speed_multiplier[ENEMY_TYPE_NUM]={1,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_bullet_range[ENEMY_TYPE_NUM]={100,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_bullet_color[ENEMY_TYPE_NUM]={4,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_bullet_graphics_type[ENEMY_TYPE_NUM]={3,0,0,0,0,0,0,0,0,0};
int saved_enemy_type_snd_dur[ENEMY_TYPE_NUM]={1,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_snd_pitch[ENEMY_TYPE_NUM]={1,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_snd_rand[ENEMY_TYPE_NUM]={1,1,1,1,1,1,1,1,1,1};
int saved_enemy_type_death_snd_dur[ENEMY_TYPE_NUM]={30,30,30,30,30,30,30,30,30,30};
int saved_enemy_type_death_snd_pitch[ENEMY_TYPE_NUM]={0,0,0,0,0,0,0,0,0,0};
int saved_enemy_type_death_snd_rand[ENEMY_TYPE_NUM]={126,126,126,126,126,126,126,126,126,126};
int saved_enemy_type_time_breaker_rare[ENEMY_TYPE_NUM]={0,0,0,0,0,0,0,0,0,0};
int saved_enemy_type_time_breaker_length[ENEMY_TYPE_NUM]={0,0,0,0,0,0,0,0,0,0};
bool saved_enemy_type_time_breaker_immune[ENEMY_TYPE_NUM]={0,0,0,0,0,0,0,0,0,0};
double saved_player_x=593,saved_player_y=376;
int map_background=0;
int custom_map_background_color=LTBLUE;
bool is_inverted=FALSE;
int gamemode=0;
double saved_fb_x1=0.0000,saved_fb_y1=0.0000,saved_fb_x2=0.0000,saved_fb_y2=0.0000;
char *goal_text="";
double version=1.501;
