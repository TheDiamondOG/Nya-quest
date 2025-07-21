#pragma once

#include <string_view>
#include "beatsaber-hook/shared/utils/typedefs.h"

struct IncludedAsset {

    IncludedAsset(uint8_t* start, uint8_t* end) : array(reinterpret_cast<Array<uint8_t>*>(start)) {
        array->klass = nullptr;
        array->monitor = nullptr;
        array->bounds = nullptr;
        array->max_length = end - start - 33;
        *(end - 1)= '\0';
    }
    
    operator ArrayW<uint8_t>() const {
        init();
        return array;
    }

    operator std::string_view() const {
        return { reinterpret_cast<char*>(array->_values), array->get_Length() };
    }
    
    operator std::span<uint8_t>() const {
        return { array->_values, array->get_Length() };
    }

    void init() const {
        if(!array->klass)
            array->klass = classof(Array<uint8_t>*);
    }

    private:
        Array<uint8_t>* array;

};

#define DECLARE_FILE(name)                         \
    extern "C" uint8_t _binary_##name##_start[];  \
    extern "C" uint8_t _binary_##name##_end[];    \
    const IncludedAsset name { _binary_##name##_start, _binary_##name##_end};

namespace IncludedAssets {

	DECLARE_FILE(Chocola_Angry_png)
	DECLARE_FILE(Chocola_Bashful_png)
	DECLARE_FILE(Chocola_Dead_png)
	DECLARE_FILE(Chocola_Happy_png)
	DECLARE_FILE(Chocola_Howdidyoudothat_png)
	DECLARE_FILE(Chocola_Laugh_png)
	DECLARE_FILE(Chocola_Mini_Sitting_png)
	DECLARE_FILE(Chocola_Question_Mark_png)
	DECLARE_FILE(Chocola_Sobbing_png)
	DECLARE_FILE(Chocola_Spooked_png)
	DECLARE_FILE(Chocola_Surprised_png)
	DECLARE_FILE(Chocovani_Greeting_png)
	DECLARE_FILE(Chocovani_Laptop_png)
	DECLARE_FILE(Vanilla_Flushed_png)
	DECLARE_FILE(Vanilla_Horny_Pastry_Puffer_png)
	DECLARE_FILE(Vanilla_Mini_Sitting_png)
	DECLARE_FILE(Vanilla_Stare_png)
	DECLARE_FILE(men_kissing_gif)
	DECLARE_FILE(men_kissing_frame_001_png)
	DECLARE_FILE(men_kissing_frame_002_png)
	DECLARE_FILE(men_kissing_frame_003_png)
	DECLARE_FILE(men_kissing_frame_004_png)
	DECLARE_FILE(men_kissing_frame_005_png)
	DECLARE_FILE(men_kissing_frame_006_png)
	DECLARE_FILE(men_kissing_frame_007_png)
	DECLARE_FILE(men_kissing_frame_008_png)
	DECLARE_FILE(men_kissing_frame_009_png)
	DECLARE_FILE(men_kissing_frame_010_png)
	DECLARE_FILE(men_kissing_frame_011_png)
	DECLARE_FILE(men_kissing_frame_012_png)
	DECLARE_FILE(men_kissing_frame_013_png)
	DECLARE_FILE(men_kissing_frame_014_png)
	DECLARE_FILE(men_kissing_frame_015_png)
	DECLARE_FILE(men_kissing_frame_016_png)
	DECLARE_FILE(men_kissing_frame_017_png)
	DECLARE_FILE(men_kissing_frame_018_png)
	DECLARE_FILE(men_kissing_frame_019_png)
	DECLARE_FILE(men_kissing_frame_020_png)
	DECLARE_FILE(men_kissing_frame_021_png)
	DECLARE_FILE(men_kissing_frame_022_png)
	DECLARE_FILE(men_kissing_frame_023_png)
	DECLARE_FILE(men_kissing_frame_024_png)
	DECLARE_FILE(men_kissing_frame_025_png)
	DECLARE_FILE(men_kissing_frame_026_png)
	DECLARE_FILE(men_kissing_frame_027_png)
	DECLARE_FILE(men_kissing_frame_028_png)
	DECLARE_FILE(men_kissing_frame_029_png)
	DECLARE_FILE(men_kissing_frame_030_png)
	DECLARE_FILE(men_kissing_frame_031_png)
	DECLARE_FILE(men_kissing_frame_032_png)
	DECLARE_FILE(men_kissing_frame_033_png)
	DECLARE_FILE(men_kissing_frame_034_png)
	DECLARE_FILE(men_kissing_frame_035_png)
	DECLARE_FILE(men_kissing_frame_036_png)
	DECLARE_FILE(men_kissing_frame_037_png)
	DECLARE_FILE(men_kissing_frame_038_png)
	DECLARE_FILE(men_kissing_frame_039_png)
	DECLARE_FILE(men_kissing_frame_040_png)
	DECLARE_FILE(men_kissing_frame_041_png)
	DECLARE_FILE(men_kissing_frame_042_png)
	DECLARE_FILE(men_kissing_frame_043_png)
	DECLARE_FILE(men_kissing_frame_044_png)
	DECLARE_FILE(men_kissing_frame_045_png)
	DECLARE_FILE(men_kissing_frame_046_png)
	DECLARE_FILE(men_kissing_frame_047_png)
	DECLARE_FILE(men_kissing_frame_048_png)
	DECLARE_FILE(men_kissing_frame_049_png)
	DECLARE_FILE(men_kissing_frame_050_png)
	DECLARE_FILE(men_kissing_frame_051_png)
	DECLARE_FILE(men_kissing_frame_052_png)
	DECLARE_FILE(men_kissing_frame_053_png)
	DECLARE_FILE(men_kissing_frame_054_png)
	DECLARE_FILE(men_kissing_frame_055_png)
	DECLARE_FILE(men_kissing_frame_056_png)
	DECLARE_FILE(men_kissing_frame_057_png)
	DECLARE_FILE(men_kissing_frame_058_png)
	DECLARE_FILE(men_kissing_frame_059_png)
	DECLARE_FILE(men_kissing_frame_060_png)
	DECLARE_FILE(men_kissing_frame_061_png)
	DECLARE_FILE(men_kissing_frame_062_png)
	DECLARE_FILE(men_kissing_frame_063_png)
	DECLARE_FILE(men_kissing_frame_064_png)
	DECLARE_FILE(men_kissing_frame_065_png)
	DECLARE_FILE(men_kissing_frame_066_png)
	DECLARE_FILE(men_kissing_frame_067_png)
	DECLARE_FILE(men_kissing_frame_068_png)
	DECLARE_FILE(men_kissing_frame_069_png)
	DECLARE_FILE(men_kissing_frame_070_png)
	DECLARE_FILE(men_kissing_frame_071_png)
	DECLARE_FILE(men_kissing_frame_072_png)
	DECLARE_FILE(men_kissing_frame_073_png)
	DECLARE_FILE(men_kissing_frame_074_png)
	DECLARE_FILE(men_kissing_frame_075_png)
	DECLARE_FILE(men_kissing_frame_076_png)
	DECLARE_FILE(men_kissing_frame_077_png)
	DECLARE_FILE(men_kissing_frame_078_png)
	DECLARE_FILE(men_kissing_frame_079_png)
	DECLARE_FILE(men_kissing_frame_080_png)
	DECLARE_FILE(men_kissing_frame_081_png)
	DECLARE_FILE(men_kissing_frame_082_png)
	DECLARE_FILE(men_kissing_frame_083_png)
	DECLARE_FILE(men_kissing_frame_084_png)
	DECLARE_FILE(men_kissing_frame_085_png)
	DECLARE_FILE(men_kissing_frame_086_png)
	DECLARE_FILE(men_kissing_frame_087_png)
	DECLARE_FILE(men_kissing_frame_088_png)
	DECLARE_FILE(men_kissing_frame_089_png)
	DECLARE_FILE(men_kissing_frame_090_png)
	DECLARE_FILE(men_kissing_frame_091_png)
	DECLARE_FILE(men_kissing_frame_092_png)
	DECLARE_FILE(men_kissing_frame_093_png)
	DECLARE_FILE(men_kissing_frame_094_png)
	DECLARE_FILE(men_kissing_frame_095_png)
	DECLARE_FILE(men_kissing_frame_096_png)
	DECLARE_FILE(men_kissing_frame_097_png)
	DECLARE_FILE(men_kissing_frame_098_png)
	DECLARE_FILE(men_kissing_frame_099_png)
	DECLARE_FILE(men_kissing_frame_100_png)
	DECLARE_FILE(men_kissing_frame_101_png)
	DECLARE_FILE(men_kissing_frame_102_png)
	DECLARE_FILE(men_kissing_frame_103_png)
	DECLARE_FILE(men_kissing_frame_104_png)
	DECLARE_FILE(men_kissing_frame_105_png)
	DECLARE_FILE(men_kissing_frame_106_png)
	DECLARE_FILE(men_kissing_frame_107_png)
	DECLARE_FILE(men_kissing_frame_108_png)
	DECLARE_FILE(men_kissing_frame_109_png)
	DECLARE_FILE(men_kissing_frame_110_png)
	DECLARE_FILE(men_kissing_frame_111_png)
	DECLARE_FILE(men_kissing_frame_112_png)
	DECLARE_FILE(men_kissing_frame_113_png)
	DECLARE_FILE(men_kissing_frame_114_png)
	DECLARE_FILE(men_kissing_frame_115_png)
	DECLARE_FILE(men_kissing_frame_116_png)
	DECLARE_FILE(men_kissing_frame_117_png)
	DECLARE_FILE(men_kissing_frame_118_png)
	DECLARE_FILE(men_kissing_frame_119_png)
	DECLARE_FILE(men_kissing_frame_120_png)
	DECLARE_FILE(men_kissing_frame_121_png)
	DECLARE_FILE(men_kissing_frame_122_png)
	DECLARE_FILE(men_kissing_frame_123_png)
	DECLARE_FILE(placeholder_png)

}
