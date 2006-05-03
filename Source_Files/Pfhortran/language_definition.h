#ifndef LUA_ACCESSING
// Supersedes file "Pfhortran Language Definition".
// Translations of names into internal numbers (can be symbolic constants)
// Format: {"Name", Number}, [C syntax for array member that's a struct]

/* jkvw 07/03/03 - added mnemonics for balls and recharger types
 *
 * jkvw 07/07/03 - Mnemonic naming conventions are being naughty - note how "shotgun" was defined as 0x16 then later as 0x17,
 *	resulting in the shotgun item type mnemonic being unusable in scripts.  This version should be more usable and consistent.
 *	Old names are retained for backwards compatability.
 *
 * Falko 02/21/05 - added mnemonics for polygon types and powerups
 */

{"Camera_Move", Camera_Move},
{"Camera_Look", Camera_Look},
{"Wait_Ticks", Wait_Ticks},
{"Inflict_Damage", Inflict_Damage},
{"Jump", Jump},
{"Enable_Player", Enable_Player},
{"Disable_Player", Disable_Player},
{"Script_End", Script_End},
{"Hide_Interface", Hide_Interface},
{"Show_Interface", Show_Interface},
{"Set_Tag_State", Set_Tag_State},
{"Get_Tag_State", Get_Tag_State},
{"Def", Define},
{"Define", Define},
{"Add", sAdd},
{"Subtract", sSubtract},
{"If_Equal", If_Equal},
{"If_=", If_Equal},
{"Set", Set},
{"Call", Call},
{"Return", Return},
{"If_Greater", If_Greater},
{"If_>", If_Greater},
{"If_Less", If_Less},
{"If_<", If_Less},
{"If_!Equal", If_Not_Equal},
{"If_Not_Equal", If_Not_Equal},
{"If_!=", If_Not_Equal},
{"Get_Life", Get_Life},
{"Set_Life", Set_Life},
{"Get_Oxygen", Get_Oxygen},
{"Set_Oxygen", Set_Oxygen},
{"End", End},
{"Get_My_Value", Get_My_Value},
{"Add_Item", Add_Item},
{"Select_Weapon", Select_Weapon},
{"Block_Start", Block_Start},
{"Block_End", Block_End},
{"Init_Cameras", Init_Cameras},
{"Select_Camera", Select_Camera},
{"Set_Camera_Poly", Set_Camera_Poly},
{"Set_Camera_Pos", Set_Camera_Pos},
{"Set_Camera_YP", Set_Camera_YP},
{"Activate_Camera", Activate_Camera},
{"Use_Camera", Use_Camera},
{"Init_Paths", Init_Paths},
{"New_Path", New_Path},
{"Dispose_Path", Dispose_Path},
{"Select_Path", Select_Path},
{"Set_Path_Move_Speed", Set_Path_Move_Speed},
{"Select_Point", Select_Point},
{"Set_Point_Poly", Set_Point_Poly},
{"Set_Point_Pos", Set_Point_Pos},
{"Set_Point_YP", Set_Point_YP},
{"Start_Camera_On_Path", Start_Camera_On_Path},
{"Set_Path_Roll_Speed", Set_Path_Roll_Speed},
{"Wait_For_Path", Wait_For_Path},
{"Change_Soundtrack", Change_Soundtrack},
{"Set_Fog_Depth", Set_Fog_Depth},
{"Set_Fog_Color", Set_Fog_Color},
{"Get_Fog_Depth", Get_Fog_Depth},
{"Get_Fog_Color", Get_Fog_Color},
{"Teleport_Player", Teleport_Player},
{"Monster_New", Monster_New},
{"Monster_Sleep", Monster_Sleep},
{"Monster_Hurt", Monster_Hurt},
{"Monster_Attack", Monster_Attack},
{"Monster_Move", Monster_Move},
{"Monster_Select", Monster_Select},
{"Monster_Get_Immunity", Monster_Get_Immunity},
{"Monster_Set_Immunity", Monster_Set_Immunity},
{"Monster_Get_Weakness", Monster_Get_Weakness},
{"Monster_Set_Weakness", Monster_Set_Weakness},
{"Monster_Get_Friend", Monster_Get_Friend},
{"Monster_Set_Friend", Monster_Set_Friend},
{"Monster_Get_Enemy", Monster_Get_Enemy},
{"Monster_Set_Enemy", Monster_Set_Enemy},
{"Monster_Get_Item", Monster_Get_Item},
{"Monster_Set_Item", Monster_Set_Item},
{"Monster_Get_Nuke", Monster_Get_Nuke},
{"Monster_Set_Nuke", Monster_Set_Nuke},
{"Set_UnderFog_Depth", Set_UnderFog_Depth},
{"Set_UnderFog_Color", Set_UnderFog_Color},
{"Get_UnderFog_Depth", Get_UnderFog_Depth},
{"Get_UnderFog_Color", Get_UnderFog_Color},
{"Get_Random", Get_Random},
{"Set_Platform_State", Set_Platform_State},
{"Get_Platform_State", Get_Platform_State},
{"Set_Light_State", Set_Light_State},
{"Get_Light_State", Get_Light_State},
{"Get_Player_Poly", Get_Player_Poly},
{"Get_Fog_Presence", Get_Fog_Presence},
{"Set_Fog_Presence", Set_Fog_Presence},
{"Get_UnderFog_Presence", Get_UnderFog_Presence},
{"Set_UnderFog_Presence", Set_UnderFog_Presence},
{"Remove_Item", Remove_Item},
{"Player_Control", Player_Control},
{"Play_Sound",Play_Sound},
{"Debug_Message",Debug_Message},
{"Monster_Get_Action",Monster_Get_Action},
{"Monster_Get_Mode",Monster_Get_Mode},
{"Monster_Get_Vitality",Monster_Get_Vitality},
{"Monster_Set_Vitality",Monster_Set_Vitality},
{"Not",Not},
{"!",Not},
{"Start_Fade", Start_Fade},
{"Get_Platform_Player_Control", Get_Platform_Player_Control},
{"Set_Platform_Player_Control", Set_Platform_Player_Control},
{"Get_Platform_Monster_Control", Get_Platform_Monster_Control},
{"Set_Platform_Monster_Control", Set_Platform_Monster_Control},
{"Get_Platform_Speed", Get_Platform_Speed},
{"Set_Platform_Speed", Set_Platform_Speed},
{"Get_Monster_Poly", Get_Monster_Poly},
{"Timer_Start", Timer_Start},
{"Timer_Get", Timer_Get},
{"Timer_Stop", Timer_Stop},
{"Display_Message", Display_Message},
{"Get_Motion_Sensor_State", Get_Motion_Sensor_State},
{"Set_Motion_Sensor_State", Set_Motion_Sensor_State},
{"TRUE", 0x1},
{"FALSE", 0x0},
#endif


// Items

{"_item_knife", 0x0},
{"_item_fist", 0x0},
{"_item_magnum", 0x01},
{"_item_magnum_magazine", 0x02},
{"_item_plasma_pistol", 0x03},
{"_item_plasma_magazine", 0x04},
{"_item_assault_rifle", 0x05},
{"_item_assault_rifle_magazine", 0x06},
{"_item_assault_grenade_magazine", 0x07},
{"_item_missile_launcher", 0x08},
{"_item_missile_launcher_magazine", 0x09},
{"_item_invisibility_powerup", 0x0A},
{"_item_invincibility_powerup", 0x0B},
{"_item_infravision_powerup", 0x0C},
{"_item_alien_weapon", 0x0D},
{"_item_alien_weapon_magazine", 0x0E},
{"_item_flamethrower", 0x0F},
{"_item_flamethrower_canister", 0x10},
{"_item_extravision_powerup", 0x11},
{"_item_oxygen_powerup", 0x12},
{"_item_energy_powerup", 0x13},
{"_item_double_energy_powerup", 0x14},
{"_item_triple_energy_powerup", 0x15},
{"_item_shotgun", 0x16},
{"_item_shotgun_magazine", 0x17},
{"_item_spht_door_key", 0x18},
{"_item_uplink_chip", 0x19},
{"_item_light_blue_ball", 0x1A},
{"_item_red_ball", 0x1B},
{"_item_violet_ball", 0x1C},
{"_item_yellow_ball", 0x1D},
{"_item_brown_ball", 0x1E},
{"_item_orange_ball", 0x1F},
{"_item_blue_ball", 0x20},
{"_item_green_ball", 0x21},
{"_item_smg", 0x22},
{"_item_smg_ammo", 0x23},

{"knife", 0x0},
{"fist", 0x0},
{"magnum", 0x01},
{"magnum_magazine", 0x02},
{"plasma_pistol", 0x03},
{"plasma_magazine", 0x04},
{"assault_rifle", 0x05},
{"assault_rifle_magazine", 0x06},
{"assault_grenade_magazine", 0x07},
{"missile_launcher", 0x08},
{"missile_launcher_magazine", 0x09},
{"invisibility_powerup", 0x0A},
{"invincibility_powerup", 0x0B},
{"infravision_powerup", 0x0C},
{"alien_shotgun", 0x0D},
{"alien_shotgun_magazine", 0x0E},
{"flamethrower", 0x0F},
{"flamethrower_canister", 0x10},
{"extravision_powerup", 0x11},
{"oxygen_powerup", 0x12},
{"energy_powerup", 0x13},
{"double_energy_powerup", 0x14},
{"triple_energy_powerup", 0x15},
// First appearance of "shotgun" removed
{"shotgun_magazine", 0x17},
{"spht_door_key", 0x18},
{"uplink_chip", 0x19},
{"light_blue_ball", 0x1A},
{"red_ball", 0x1B},
{"violet_ball", 0x1C},
{"yellow_ball", 0x1D},
{"brown_ball", 0x1E},
{"orange_ball", 0x1F},
{"blue_ball", 0x20},
{"green_ball", 0x21},
{"smg", 0x22},
{"smg_ammo", 0x23},


// jkvw: I'm not sure how this is intended to be used, so I'm leaving it alone
{"default_camera", 0x0},


// monsters

{"_monster_palyer", 0x00},
{"_monster_minor_tick", 0x01},
{"_monster_major_tick", 0x02},
{"_monster_kamikaze_tick", 0x03},
{"_monster_minor_compiler", 0x04},
{"_monster_major_compiler", 0x05},
{"_monster_minor_invisible_compiler", 0x06},
{"_monster_major_invisible_compiler", 0x07},
{"_monster_minor_fighter", 0x08},
{"_monster_major_fighter", 0x09},
{"_monster_minor_projectile_fighter", 0x0A},
{"_monster_major_projectile_fighter", 0x0B},
{"_monster_green_bob", 0x0C},
{"_monster_blue_bob", 0x0D},
{"_monster_security_bob", 0x0E},
{"_monster_explodabob", 0x0F},
{"_monster_minor_drone", 0x10},
{"_monster_major_drone", 0x11},
{"_monster_big_minor_drone", 0x12},
{"_monster_big_major_drone", 0x13},
{"_monster_possessed_drone", 0x14},
{"_monster_minor_cyborg", 0x15},
{"_monster_major_cyborg", 0x16},
{"_monster_minor_flame_cyborg", 0x17},
{"_monster_major_flame_cyborg", 0x18},
{"_monster_minor_enforcer", 0x19},
{"_monster_major_enforcer", 0x1A},
{"_monster_minor_hunter", 0x1B},
{"_monster_major_hunter", 0x1C},
{"_monster_minor_trooper", 0x1D},
{"_monster_major_trooper", 0x1E},
{"_monster_mega_cyborg", 0x1F},
{"_monster_mega_hunter", 0x20},
{"_monster_sewage_yeti", 0x21},
{"_monster_water_yeti", 0x22},
{"_monster_lava_yeti", 0x23},
{"_monster_minor_defender", 0x24},
{"_monster_major_defender", 0x25},
{"_monster_minor_juggernaut", 0x26},
{"_monster_major_juggernaut", 0x27},
{"_monster_tiny_pfhor", 0x28},
{"_monster_tiny_bob", 0x29},
{"_monster_tiny_yeti", 0x2A},
{"_monster_green_vacbob", 0x2B},
{"_monster_blue_vacbob", 0x2C},
{"_monster_security_vacbob", 0x2D},
{"_monster_explodavacbob", 0x2E},

{"minor_tick", 0x01},
{"major_tick", 0x02},
{"kamikaze_tick", 0x03},
{"minor_compiler", 0x04},
{"major_compiler", 0x05},
{"minor_invisible_compiler", 0x06},
{"major_invisible_compiler", 0x07},
{"minor_fighter", 0x08},
{"major_fighter", 0x09},
{"minor_projectile_fighter", 0x0A},
{"major_projectile_fighter", 0x0B},
{"green_bob", 0x0C},
{"blue_bob", 0x0D},
{"security_bob", 0x0E},
{"explodabob", 0x0F},
{"minor_drone", 0x10},
{"major_drone", 0x11},
{"big_minor_drone", 0x12},
{"big_major_drone", 0x13},
{"possessed_drone", 0x14},
{"minor_cyborg", 0x15},
{"major_cyborg", 0x16},
{"minor_flame_cyborg", 0x17},
{"major_flame_cyborg", 0x18},
{"minor_enforcer", 0x19},
{"major_enforcer", 0x1A},
{"minor_hunter", 0x1B},
{"major_hunter", 0x1C},
{"minor_trooper", 0x1D},
{"major_trooper", 0x1E},
{"mega_cyborg", 0x1F},
{"mega_hunter", 0x20},
{"sewage_yeti", 0x21},
{"water_yeti", 0x22},
{"lava_yeti", 0x23},
{"minor_defender", 0x24},
{"major_defender", 0x25},
{"minor_juggernaut", 0x26},
{"major_juggernaut", 0x27},
{"tiny_pfhor", 0x28},
{"tiny_bob", 0x29},
{"tiny_yeti", 0x2A},
{"green_vacbob", 0x2B},
{"blue_vacbob", 0x2C},
{"security_vacbob", 0x2D},
{"explodavacbob", 0x2E},


// damage types

{"_damage_explosion", 0x00},
{"_damage_staff", 0x01},
{"_damage_projectile", 0x02},
{"_damage_absorbed", 0x03},
{"_damage_flame", 0x04},
{"_damage_claws", 0x05},
{"_damage_alien_weapon", 0x06},
{"_damage_hulk_slap", 0x07},
{"_damage_compiler", 0x08},
{"_damage_fusion", 0x09},
{"_damage_hunter", 0x0A},
{"_damage_fists", 0x0B},
{"_damage_teleporter", 0x0C},
{"_damage_defender", 0x0D},
{"_damage_yeti_claws", 0x0E},
{"_damage_yeti_projectile", 0x0F},
{"_damage_crushing", 0x10},
{"_damage_lava", 0x11},
{"_damage_suffocation", 0x12},
{"_damage_goo", 0x13},
{"_damage_energy_drain", 0x14},
{"_damage_oxygen_drain", 0x15},
{"_damage_drone", 0x16},
{"_damage_shotgun", 0x17},

{"explosion", 0x00},
{"staff", 0x01},
{"projectile", 0x02},
{"absorbed", 0x03},
{"flame", 0x04},
{"claws", 0x05},
{"alien_weapon", 0x06},
{"hulk_slap", 0x07},
{"compiler", 0x08},
{"fusion", 0x09},
{"hunter", 0x0A},
{"fists", 0x0B},
{"teleporter", 0x0C},
{"defender", 0x0D},
{"yeti_claws", 0x0E},
{"yeti_projectile", 0x0F},
{"crushing", 0x10},
{"lava", 0x11},
{"suffocation", 0x12},
{"goo", 0x13},
{"energy_drain", 0x14},
{"oxygen_drain", 0x15},
{"drone", 0x16},
{"shotgun", 0x17},


// monster classes

{"_monster_class_player", 0x0001},
{"_monster_class_bob", 0x0002},
{"_monster_class_madd", 0x0004},
{"_monster_class_possessed_drone", 0x0008},
{"_monster_class_defender", 0x0010},
{"_monster_class_fighter", 0x0020},
{"_monster_class_trooper", 0x0040},
{"_monster_class_hunter", 0x0080},
{"_monster_class_enforcer", 0x0100},
{"_monster_class_juggernaut", 0x0200},
{"_monster_class_drone", 0x0400},
{"_monster_class_compiler", 0x0800},
{"_monster_class_cyborg", 0x1000},
{"_monster_class_explodabob", 0x2000},
{"_monster_class_tick", 0x4000},
{"_monster_class_yeti", 0x8000},

{"class_player", 0x0001},
{"class_bob", 0x0002},
{"class_madd", 0x0004},
{"class_possessed_drone", 0x0008},
{"class_defender", 0x0010},
{"class_fighter", 0x0020},
{"class_trooper", 0x0040},
{"class_hunter", 0x0080},
{"class_enforcer", 0x0100},
{"class_juggernaut", 0x0200},
{"class_drone", 0x0400},
{"class_compiler", 0x0800},
{"class_cyborg", 0x1000},
{"class_explodabob", 0x2000},
{"class_tick", 0x4000},
{"class_yeti", 0x8000},


// player actions
// jkvw: hmm, I leave these alone for now

{"_moving_forward", 0x00},
{"_moving_backward", 0x01},
{"_sidestepping_left", 0x02},
{"_sidestepping_right", 0x03},
{"_turning_left", 0x04},
{"_turning_right", 0x05},
{"_looking_up", 0x06},
{"_looking_down", 0x07},
{"_action_trigger_state", 0x08},
{"_left_trigger_state", 0x09},
{"_right_trigger_state", 0x0A},
{"_start_queue",0x0B},
{"_stop_queue",0x0C},
{"_reset_queue",0x0D},


// monster actions

{"_monster_is_stationary", 0x00},
{"_monster_is_waiting_to_attack_again", 0x01},
{"_monster_is_moving", 0x02},
{"_monster_is_attacking_close", 0x03},
{"_monster_is_attacking_far", 0x04},
{"_monster_is_being_hit", 0x05},
{"_monster_is_dying_hard", 0x06},
{"_monster_is_dying_soft", 0x07},
{"_monster_is_dying_flaming", 0x08},
{"_monster_is_teleporting", 0x09},
{"_monster_is_teleporting_in", 0x0A},
{"_monster_is_teleporting_out", 0x0B},


// monster modes

{"_monster_mode_locked", 0x00},
{"_monster_mode_losing_lock", 0x01},
{"_monster_mode_lost_lock", 0x02},
{"_monster_mode_unlocked", 0x03},
{"_monster_mode_running", 0x04},

{"_monster_locked", 0x00},
{"_monster_losing_lock", 0x01},
{"_monster_lost_lock", 0x02},
{"_monster_unlocked", 0x03},
{"_monster_running", 0x04},


// faders

{"_fade_start_cinematic_fade_in", 0x00},
{"_fade_cinematic_fade_in", 0x01},
{"_fade_long_cinematic_fade_in", 0x02},
{"_fade_cinematic_fade_out", 0x03},
{"_fade_end_cinematic_fade_out", 0x04},

{"_start_cinematic_fade_in", 0x00},
{"_cinematic_fade_in", 0x01},
{"_long_cinematic_fade_in", 0x02},
{"_cinematic_fade_out", 0x03},
{"_end_cinematic_fade_out", 0x04},

{"_fade_red", 0x05},
{"_fade_big_red", 0x06},
{"_fade_bonus", 0x07},
{"_fade_bright", 0x08},
{"_fade_long_bright", 0x09},
{"_fade_yellow", 0x0A},
{"_fade_big_yellow", 0x0B},
{"_fade_purple", 0x0C},
{"_fade_cyan", 0x0D},
{"_fade_white", 0x0E},
{"_fade_big_white", 0x0F},
{"_fade_orange", 0x10},
{"_fade_long_orange", 0x11},
{"_fade_green", 0x12},
{"_fade_long_green", 0x13},
{"_fade_static", 0x14},
{"_fade_negative", 0x15},
{"_fade_big_negative", 0x16},
{"_fade_flicker_negative", 0x17},
{"_fade_dodge_purple", 0x18},
{"_fade_burn_cyan", 0x19},
{"_fade_dodge_yellow", 0x1A},
{"_fade_burn_green", 0x1B},
{"_fade_tint_green", 0x1C},
{"_fade_tint_blue", 0x1D},
{"_fade_tint_orange", 0x1E},
{"_fade_tint_gross", 0x1F},
{"_fade_tint_jjaro", 0x20},


// compass directions

{"_network_compass_all_off", 0x00},
{"_network_compass_nw", 0x01},
{"_network_compass_ne", 0x02},
{"_network_compass_sw", 0x04},
{"_network_compass_se", 0x08},
{"_network_compass_all_on", 0x0F},
{"_network_compass_use_beacon", 0x10},


// sounds

{"_snd_startup", 0},
{"_snd_teleport_in", 1},
{"_snd_teleport_out", 2},
{"_snd_crushed", 3},
{"_snd_nuclear_hard_death", 4},
{"_snd_absorbed", 5},
{"_snd_breathing", 6},
{"_snd_oxygen_warning", 7},
{"_snd_suffocation", 8},
{"_snd_energy_refuel", 9},
{"_snd_oxygen_refuel", 10},
{"_snd_cant_toggle_switch", 11},
{"_snd_switch_on", 12},
{"_snd_switch_off", 13},
{"_snd_puzzle_switch", 14},
{"_snd_chip_insertion", 15},
{"_snd_pattern_buffer", 16},
{"_snd_destroy_control_panel", 17},
{"_snd_adjust_volume", 18},
{"_snd_got_powerup", 19},
{"_snd_get_item", 20},
{"_snd_bullet_ricochet", 21},
{"_snd_metallic_ricochet", 22},
{"_snd_empty_gun", 23},
{"_snd_spht_door_opening", 24},
{"_snd_spht_door_closing", 25},
{"_snd_spht_door_obstructed", 26},
{"_snd_spht_platform_starting", 27},
{"_snd_spht_platform_stopping", 28},
{"_snd_owl", 29},
{"_snd_smg_firing", 30},
{"_snd_smg_reloading", 31},
{"_snd_heavy_spht_platform_starting", 32},
{"_snd_heavy_spht_platform_stopping", 33},
{"_snd_fist_hitting", 34},
{"_snd_pistol_firing", 35},
{"_snd_pistol_reloading", 36},
{"_snd_assault_rifle_firing", 37},
{"_snd_grenade_launcher_firing", 38},
{"_snd_grenade_expolding", 39},
{"_snd_grenade_flyby", 40},
{"_snd_fusion_firing", 41},
{"_snd_fusion_exploding", 42},
{"_snd_fusion_flyby", 43},
{"_snd_fusion_charging", 44},
{"_snd_rocket_exploding", 45},
{"_snd_rocket_flyby", 46},
{"_snd_rocket_firing", 47},
{"_snd_flamethrower", 48},
{"_snd_body_falling", 49},
{"_snd_body_exploding", 50},
{"_snd_bullet_hit_flesh", 51},
{"_snd_fighter_activate", 52},
{"_snd_fighter_wail", 53},
{"_snd_fighter_scream", 54},
{"_snd_fighter_chatter", 55},
{"_snd_fighter_attack", 56},
{"_snd_fighter_projectile_hit", 57},
{"_snd_fighter_projectile_flyby", 58},
{"_snd_spht_attack", 59},
{"_snd_spht_death", 60},
{"_snd_spht_hit", 61},
{"_snd_spht_projectile_flyby", 62},
{"_snd_spht_projectile_hit", 63},
{"_snd_cyborg_moving", 64},
{"_snd_cyborg_attack", 65},
{"_snd_cyborg_hit", 66},
{"_snd_cyborg_death", 67},
{"_snd_cyborg_projectile_bounce", 68},
{"_snd_cyborg_projectile_hit", 69},
{"_snd_cyborg_projectile_flyby", 70},
{"_snd_drone_activate", 71},
{"_snd_drone_start_attack", 72},
{"_snd_drone_attack", 73},
{"_snd_drone_dying", 74},
{"_snd_drone_death", 75},
{"_snd_drone_projectile_hit", 76},
{"_snd_drone_projectile_flyby", 77},
{"_snd_bob_wail", 78},
{"_snd_bob_scream", 79},
{"_snd_bob_hit", 80},
{"_snd_bob_chatter", 81},
{"_snd_assimilated_bob_chatter", 82},
{"_snd_bob_trash_talk", 83},
{"_snd_bob_apology", 84},
{"_snd_bob_activation", 85},
{"_snd_bob_clear", 86},
{"_snd_bob_angry", 87},
{"_snd_bob_secure", 88},
{"_snd_bob_kill_the_player", 89},
{"_snd_water", 90},
{"_snd_sewage", 91},
{"_snd_lava", 92},
{"_snd_goo", 93},
{"_snd_underwater", 94},
{"_snd_wind", 95},
{"_snd_waterfall", 96},
{"_snd_siren", 97},
{"_snd_fan", 98},
{"_snd_spht_door", 99},
{"_snd_spht_platform", 100},
{"_snd_alien_harmonics", 101},
{"_snd_heavy_spht_platform", 102},
{"_snd_light_machinery", 103},
{"_snd_heavy_machinery", 104},
{"_snd_transformer", 105},
{"_snd_sparking_transformer", 106},
{"_snd_water_drip", 107},
{"_snd_walking_in_water", 108},
{"_snd_exiting_water", 109},
{"_snd_entering_water", 110},
{"_snd_small_water_splash", 111},
{"_snd_medium_water_splash", 112},
{"_snd_large_water_splash", 113},
{"_snd_walking_in_lava", 114},
{"_snd_entering_lava", 115},
{"_snd_exiting_lava", 116},
{"_snd_small_lava_splash", 117},
{"_snd_medium_lava_splash", 118},
{"_snd_large_lava_splash", 119},
{"_snd_walking_in_sewage", 120},
{"_snd_exiting_sewage", 121},
{"_snd_entering_sewage", 122},
{"_snd_small_sewage_splash", 123},
{"_snd_medium_sewage_splash", 124},
{"_snd_large_sewage_splash", 125},
{"_snd_walking_in_goo", 126},
{"_snd_exiting_goo", 127},
{"_snd_entering_goo", 128},
{"_snd_small_goo_splash", 129},
{"_snd_medium_goo_splash", 130},
{"_snd_large_goo_splash", 131},
{"_snd_major_fusion_firing", 132},
{"_snd_major_fusion_charged", 133},
{"_snd_assault_rifle_reloading", 134},
{"_snd_assault_rifle_shell_casings", 135},
{"_snd_shotgun_firing", 136},
{"_snd_shotgun_reloading", 137},
{"_snd_ball_bounce", 138},
{"_snd_you_are_it", 139},
{"_snd_got_ball", 140},
{"_snd_computer_login", 141},
{"_snd_computer_logout", 142},
{"_snd_computer_page", 143},
{"_snd_heavy_shpt_door", 144},
{"_snd_heavy_spht_door_opening", 145},
{"_snd_heavy_spht_door_closing", 146},
{"_snd_heavy_spht_door_open", 147},
{"_snd_heavy_spht_door_closed", 148},
{"_snd_heavy_spht_door_obstructed", 149},
{"_snd_hunter_activate", 150},
{"_snd_hunter_attack", 151},
{"_snd_hunter_dying", 152},
{"_snd_hunter_landing", 153},
{"_snd_hunter_exploding", 154},
{"_snd_hunter_projectile_hit", 155},
{"_snd_hunter_projectile_flyby", 156},
{"_snd_enforcer_activate", 157},
{"_snd_enforcer_attack", 158},
{"_snd_enforcer_projectile_hit", 159},
{"_snd_enforcer_projectile_flyby", 160},
{"_snd_flickta_melee_attack", 161},
{"_snd_flickta_melee_hit", 162},
{"_snd_flickta_projectile_attack", 163},
{"_snd_flickta_projectile_sewage_hit", 164},
{"_snd_flickta_projectile_sewage_flyby", 165},
{"_snd_flickta_projectile_lava_hit", 166},
{"_snd_flickta_projectile_lava_flyby", 167},
{"_snd_flickta_dying", 168},
{"_snd_macine_binder", 169},
{"_snd_macine_bookpress", 170},
{"_snd_machine_puncher", 171},
{"_snd_electric_hum", 172},
{"_snd_alarm", 173},
{"_snd_night_wind", 174},
{"_snd_surface_explosion", 175},
{"_snd_underground_explosion", 176},
{"_snd_sphtkr_attack", 177},
{"_snd_sphtkr_projectile_hit", 178},
{"_snd_sphtkr_projectile_flyby", 179},
{"_snd_sphtkr_hit", 180},
{"_snd_sphtkr_exploding", 181},
{"_snd_tick_chatter", 182},
{"_snd_tick_falling", 183},
{"_snd_tick_flapping", 184},
{"_snd_tick_exploding", 185},
{"_snd_ceiling_lamp_exploding", 186},
{"_snd_pfhor_platform_starting", 187},
{"_snd_pfhor_platform_stopping", 188},
{"_snd_pfhor_platform", 189},
{"_snd_pfhor_door_opening", 190},
{"_snd_pfhor_door_closing", 191},
{"_snd_pfhor_door_obstructed", 192},
{"_snd_pfhor_door", 193},
{"_snd_pfhor_switch_off", 194},
{"_snd_pfhor_switch_on", 195},
{"_snd_juggernaut_firing", 196},
{"_snd_juggernaut_warning", 197},
{"_snd_juggernaut_exploding", 198},
{"_snd_juggernaut_start_attack", 199},
{"_snd_enforcer_exploding", 200},
{"_snd_alien_noise_1", 201},
{"_snd_alien_noise_2", 202},
{"_snd_vacbob_wail", 203},
{"_snd_vacbob_scream", 204},
{"_snd_vacbob_hit", 205},
{"_snd_vacbob_chatter", 206},
{"_snd_assimilated_vacbob_chatter", 207},
{"_snd_vacbob_trash_talk", 208},
{"_snd_vacbob_apology", 209},
{"_snd_vacbob_activation", 210},
{"_snd_vacbob_clear", 211},
{"_snd_vacbob_angry", 212},
{"_snd_vacbob_secure", 213},
{"_snd_vacbob_kill_the_player", 214},


// projectile types

{"_projectile_rocket", 0x00},
{"_projectile_grenade", 0x01},
{"_projectile_pistol_bullet", 0x02},
{"_projectile_rifle_bullet", 0x03},
{"_projectile_shotgun_bullet", 0x04},
{"_projectile_staff", 0x05},
{"_projectile_staff_bolt", 0x06},
{"_projectile_flamethrower_burst", 0x07},
{"_projectile_compiler_bolt_minor", 0x08},
{"_projectile_compiler_bolt_major", 0x09},
{"_projectile_alien_weapon", 0x0A},
{"_projectile_fusion_bolt_minor", 0x0B},
{"_projectile_fusion_bolt_major", 0x0C},
{"_projectile_hunter", 0x0D},
{"_projectile_fist", 0x0E},
{"_projectile_armageddon_sphere", 0x0F},
{"_projectile_armageddon_electricity", 0x10},
{"_projectile_juggernaut_rocket", 0x11},
{"_projectile_trooper_bullet", 0x12},
{"_projectile_trooper_grenade", 0x13},
{"_projectile_minor_defender", 0x14},
{"_projectile_major_defender", 0x15},
{"_projectile_juggernaut_missile", 0x16},
{"_projectile_minor_energy_drain", 0x17},
{"_projectile_major_energy_drain", 0x18},
{"_projectile_oxygen_drain", 0x19},
{"_projectile_minor_hummer", 0x1A},
{"_projectile_major_hummer", 0x1B},
{"_projectile_durandal_hummer", 0x1C},
{"_projectile_minor_cyborg_ball", 0x1D},
{"_projectile_major_cyborg_ball", 0x1E},
{"_projectile_ball", 0x1F},
{"_projectile_minor_fusion_dispersal", 0x20},
{"_projectile_major_fusion_dispersal", 0x21},
{"_projectile_overloaded_fusion_dispersal", 0x22},
{"_projectile_yeti", 0x23},
{"_projectile_sewage_yeti", 0x24},
{"_projectile_lava_yeti", 0x25},
{"_projectile_smg_bullet", 0x26},
        
// polygon types
{"_polygon_is_normal", 0x00},
{"_polygon_is_item_impassable", 0x01},
{"_polygon_is_monster_impassable", 0x02},
{"_polygon_is_hill", 0x03},
{"_polygon_is_base", 0x04},
{"_polygon_is_platform", 0x05},
{"_polygon_is_light_on_trigger", 0x06},
{"_polygon_is_platform_on_trigger", 0x07},
{"_polygon_is_light_off_trigger", 0x08},
{"_polygon_is_platform_off_trigger", 0x09},
{"_polygon_is_teleporter", 0x0A},
{"_polygon_is_zone_border", 0x0B},
{"_polygon_is_goal", 0x0C},
{"_polygon_is_visible_monster_trigger", 0x0D},
{"_polygon_is_invisible_monster_trigger", 0x0E},
{"_polygon_is_dual_monster_trigger", 0x0F},
{"_polygon_is_item_trigger", 0x10},
{"_polygon_must_be_explored", 0x11},
{"_polygon_is_automatic_exit", 0x12},
{"_polygon_is_minor_ouch", 0x13},
{"_polygon_is_major_ouch", 0x14},
{"_polygon_is_glue", 0x15},
{"_polygon_is_glue_trigger", 0x16},
{"_polygon_is_superglue", 0x17},

// powerup types
{"_powerup_invisibility", 0x00},
{"_powerup_invincibility", 0x01},
{"_powerup_infravision", 0x02},
{"_powerup_extravision", 0x03},
		
#ifdef LUA_ACCESSING
{"_refuel_oxygen", _panel_is_oxygen_refuel},
{"_refuel_single_shield", _panel_is_shield_refuel},
{"_refuel_double_shield", _panel_is_double_shield_refuel},
{"_refuel_triple_shield", _panel_is_triple_shield_refuel},
{"_weapon_fist", _weapon_fist},
{"_weapon_pistol", _weapon_pistol},
{"_weapon_plasma_pistol", _weapon_plasma_pistol},
{"_weapon_shotgun", _weapon_shotgun},
{"_weapon_assault_rifle", _weapon_assault_rifle},
{"_weapon_smg", _weapon_smg},
{"_weapon_flamethrower", _weapon_flamethrower},
{"_weapon_missile_launcher", _weapon_missile_launcher},
{"_weapon_alien_shotgun", _weapon_alien_shotgun},
{"_weapon_ball", _weapon_ball}
#endif
