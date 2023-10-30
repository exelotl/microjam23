#include "mj/mj_opening_g_scene.h"

#include "bn_colors.h"
#include "bn_fixed_point.h"
#include "bn_keypad.h"
#include "bn_string.h"
#include "bn_version.h"

#include "mj/mj_core.h"
#include "mj/mj_scene_type.h"

#include "bn_regular_bg_items_mj_op_a_chair.h"

namespace mj
{

opening_g_scene::opening_g_scene(core& core) :
    cutscene(core, 10),
    _chair(bn::regular_bg_items::mj_op_a_chair.create_bg(0, 0))
{

}

bn::optional<scene_type> opening_g_scene::update()
{
    bn::optional<scene_type> result;
    
    
    // result = scene_type::TITLE;
    return result;
}

}
