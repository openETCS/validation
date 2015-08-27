/* Ver_Receive_TrackSide_Msg_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "Ver_Receive_TrackSide_Msg_newtype.h"
#include "Ver_Receive_TrackSide_Msg_newmapping.h"

/* iterators */
static const MappingIterator iter_array_272;
static const MappingIterator iter_array_68;
static const MappingIterator iter_array_432;
static const MappingIterator iter_array_231;
static const MappingIterator iter_array_228;
static const MappingIterator iter_array_395;
static const MappingIterator iter_array_494;
static const MappingIterator iter_array_396;
static const MappingIterator iter_array_17;
static const MappingIterator iter_array_99;
static const MappingIterator iter_array_3;
static const MappingIterator iter_array_4;
static const MappingIterator iter_array_5;
static const MappingIterator iter_array_104;
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_6;
static const MappingIterator iter_array_105;
static const MappingIterator iter_array_2;
static const MappingIterator iter_array_64;
static const MappingIterator iter_array_8;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_255;
static const MappingIterator iter_map_32;
static const MappingIterator iter_foldi_32;
static const MappingIterator iter_foldi_99;
static const MappingIterator iter_map_33;
static const MappingIterator iter_foldi_231;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldw_30;
static const MappingIterator iter_foldwi_33;
static const MappingIterator iter_foldwi_8;
static const MappingIterator iter_mapw_8;
static const MappingIterator iter_array_272 = { "array", 272, 272, NULL};
static const MappingIterator iter_array_68 = { "array", 68, 68, NULL};
static const MappingIterator iter_array_432 = { "array", 432, 432, NULL};
static const MappingIterator iter_array_231 = { "array", 231, 231, NULL};
static const MappingIterator iter_array_228 = { "array", 228, 228, NULL};
static const MappingIterator iter_array_395 = { "array", 395, 395, NULL};
static const MappingIterator iter_array_494 = { "array", 494, 494, NULL};
static const MappingIterator iter_array_396 = { "array", 396, 396, NULL};
static const MappingIterator iter_array_17 = { "array", 17, 17, NULL};
static const MappingIterator iter_array_99 = { "array", 99, 99, NULL};
static const MappingIterator iter_array_3 = { "array", 3, 3, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_104 = { "array", 104, 104, NULL};
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_6 = { "array", 6, 6, NULL};
static const MappingIterator iter_array_105 = { "array", 105, 105, NULL};
static const MappingIterator iter_array_2 = { "array", 2, 2, NULL};
static const MappingIterator iter_array_64 = { "array", 64, 64, NULL};
static const MappingIterator iter_array_8 = { "array", 8, 8, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_255 = { "array", 255, 255, NULL};
static const MappingIterator iter_map_32 = { "map", 32, 32, NULL};
static const MappingIterator iter_foldi_32 = { "foldi", 32, 32, NULL};
static const MappingIterator iter_foldi_99 = { "foldi", 99, 99, NULL};
static const MappingIterator iter_map_33 = { "map", 33, 33, NULL};
static const MappingIterator iter_foldi_231 = { "foldi", 231, 231, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldw_30 = { "foldw", 30, 30, NULL};
static const MappingIterator iter_foldwi_33 = { "foldwi", 33, 33, NULL};
static const MappingIterator iter_foldwi_8 = { "foldwi", 8, 8, NULL};
static const MappingIterator iter_mapw_8 = { "mapw", 8, 8, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }
static int isActive_SSM_TR_SM1_SSM_TR_Driving_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_Driving_1_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_Driving_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_Driving_SM1); }
static int isActive_SSM_TR_SM1_SSM_TR_Reset_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_Reset_1_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_Reset_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_Reset_SM1); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_487, 1);
MAP_DECL(scope_486, 1);
MAP_DECL(scope_485, 1);
MAP_DECL(scope_484, 1);
MAP_DECL(scope_483, 1);
MAP_DECL(scope_482, 1);
MAP_DECL(scope_481, 1);
MAP_DECL(scope_480, 1);
MAP_DECL(scope_479, 1);
MAP_DECL(scope_478, 5);
MAP_DECL(scope_477, 1);
MAP_DECL(scope_476, 1);
MAP_DECL(scope_475, 1);
MAP_DECL(scope_474, 1);
MAP_DECL(scope_473, 1);
MAP_DECL(scope_472, 1);
MAP_DECL(scope_471, 1);
MAP_DECL(scope_470, 1);
MAP_DECL(scope_469, 1);
MAP_DECL(scope_468, 1);
MAP_DECL(scope_467, 1);
MAP_DECL(scope_466, 1);
MAP_DECL(scope_465, 1);
MAP_DECL(scope_464, 1);
MAP_DECL(scope_463, 1);
MAP_DECL(scope_462, 1);
MAP_DECL(scope_461, 1);
MAP_DECL(scope_460, 1);
MAP_DECL(scope_459, 19);
MAP_DECL(scope_458, 1);
MAP_DECL(scope_453, 3);
MAP_DECL(scope_452, 8);
MAP_DECL(scope_451, 6);
MAP_DECL(scope_450, 15);
MAP_DECL(scope_449, 5);
MAP_DECL(scope_448, 6);
MAP_DECL(scope_447, 6);
MAP_DECL(scope_446, 1);
MAP_DECL(scope_445, 1);
MAP_DECL(scope_444, 1);
MAP_DECL(scope_443, 1);
MAP_DECL(scope_442, 5);
MAP_DECL(scope_441, 1);
MAP_DECL(scope_440, 2);
MAP_DECL(scope_439, 12);
MAP_DECL(scope_438, 6);
MAP_DECL(scope_437, 3);
MAP_DECL(scope_436, 4);
MAP_DECL(scope_435, 4);
MAP_DECL(scope_434, 1);
MAP_DECL(scope_433, 2);
MAP_DECL(scope_432, 10);
MAP_DECL(scope_431, 5);
MAP_DECL(scope_430, 9);
MAP_DECL(scope_429, 4);
MAP_DECL(scope_428, 1);
MAP_DECL(scope_427, 5);
MAP_DECL(scope_426, 1);
MAP_DECL(scope_425, 2);
MAP_DECL(scope_424, 1);
MAP_DECL(scope_423, 3);
MAP_DECL(scope_422, 1);
MAP_DECL(scope_421, 11);
MAP_DECL(scope_420, 1);
MAP_DECL(scope_419, 3);
MAP_DECL(scope_418, 1);
MAP_DECL(scope_417, 10);
MAP_DECL(scope_416, 1);
MAP_DECL(scope_415, 10);
MAP_DECL(scope_414, 2);
MAP_DECL(scope_413, 3);
MAP_DECL(scope_412, 4);
MAP_DECL(scope_411, 3);
MAP_DECL(scope_410, 7);
MAP_DECL(scope_409, 3);
MAP_DECL(scope_408, 5);
MAP_DECL(scope_407, 10);
MAP_DECL(scope_406, 6);
MAP_DECL(scope_405, 10);
MAP_DECL(scope_404, 8);
MAP_DECL(scope_403, 6);
MAP_DECL(scope_402, 10);
MAP_DECL(scope_401, 8);
MAP_DECL(scope_400, 28);
MAP_DECL(scope_399, 19);
MAP_DECL(scope_398, 8);
MAP_DECL(scope_397, 6);
MAP_DECL(scope_396, 15);
MAP_DECL(scope_395, 10);
MAP_DECL(scope_394, 2);
MAP_DECL(scope_393, 2);
MAP_DECL(scope_392, 2);
MAP_DECL(scope_391, 2);
MAP_DECL(scope_390, 3);
MAP_DECL(scope_389, 3);
MAP_DECL(scope_388, 3);
MAP_DECL(scope_387, 6);
MAP_DECL(scope_386, 38);
MAP_DECL(scope_385, 2);
MAP_DECL(scope_384, 2);
MAP_DECL(scope_383, 2);
MAP_DECL(scope_382, 2);
MAP_DECL(scope_381, 3);
MAP_DECL(scope_380, 3);
MAP_DECL(scope_379, 3);
MAP_DECL(scope_378, 6);
MAP_DECL(scope_377, 39);
MAP_DECL(scope_376, 26);
MAP_DECL(scope_375, 21);
MAP_DECL(scope_374, 2);
MAP_DECL(scope_373, 2);
MAP_DECL(scope_372, 2);
MAP_DECL(scope_371, 2);
MAP_DECL(scope_370, 3);
MAP_DECL(scope_369, 3);
MAP_DECL(scope_368, 3);
MAP_DECL(scope_367, 6);
MAP_DECL(scope_366, 37);
MAP_DECL(scope_365, 2);
MAP_DECL(scope_364, 2);
MAP_DECL(scope_363, 2);
MAP_DECL(scope_362, 2);
MAP_DECL(scope_361, 3);
MAP_DECL(scope_360, 3);
MAP_DECL(scope_359, 3);
MAP_DECL(scope_358, 6);
MAP_DECL(scope_357, 37);
MAP_DECL(scope_356, 12);
MAP_DECL(scope_355, 26);
MAP_DECL(scope_354, 17);
MAP_DECL(scope_353, 26);
MAP_DECL(scope_352, 17);
MAP_DECL(scope_351, 17);
MAP_DECL(scope_350, 5);
MAP_DECL(scope_349, 1);
MAP_DECL(scope_348, 3);
MAP_DECL(scope_347, 8);
MAP_DECL(scope_346, 1);
MAP_DECL(scope_345, 1);
MAP_DECL(scope_344, 1);
MAP_DECL(scope_343, 1);
MAP_DECL(scope_342, 1);
MAP_DECL(scope_341, 1);
MAP_DECL(scope_340, 1);
MAP_DECL(scope_339, 1);
MAP_DECL(scope_338, 1);
MAP_DECL(scope_337, 3);
MAP_DECL(scope_336, 3);
MAP_DECL(scope_335, 3);
MAP_DECL(scope_334, 3);
MAP_DECL(scope_333, 3);
MAP_DECL(scope_332, 3);
MAP_DECL(scope_331, 3);
MAP_DECL(scope_330, 3);
MAP_DECL(scope_329, 2);
MAP_DECL(scope_328, 12);
MAP_DECL(scope_327, 9);
MAP_DECL(scope_326, 9);
MAP_DECL(scope_325, 9);
MAP_DECL(scope_324, 9);
MAP_DECL(scope_323, 5);
MAP_DECL(scope_322, 6);
MAP_DECL(scope_321, 15);
MAP_DECL(scope_320, 5);
MAP_DECL(scope_319, 17);
MAP_DECL(scope_318, 7);
MAP_DECL(scope_317, 25);
MAP_DECL(scope_316, 20);
MAP_DECL(scope_315, 14);
MAP_DECL(scope_314, 8);
MAP_DECL(scope_313, 1);
MAP_DECL(scope_312, 3);
MAP_DECL(scope_311, 5);
MAP_DECL(scope_310, 2);
MAP_DECL(scope_309, 2);
MAP_DECL(scope_308, 2);
MAP_DECL(scope_307, 2);
MAP_DECL(scope_306, 2);
MAP_DECL(scope_305, 2);
MAP_DECL(scope_304, 2);
MAP_DECL(scope_303, 2);
MAP_DECL(scope_302, 2);
MAP_DECL(scope_301, 2);
MAP_DECL(scope_300, 2);
MAP_DECL(scope_299, 2);
MAP_DECL(scope_298, 2);
MAP_DECL(scope_297, 2);
MAP_DECL(scope_296, 2);
MAP_DECL(scope_295, 2);
MAP_DECL(scope_294, 2);
MAP_DECL(scope_293, 2);
MAP_DECL(scope_292, 2);
MAP_DECL(scope_291, 54);
MAP_DECL(scope_290, 2);
MAP_DECL(scope_289, 2);
MAP_DECL(scope_288, 2);
MAP_DECL(scope_287, 2);
MAP_DECL(scope_286, 2);
MAP_DECL(scope_285, 2);
MAP_DECL(scope_284, 2);
MAP_DECL(scope_283, 2);
MAP_DECL(scope_282, 2);
MAP_DECL(scope_281, 2);
MAP_DECL(scope_280, 2);
MAP_DECL(scope_279, 2);
MAP_DECL(scope_278, 2);
MAP_DECL(scope_277, 2);
MAP_DECL(scope_276, 2);
MAP_DECL(scope_275, 2);
MAP_DECL(scope_274, 2);
MAP_DECL(scope_273, 2);
MAP_DECL(scope_272, 2);
MAP_DECL(scope_271, 54);
MAP_DECL(scope_270, 2);
MAP_DECL(scope_269, 2);
MAP_DECL(scope_268, 2);
MAP_DECL(scope_267, 2);
MAP_DECL(scope_266, 2);
MAP_DECL(scope_265, 2);
MAP_DECL(scope_264, 2);
MAP_DECL(scope_263, 2);
MAP_DECL(scope_262, 2);
MAP_DECL(scope_261, 2);
MAP_DECL(scope_260, 2);
MAP_DECL(scope_259, 2);
MAP_DECL(scope_258, 2);
MAP_DECL(scope_257, 2);
MAP_DECL(scope_256, 2);
MAP_DECL(scope_255, 2);
MAP_DECL(scope_254, 2);
MAP_DECL(scope_253, 2);
MAP_DECL(scope_252, 2);
MAP_DECL(scope_251, 54);
MAP_DECL(scope_250, 2);
MAP_DECL(scope_249, 2);
MAP_DECL(scope_248, 2);
MAP_DECL(scope_247, 2);
MAP_DECL(scope_246, 2);
MAP_DECL(scope_245, 2);
MAP_DECL(scope_244, 2);
MAP_DECL(scope_243, 2);
MAP_DECL(scope_242, 2);
MAP_DECL(scope_241, 2);
MAP_DECL(scope_240, 2);
MAP_DECL(scope_239, 2);
MAP_DECL(scope_238, 2);
MAP_DECL(scope_237, 2);
MAP_DECL(scope_236, 2);
MAP_DECL(scope_235, 2);
MAP_DECL(scope_234, 2);
MAP_DECL(scope_233, 2);
MAP_DECL(scope_232, 2);
MAP_DECL(scope_231, 54);
MAP_DECL(scope_230, 2);
MAP_DECL(scope_229, 2);
MAP_DECL(scope_228, 2);
MAP_DECL(scope_227, 2);
MAP_DECL(scope_226, 2);
MAP_DECL(scope_225, 2);
MAP_DECL(scope_224, 2);
MAP_DECL(scope_223, 2);
MAP_DECL(scope_222, 2);
MAP_DECL(scope_221, 2);
MAP_DECL(scope_220, 2);
MAP_DECL(scope_219, 2);
MAP_DECL(scope_218, 2);
MAP_DECL(scope_217, 2);
MAP_DECL(scope_216, 2);
MAP_DECL(scope_215, 2);
MAP_DECL(scope_214, 2);
MAP_DECL(scope_213, 2);
MAP_DECL(scope_212, 2);
MAP_DECL(scope_211, 54);
MAP_DECL(scope_210, 5);
MAP_DECL(scope_209, 28);
MAP_DECL(scope_208, 6);
MAP_DECL(scope_207, 28);
MAP_DECL(scope_206, 23);
MAP_DECL(scope_205, 3);
MAP_DECL(scope_204, 5);
MAP_DECL(scope_203, 1);
MAP_DECL(scope_202, 3);
MAP_DECL(scope_201, 3);
MAP_DECL(scope_200, 7);
MAP_DECL(scope_199, 36);
MAP_DECL(scope_198, 14);
MAP_DECL(scope_197, 6);
MAP_DECL(scope_196, 11);
MAP_DECL(scope_195, 13);
MAP_DECL(scope_194, 13);
MAP_DECL(scope_193, 13);
MAP_DECL(scope_192, 13);
MAP_DECL(scope_191, 10);
MAP_DECL(scope_190, 9);
MAP_DECL(scope_189, 13);
MAP_DECL(scope_188, 13);
MAP_DECL(scope_187, 20);
MAP_DECL(scope_186, 12);
MAP_DECL(scope_185, 29);
MAP_DECL(scope_184, 20);
MAP_DECL(scope_183, 3);
MAP_DECL(scope_182, 3);
MAP_DECL(scope_181, 12);
MAP_DECL(scope_180, 37);
MAP_DECL(scope_179, 4);
MAP_DECL(scope_178, 4);
MAP_DECL(scope_177, 4);
MAP_DECL(scope_176, 4);
MAP_DECL(scope_175, 4);
MAP_DECL(scope_174, 4);
MAP_DECL(scope_173, 4);
MAP_DECL(scope_172, 37);
MAP_DECL(scope_171, 37);
MAP_DECL(scope_170, 37);
MAP_DECL(scope_169, 37);
MAP_DECL(scope_168, 2);
MAP_DECL(scope_167, 2);
MAP_DECL(scope_166, 2);
MAP_DECL(scope_165, 3);
MAP_DECL(scope_164, 3);
MAP_DECL(scope_163, 6);
MAP_DECL(scope_162, 6);
MAP_DECL(scope_161, 6);
MAP_DECL(scope_160, 6);
MAP_DECL(scope_159, 2);
MAP_DECL(scope_158, 2);
MAP_DECL(scope_157, 2);
MAP_DECL(scope_156, 2);
MAP_DECL(scope_155, 3);
MAP_DECL(scope_154, 3);
MAP_DECL(scope_153, 3);
MAP_DECL(scope_152, 6);
MAP_DECL(scope_151, 2);
MAP_DECL(scope_150, 2);
MAP_DECL(scope_149, 2);
MAP_DECL(scope_148, 2);
MAP_DECL(scope_147, 2);
MAP_DECL(scope_146, 2);
MAP_DECL(scope_145, 2);
MAP_DECL(scope_144, 2);
MAP_DECL(scope_143, 2);
MAP_DECL(scope_142, 3);
MAP_DECL(scope_141, 3);
MAP_DECL(scope_140, 3);
MAP_DECL(scope_139, 3);
MAP_DECL(scope_138, 3);
MAP_DECL(scope_137, 3);
MAP_DECL(scope_136, 3);
MAP_DECL(scope_135, 3);
MAP_DECL(scope_134, 6);
MAP_DECL(scope_133, 2);
MAP_DECL(scope_132, 2);
MAP_DECL(scope_131, 2);
MAP_DECL(scope_130, 2);
MAP_DECL(scope_129, 2);
MAP_DECL(scope_128, 2);
MAP_DECL(scope_127, 2);
MAP_DECL(scope_126, 2);
MAP_DECL(scope_125, 2);
MAP_DECL(scope_124, 3);
MAP_DECL(scope_123, 3);
MAP_DECL(scope_122, 3);
MAP_DECL(scope_121, 3);
MAP_DECL(scope_120, 3);
MAP_DECL(scope_119, 3);
MAP_DECL(scope_118, 3);
MAP_DECL(scope_117, 3);
MAP_DECL(scope_116, 6);
MAP_DECL(scope_115, 2);
MAP_DECL(scope_114, 2);
MAP_DECL(scope_113, 2);
MAP_DECL(scope_112, 3);
MAP_DECL(scope_111, 3);
MAP_DECL(scope_110, 6);
MAP_DECL(scope_109, 2);
MAP_DECL(scope_108, 2);
MAP_DECL(scope_107, 2);
MAP_DECL(scope_106, 2);
MAP_DECL(scope_105, 2);
MAP_DECL(scope_104, 3);
MAP_DECL(scope_103, 3);
MAP_DECL(scope_102, 3);
MAP_DECL(scope_101, 3);
MAP_DECL(scope_100, 6);
MAP_DECL(scope_99, 2);
MAP_DECL(scope_98, 2);
MAP_DECL(scope_97, 2);
MAP_DECL(scope_96, 3);
MAP_DECL(scope_95, 3);
MAP_DECL(scope_94, 6);
MAP_DECL(scope_93, 1);
MAP_DECL(scope_92, 10);
MAP_DECL(scope_91, 3);
MAP_DECL(scope_90, 9);
MAP_DECL(scope_89, 2);
MAP_DECL(scope_88, 4);
MAP_DECL(scope_87, 3);
MAP_DECL(scope_86, 6);
MAP_DECL(scope_85, 3);
MAP_DECL(scope_84, 12);
MAP_DECL(scope_83, 9);
MAP_DECL(scope_82, 2);
MAP_DECL(scope_81, 3);
MAP_DECL(scope_80, 1);
MAP_DECL(scope_79, 3);
MAP_DECL(scope_78, 32);
MAP_DECL(scope_77, 17);
MAP_DECL(scope_76, 14);
MAP_DECL(scope_75, 6);
MAP_DECL(scope_74, 6);
MAP_DECL(scope_73, 6);
MAP_DECL(scope_72, 4);
MAP_DECL(scope_71, 7);
MAP_DECL(scope_70, 9);
MAP_DECL(scope_69, 33);
MAP_DECL(scope_68, 14);
MAP_DECL(scope_67, 30);
MAP_DECL(scope_66, 33);
MAP_DECL(scope_65, 12);
MAP_DECL(scope_64, 13);
MAP_DECL(scope_63, 7);
MAP_DECL(scope_62, 4);
MAP_DECL(scope_61, 20);
MAP_DECL(scope_60, 5);
MAP_DECL(scope_59, 1);
MAP_DECL(scope_58, 1);
MAP_DECL(scope_57, 1);
MAP_DECL(scope_56, 1);
MAP_DECL(scope_55, 1);
MAP_DECL(scope_54, 1);
MAP_DECL(scope_53, 3);
MAP_DECL(scope_52, 3);
MAP_DECL(scope_51, 3);
MAP_DECL(scope_50, 3);
MAP_DECL(scope_49, 3);
MAP_DECL(scope_48, 9);
MAP_DECL(scope_47, 3);
MAP_DECL(scope_46, 3);
MAP_DECL(scope_45, 3);
MAP_DECL(scope_44, 3);
MAP_DECL(scope_43, 3);
MAP_DECL(scope_42, 3);
MAP_DECL(scope_41, 3);
MAP_DECL(scope_40, 3);
MAP_DECL(scope_39, 3);
MAP_DECL(scope_38, 3);
MAP_DECL(scope_37, 1);
MAP_DECL(scope_36, 1);
MAP_DECL(scope_35, 1);
MAP_DECL(scope_34, 1);
MAP_DECL(scope_33, 3);
MAP_DECL(scope_32, 3);
MAP_DECL(scope_31, 3);
MAP_DECL(scope_30, 3);
MAP_DECL(scope_29, 3);
MAP_DECL(scope_28, 4);
MAP_DECL(scope_27, 7);
MAP_DECL(scope_26, 4);
MAP_DECL(scope_25, 3);
MAP_DECL(scope_24, 5);
MAP_DECL(scope_23, 3);
MAP_DECL(scope_22, 12);
MAP_DECL(scope_21, 1);
MAP_DECL(scope_20, 29);
MAP_DECL(scope_19, 1);
MAP_DECL(scope_18, 3);
MAP_DECL(scope_15, 11);
MAP_DECL(scope_14, 1);
MAP_DECL(scope_13, 1);
MAP_DECL(scope_12, 1);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 3);
MAP_DECL(scope_9, 3);
MAP_DECL(scope_8, 3);
MAP_DECL(scope_7, 11);
MAP_DECL(scope_6, 46);
MAP_DECL(scope_5, 23);
MAP_DECL(scope_4, 47);
MAP_DECL(scope_3, 14);
MAP_DECL(scope_2, 13);
MAP_DECL(scope_1, 42);
MAP_DECL(scope_0, 1);

/* array_int_272 */
static const MappingEntry scope_487_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_272, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_487 = {
  "array_int_272",
  scope_487_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_486_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(CompressedPacketData_T_Common_Types_Pkg), 0, &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 0}
};
static const MappingScope scope_486 = {
  "array_int_500_500",
  scope_486_entries, 1,
};

/* array_int_68 */
static const MappingEntry scope_485_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_68, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_485 = {
  "array_int_68",
  scope_485_entries, 1,
};

/* array_int_432 */
static const MappingEntry scope_484_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_432, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_484 = {
  "array_int_432",
  scope_484_entries, 1,
};

/* array_int_3_33_231 */
static const MappingEntry scope_483_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(array_int_3_33), 0, &_Type_array_int_3_33_Utils, NULL, NULL, &scope_467, 1, 0}
};
static const MappingScope scope_483 = {
  "array_int_3_33_231",
  scope_483_entries, 1,
};

/* array_int_99 */
static const MappingEntry scope_482_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_99, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_482 = {
  "array_int_99",
  scope_482_entries, 1,
};

/* array_int_228 */
static const MappingEntry scope_481_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_228, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_481 = {
  "array_int_228",
  scope_481_entries, 1,
};

/* array_bool_8 */
static const MappingEntry scope_480_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_8, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_480 = {
  "array_bool_8",
  scope_480_entries, 1,
};

/* array_int_395 */
static const MappingEntry scope_479_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_395, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_479 = {
  "array_int_395",
  scope_479_entries, 1,
};

/* struct_10608 */
static const MappingEntry scope_478_entries[5] = {
  /* 0 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct_10608, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct_10608, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".Or_BG", NULL, sizeof(OrBG_TM), offsetof(struct_10608, Or_BG), &_Type_OrBG_TM_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".Or_Line", NULL, sizeof(OrLine_TM), offsetof(struct_10608, Or_Line), &_Type_OrLine_TM_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Pos", NULL, sizeof(kcg_int), offsetof(struct_10608, Pos), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_478 = {
  "struct_10608",
  scope_478_entries, 5,
};

/* array_int_1 */
static const MappingEntry scope_477_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_477 = {
  "array_int_1",
  scope_477_entries, 1,
};

/* array_int_494 */
static const MappingEntry scope_476_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_494, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_476 = {
  "array_int_494",
  scope_476_entries, 1,
};

/* array_int_2_32_32 */
static const MappingEntry scope_475_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2), 0, &_Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_445, 1, 0}
};
static const MappingScope scope_475 = {
  "array_int_2_32_32",
  scope_475_entries, 1,
};

/* array_int_396 */
static const MappingEntry scope_474_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_396, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_474 = {
  "array_int_396",
  scope_474_entries, 1,
};

/* array_int_17 */
static const MappingEntry scope_473_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_17, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_473 = {
  "array_int_17",
  scope_473_entries, 1,
};

/* array_10565 */
static const MappingEntry scope_472_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(P021_section_int_T_TM), 0, &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_419, 1, 0}
};
static const MappingScope scope_472 = {
  "array_10565",
  scope_472_entries, 1,
};

/* array_10558 */
static const MappingEntry scope_471_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_8, sizeof(N_PIG), 0, &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_471 = {
  "array_10558",
  scope_471_entries, 1,
};

/* array_int_3_33_99 */
static const MappingEntry scope_470_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_99, sizeof(array_int_3_33), 0, &_Type_array_int_3_33_Utils, NULL, NULL, &scope_467, 1, 0}
};
static const MappingScope scope_470 = {
  "array_int_3_33_99",
  scope_470_entries, 1,
};

/* array_int_33 */
static const MappingEntry scope_469_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_469 = {
  "array_int_33",
  scope_469_entries, 1,
};

/* array_int_3 */
static const MappingEntry scope_468_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_468 = {
  "array_int_3",
  scope_468_entries, 1,
};

/* array_int_3_33 */
static const MappingEntry scope_467_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_3), 0, &_Type_array_int_3_Utils, NULL, NULL, &scope_468, 1, 0}
};
static const MappingScope scope_467 = {
  "array_int_3_33",
  scope_467_entries, 1,
};

/* array_10460 */
static const MappingEntry scope_466_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(P027V1_section_int_qdiff_T_TM_baseline2), 0, &_Type_P027V1_section_int_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_440, 1, 0}
};
static const MappingScope scope_466 = {
  "array_10460",
  scope_466_entries, 1,
};

/* array_int_4 */
static const MappingEntry scope_465_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_465 = {
  "array_int_4",
  scope_465_entries, 1,
};

/* array_int_5 */
static const MappingEntry scope_464_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_464 = {
  "array_int_5",
  scope_464_entries, 1,
};

/* array_10421 */
static const MappingEntry scope_463_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(P027V1_section_int_T_TM_baseline2), 0, &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_442, 1, 0}
};
static const MappingScope scope_463 = {
  "array_10421",
  scope_463_entries, 1,
};

/* array_int_104 */
static const MappingEntry scope_462_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_104, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_462 = {
  "array_int_104",
  scope_462_entries, 1,
};

/* array_10404 */
static const MappingEntry scope_461_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(P041_section_int_T_TM), 0, &_Type_P041_section_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 0}
};
static const MappingScope scope_461 = {
  "array_10404",
  scope_461_entries, 1,
};

/* array_int_6 */
static const MappingEntry scope_460_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_6, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_460 = {
  "array_int_6",
  scope_460_entries, 1,
};

/* struct_10249 */
static const MappingEntry scope_459_entries[19] = {
  /* 0 */ { MAP_FIELD, ".D_TEXTDISPLAY_start", NULL, sizeof(kcg_int), offsetof(struct_10249, D_TEXTDISPLAY_start), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct_10249, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".L_TEXT", NULL, sizeof(kcg_int), offsetof(struct_10249, L_TEXT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 3 */ { MAP_FIELD, ".L_TEXTDISPLAY_end", NULL, sizeof(kcg_int), offsetof(struct_10249, L_TEXTDISPLAY_end), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_FIELD, ".M_LEVELTEXTDISPLAY_end", NULL, sizeof(kcg_int), offsetof(struct_10249, M_LEVELTEXTDISPLAY_end), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".M_LEVELTEXTDISPLAY_start", NULL, sizeof(kcg_int), offsetof(struct_10249, M_LEVELTEXTDISPLAY_start), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_FIELD, ".M_MODETEXTDISPLAY_end", NULL, sizeof(kcg_int), offsetof(struct_10249, M_MODETEXTDISPLAY_end), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_FIELD, ".M_MODETEXTDISPLAY_start", NULL, sizeof(kcg_int), offsetof(struct_10249, M_MODETEXTDISPLAY_start), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_FIELD, ".NID_NTC_end", NULL, sizeof(kcg_int), offsetof(struct_10249, NID_NTC_end), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_FIELD, ".NID_NTC_start", NULL, sizeof(kcg_int), offsetof(struct_10249, NID_NTC_start), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct_10249, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 11 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct_10249, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 12 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct_10249, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 13 */ { MAP_FIELD, ".Q_TEXTCLASS", NULL, sizeof(kcg_int), offsetof(struct_10249, Q_TEXTCLASS), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 14 */ { MAP_FIELD, ".Q_TEXTCONFIRM", NULL, sizeof(kcg_int), offsetof(struct_10249, Q_TEXTCONFIRM), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_FIELD, ".Q_TEXTDISPLAY", NULL, sizeof(kcg_int), offsetof(struct_10249, Q_TEXTDISPLAY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 16 */ { MAP_FIELD, ".T_TEXTDISPLAY_end", NULL, sizeof(kcg_int), offsetof(struct_10249, T_TEXTDISPLAY_end), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 17 */ { MAP_FIELD, ".X_TEXT", NULL, sizeof(X_TEXT_trackside_T_TM), offsetof(struct_10249, X_TEXT), &_Type_X_TEXT_trackside_T_TM_Utils, NULL, NULL, &scope_416, 1, 18},
  /* 18 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct_10249, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_459 = {
  "struct_10249",
  scope_459_entries, 19,
};

/* array_int_105 */
static const MappingEntry scope_458_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_105, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_458 = {
  "array_int_105",
  scope_458_entries, 1,
};

/* TelegramStore_T_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_453_entries[3] = {
  /* 0 */ { MAP_FIELD, ".position", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(TelegramStore_T_Receive_TrackSide_Msg_Pkg, position), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 2},
  /* 1 */ { MAP_FIELD, ".telegram", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(TelegramStore_T_Receive_TrackSide_Msg_Pkg, telegram), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 1},
  /* 2 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(TelegramStore_T_Receive_TrackSide_Msg_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_453 = {
  "TelegramStore_T_Receive_TrackSide_Msg_Pkg",
  scope_453_entries, 3,
};

/* BGCollector_T_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_452_entries[8] = {
  /* 0 */ { MAP_FIELD, ".BGMessageSent", NULL, sizeof(kcg_bool), offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg, BGMessageSent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".BG_ID", NULL, sizeof(NID_BG), offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg, BG_ID), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".C_ID", NULL, sizeof(NID_C), offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg, C_ID), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".badBaliseFlag", NULL, sizeof(kcg_bool), offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg, badBaliseFlag), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 4 */ { MAP_FIELD, ".balisePosition", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg, balisePosition), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 4},
  /* 5 */ { MAP_FIELD, ".collectedTelegrams", NULL, sizeof(kcg_int), offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg, collectedTelegrams), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".positionFirstContact", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg, positionFirstContact), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 5},
  /* 7 */ { MAP_FIELD, ".totalTelegrams", NULL, sizeof(kcg_int), offsetof(BGCollector_T_Receive_TrackSide_Msg_Pkg, totalTelegrams), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_452 = {
  "BGCollector_T_Receive_TrackSide_Msg_Pkg",
  scope_452_entries, 8,
};

/* RadioMessage_T_Radio_Types_Pkg */
static const MappingEntry scope_451_entries[6] = {
  /* 0 */ { MAP_FIELD, ".consistencyError", NULL, sizeof(kcg_bool), offsetof(RadioMessage_T_Radio_Types_Pkg, consistencyError), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".header", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(RadioMessage_T_Radio_Types_Pkg, header), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 2 */ { MAP_FIELD, ".packets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(RadioMessage_T_Radio_Types_Pkg, packets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 4},
  /* 3 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(RadioMessage_T_Radio_Types_Pkg, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 4 */ { MAP_FIELD, ".radioMetadata", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(RadioMessage_T_Radio_Types_Pkg, radioMetadata), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_430, 1, 3},
  /* 5 */ { MAP_FIELD, ".sendingRBC", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(RadioMessage_T_Radio_Types_Pkg, sendingRBC), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 5}
};
static const MappingScope scope_451 = {
  "RadioMessage_T_Radio_Types_Pkg",
  scope_451_entries, 6,
};

/* Radio_TrackTrain_Header_T_Radio_Types_Pkg */
static const MappingEntry scope_450_entries[15] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(D_EMERGENCYSTOP), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, d_emergencystop), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(D_REF), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, d_ref), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(D_SR), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, d_sr), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".nid_em", NULL, sizeof(NID_EM), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, nid_em), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(NID_LRBG), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, nid_lrbg), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".nid_message", NULL, sizeof(NID_MESSAGE), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, nid_message), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, radioDevice), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, receivedSystemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(T_TRAIN), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, t_sh_rqst), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_FIELD, ".t_train", NULL, sizeof(T_TRAIN), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, t_train), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(T_TRAIN), offsetof(Radio_TrackTrain_Header_T_Radio_Types_Pkg, t_train_reference), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_450 = {
  "Radio_TrackTrain_Header_T_Radio_Types_Pkg",
  scope_450_entries, 15,
};

/* API_RadioMsgHeader_T_API_Msg_Pkg */
static const MappingEntry scope_449_entries[5] = {
  /* 0 */ { MAP_FIELD, ".Radio_Common_Header", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(API_RadioMsgHeader_T_API_Msg_Pkg, Radio_Common_Header), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_450, 1, 2},
  /* 1 */ { MAP_FIELD, ".Radio_MetaData", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(API_RadioMsgHeader_T_API_Msg_Pkg, Radio_MetaData), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_430, 1, 3},
  /* 2 */ { MAP_FIELD, ".apiConsistencyError", NULL, sizeof(kcg_bool), offsetof(API_RadioMsgHeader_T_API_Msg_Pkg, apiConsistencyError), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(API_RadioMsgHeader_T_API_Msg_Pkg, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 4 */ { MAP_FIELD, ".sendingRBC_Id", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(API_RadioMsgHeader_T_API_Msg_Pkg, sendingRBC_Id), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 4}
};
static const MappingScope scope_449 = {
  "API_RadioMsgHeader_T_API_Msg_Pkg",
  scope_449_entries, 5,
};

/* API_TelegramHeader_T_API_Msg_Pkg */
static const MappingEntry scope_448_entries[6] = {
  /* 0 */ { MAP_FIELD, ".api_bad_balise_received", NULL, sizeof(kcg_bool), offsetof(API_TelegramHeader_T_API_Msg_Pkg, api_bad_balise_received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".api_header", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(API_TelegramHeader_T_API_Msg_Pkg, api_header), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 3},
  /* 2 */ { MAP_FIELD, ".centerOfBalisePosition", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(API_TelegramHeader_T_API_Msg_Pkg, centerOfBalisePosition), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 4},
  /* 3 */ { MAP_FIELD, ".checkResult", NULL, sizeof(kcg_bool), offsetof(API_TelegramHeader_T_API_Msg_Pkg, checkResult), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(API_TelegramHeader_T_API_Msg_Pkg, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_FIELD, ".sendingRBC_Id", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(API_TelegramHeader_T_API_Msg_Pkg, sendingRBC_Id), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 5}
};
static const MappingScope scope_448 = {
  "API_TelegramHeader_T_API_Msg_Pkg",
  scope_448_entries, 6,
};

/* API_TrackSideInput_T_API_Msg_Pkg */
static const MappingEntry scope_447_entries[6] = {
  /* 0 */ { MAP_FIELD, ".btm_msg", NULL, sizeof(API_TelegramHeader_T_API_Msg_Pkg), offsetof(API_TrackSideInput_T_API_Msg_Pkg, btm_msg), &_Type_API_TelegramHeader_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_448, 1, 3},
  /* 1 */ { MAP_FIELD, ".msg_type", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(API_TrackSideInput_T_API_Msg_Pkg, msg_type), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".packets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(API_TrackSideInput_T_API_Msg_Pkg, packets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 3 */ { MAP_FIELD, ".rtm_msg", NULL, sizeof(API_RadioMsgHeader_T_API_Msg_Pkg), offsetof(API_TrackSideInput_T_API_Msg_Pkg, rtm_msg), &_Type_API_RadioMsgHeader_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_449, 1, 4},
  /* 4 */ { MAP_FIELD, ".systemTimeMsgReceived", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(API_TrackSideInput_T_API_Msg_Pkg, systemTimeMsgReceived), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(API_TrackSideInput_T_API_Msg_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_447 = {
  "API_TrackSideInput_T_API_Msg_Pkg",
  scope_447_entries, 6,
};

/* P027V1_section_array_qdiff_T_TM_baseline2 */
static const MappingEntry scope_446_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_446 = {
  "P027V1_section_array_qdiff_T_TM_baseline2",
  scope_446_entries, 1,
};

/* _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 */
static const MappingEntry scope_445_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(P027V1_section_array_qdiff_T_TM_baseline2), 0, &_Type_P027V1_section_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_446, 1, 0}
};
static const MappingScope scope_445 = {
  "_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2",
  scope_445_entries, 1,
};

/* P027V1_sections_array_flat_qdiff_T_TM_baseline2 */
static const MappingEntry scope_444_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_64, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_444 = {
  "P027V1_sections_array_flat_qdiff_T_TM_baseline2",
  scope_444_entries, 1,
};

/* _2_P027V1_OBU_sectionlist_int_T_TM_baseline2 */
static const MappingEntry scope_443_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(P027V1_section_int_T_TM_baseline2), 0, &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_442, 1, 0}
};
static const MappingScope scope_443 = {
  "_2_P027V1_OBU_sectionlist_int_T_TM_baseline2",
  scope_443_entries, 1,
};

/* P027V1_section_int_T_TM_baseline2 */
static const MappingEntry scope_442_entries[5] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(P027V1_section_int_T_TM_baseline2, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(P027V1_section_int_T_TM_baseline2, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(P027V1_section_int_T_TM_baseline2, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), offsetof(P027V1_section_int_T_TM_baseline2, SECTIONS_q_diff), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_466, 1, 4},
  /* 4 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(P027V1_section_int_T_TM_baseline2, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_442 = {
  "P027V1_section_int_T_TM_baseline2",
  scope_442_entries, 5,
};

/* P027V1_trackside_sectionlist_T_TM_baseline2 */
static const MappingEntry scope_441_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(P027V1_section_int_T_TM_baseline2), 0, &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_442, 1, 0}
};
static const MappingScope scope_441 = {
  "P027V1_trackside_sectionlist_T_TM_baseline2",
  scope_441_entries, 1,
};

/* P027V1_section_int_qdiff_T_TM_baseline2 */
static const MappingEntry scope_440_entries[2] = {
  /* 0 */ { MAP_FIELD, ".NC_DIFF", NULL, sizeof(kcg_int), offsetof(P027V1_section_int_qdiff_T_TM_baseline2, NC_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".V_DIFF", NULL, sizeof(kcg_int), offsetof(P027V1_section_int_qdiff_T_TM_baseline2, V_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_440 = {
  "P027V1_section_int_qdiff_T_TM_baseline2",
  scope_440_entries, 2,
};

/* P027V1_trackside_int_T_TM_baseline2 */
static const MappingEntry scope_439_entries[12] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(P027V1_trackside_int_T_TM_baseline2, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(P027V1_trackside_int_T_TM_baseline2, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(P027V1_trackside_int_T_TM_baseline2, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".N_ITER_k", NULL, sizeof(kcg_int), offsetof(P027V1_trackside_int_T_TM_baseline2, N_ITER_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".N_ITER_n", NULL, sizeof(kcg_int), offsetof(P027V1_trackside_int_T_TM_baseline2, N_ITER_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(P027V1_trackside_int_T_TM_baseline2, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(P027V1_trackside_int_T_TM_baseline2, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(P027V1_trackside_int_T_TM_baseline2, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS_SSP", NULL, sizeof(P027V1_trackside_sectionlist_T_TM_baseline2), offsetof(P027V1_trackside_int_T_TM_baseline2, SECTIONS_SSP), &_Type_P027V1_trackside_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_441, 1, 11},
  /* 9 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), offsetof(P027V1_trackside_int_T_TM_baseline2, SECTIONS_q_diff), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_466, 1, 9},
  /* 10 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(P027V1_trackside_int_T_TM_baseline2, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(P027V1_trackside_int_T_TM_baseline2, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_439 = {
  "P027V1_trackside_int_T_TM_baseline2",
  scope_439_entries, 12,
};

/* B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt */
static const MappingEntry scope_438_entries[6] = {
  /* 0 */ { MAP_FIELD, ".TrainPos", NULL, sizeof(kcg_real), offsetof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt, TrainPos), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".balise_passed", NULL, sizeof(kcg_bool), offsetof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt, balise_passed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".engineering_BG_location", NULL, sizeof(kcg_int), offsetof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt, engineering_BG_location), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".header", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt, header), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 0},
  /* 4 */ { MAP_FIELD, ".packets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt, packets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1},
  /* 5 */ { MAP_FIELD, ".pig_nom_0", NULL, sizeof(kcg_int), offsetof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt, pig_nom_0), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_438 = {
  "B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt",
  scope_438_entries, 6,
};

/* parameter_StoryTest_T_UNISIG_Validation_Scenarios */
static const MappingEntry scope_437_entries[3] = {
  /* 0 */ { MAP_FIELD, ".BeginOfTrack", NULL, sizeof(kcg_real), offsetof(parameter_StoryTest_T_UNISIG_Validation_Scenarios, BeginOfTrack), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".EndOfTrack", NULL, sizeof(kcg_real), offsetof(parameter_StoryTest_T_UNISIG_Validation_Scenarios, EndOfTrack), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".NumberOfBGs", NULL, sizeof(kcg_int), offsetof(parameter_StoryTest_T_UNISIG_Validation_Scenarios, NumberOfBGs), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_437 = {
  "parameter_StoryTest_T_UNISIG_Validation_Scenarios",
  scope_437_entries, 3,
};

/* BG_Message_T_BG_Types_Pkg */
static const MappingEntry scope_436_entries[4] = {
  /* 0 */ { MAP_FIELD, ".Telegrams", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(BG_Message_T_BG_Types_Pkg, Telegrams), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 1, 1},
  /* 1 */ { MAP_FIELD, ".centerOfBalisePosition", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(BG_Message_T_BG_Types_Pkg, centerOfBalisePosition), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 3},
  /* 2 */ { MAP_FIELD, ".numberBalises", NULL, sizeof(kcg_int), offsetof(BG_Message_T_BG_Types_Pkg, numberBalises), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(BG_Message_T_BG_Types_Pkg, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_436 = {
  "BG_Message_T_BG_Types_Pkg",
  scope_436_entries, 4,
};

/* Telegram_T_BG_Types_Pkg */
static const MappingEntry scope_435_entries[4] = {
  /* 0 */ { MAP_FIELD, ".checkResult", NULL, sizeof(kcg_bool), offsetof(Telegram_T_BG_Types_Pkg, checkResult), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".packets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(Telegram_T_BG_Types_Pkg, packets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 3},
  /* 2 */ { MAP_FIELD, ".telegramheader", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(Telegram_T_BG_Types_Pkg, telegramheader), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 2},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(Telegram_T_BG_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_435 = {
  "Telegram_T_BG_Types_Pkg",
  scope_435_entries, 4,
};

/* TelegramArray_T_BG_Types_Pkg */
static const MappingEntry scope_434_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_8, sizeof(Telegram_T_BG_Types_Pkg), 0, &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 0}
};
static const MappingScope scope_434 = {
  "TelegramArray_T_BG_Types_Pkg",
  scope_434_entries, 1,
};

/* centerOfBalisePosition_T_BG_Types_Pkg */
static const MappingEntry scope_433_entries[2] = {
  /* 0 */ { MAP_FIELD, ".BG_centerDetectionInaccuraccuracies", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(centerOfBalisePosition_T_BG_Types_Pkg, BG_centerDetectionInaccuraccuracies), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_413, 1, 1},
  /* 1 */ { MAP_FIELD, ".odometerOfBaliseDetection", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(centerOfBalisePosition_T_BG_Types_Pkg, odometerOfBaliseDetection), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_410, 1, 0}
};
static const MappingScope scope_433 = {
  "centerOfBalisePosition_T_BG_Types_Pkg",
  scope_433_entries, 2,
};

/* TelegramHeader_T_BG_Types_Pkg */
static const MappingEntry scope_432_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(M_DUP), offsetof(TelegramHeader_T_BG_Types_Pkg, m_dup), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(M_MCOUNT), offsetof(TelegramHeader_T_BG_Types_Pkg, m_mcount), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(TelegramHeader_T_BG_Types_Pkg, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(N_PIG), offsetof(TelegramHeader_T_BG_Types_Pkg, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(TelegramHeader_T_BG_Types_Pkg, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(NID_BG), offsetof(TelegramHeader_T_BG_Types_Pkg, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(TelegramHeader_T_BG_Types_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(TelegramHeader_T_BG_Types_Pkg, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(TelegramHeader_T_BG_Types_Pkg, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(TelegramHeader_T_BG_Types_Pkg, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_432 = {
  "TelegramHeader_T_BG_Types_Pkg",
  scope_432_entries, 10,
};

/* TrackSide_ForCheck_T_Common_Types_Pkg */
static const MappingEntry scope_431_entries[5] = {
  /* 0 */ { MAP_FIELD, ".msg_type", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(TrackSide_ForCheck_T_Common_Types_Pkg, msg_type), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".radio_Msg", NULL, sizeof(RadioMessage_T_Radio_Types_Pkg), offsetof(TrackSide_ForCheck_T_Common_Types_Pkg, radio_Msg), &_Type_RadioMessage_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_451, 1, 4},
  /* 2 */ { MAP_FIELD, ".systemTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(TrackSide_ForCheck_T_Common_Types_Pkg, systemTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".telegramHeaders", NULL, sizeof(BG_Message_T_BG_Types_Pkg), offsetof(TrackSide_ForCheck_T_Common_Types_Pkg, telegramHeaders), &_Type_BG_Message_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_436, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(TrackSide_ForCheck_T_Common_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_431 = {
  "TrackSide_ForCheck_T_Common_Types_Pkg",
  scope_431_entries, 5,
};

/* RadioMetadata_T_Common_Types_Pkg */
static const MappingEntry scope_430_entries[9] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, d_emergencystop), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, d_ref), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, d_sr), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, m_version), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, nid_em), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, q_dir), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, q_scale), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, t_sh_rqst), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_bool), offsetof(RadioMetadata_T_Common_Types_Pkg, t_train_reference), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_430 = {
  "RadioMetadata_T_Common_Types_Pkg",
  scope_430_entries, 9,
};

/* RBC_Id_T_Common_Types_Pkg */
static const MappingEntry scope_429_entries[4] = {
  /* 0 */ { MAP_FIELD, ".device_id", NULL, sizeof(kcg_int), offsetof(RBC_Id_T_Common_Types_Pkg, device_id), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".nid_c", NULL, sizeof(NID_C), offsetof(RBC_Id_T_Common_Types_Pkg, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".rbc_id", NULL, sizeof(NID_RBC), offsetof(RBC_Id_T_Common_Types_Pkg, rbc_id), &_Type_NID_RBC_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(RBC_Id_T_Common_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_429 = {
  "RBC_Id_T_Common_Types_Pkg",
  scope_429_entries, 4,
};

/* CompressedPacketData_T_Common_Types_Pkg */
static const MappingEntry scope_428_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_428 = {
  "CompressedPacketData_T_Common_Types_Pkg",
  scope_428_entries, 1,
};

/* MetadataElement_T_Common_Types_Pkg */
static const MappingEntry scope_427_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(MetadataElement_T_Common_Types_Pkg, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(NID_PACKET), offsetof(MetadataElement_T_Common_Types_Pkg, nid_packet), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(MetadataElement_T_Common_Types_Pkg, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(MetadataElement_T_Common_Types_Pkg, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(MetadataElement_T_Common_Types_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_427 = {
  "MetadataElement_T_Common_Types_Pkg",
  scope_427_entries, 5,
};

/* Metadata_T_Common_Types_Pkg */
static const MappingEntry scope_426_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(MetadataElement_T_Common_Types_Pkg), 0, &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 0}
};
static const MappingScope scope_426 = {
  "Metadata_T_Common_Types_Pkg",
  scope_426_entries, 1,
};

/* CompressedPackets_T_Common_Types_Pkg */
static const MappingEntry scope_425_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(CompressedPackets_T_Common_Types_Pkg, PacketData), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(CompressedPackets_T_Common_Types_Pkg, PacketHeaders), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 0}
};
static const MappingScope scope_425 = {
  "CompressedPackets_T_Common_Types_Pkg",
  scope_425_entries, 2,
};

/* P041_OBU_sectionlist_int_T_TM */
static const MappingEntry scope_424_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(P041_section_int_T_TM), 0, &_Type_P041_section_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 0}
};
static const MappingScope scope_424 = {
  "P041_OBU_sectionlist_int_T_TM",
  scope_424_entries, 1,
};

/* P041_section_int_T_TM */
static const MappingEntry scope_423_entries[3] = {
  /* 0 */ { MAP_FIELD, ".L_ACKLEVELTR", NULL, sizeof(kcg_int), offsetof(P041_section_int_T_TM, L_ACKLEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".M_LEVELTR", NULL, sizeof(kcg_int), offsetof(P041_section_int_T_TM, M_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(P041_section_int_T_TM, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_423 = {
  "P041_section_int_T_TM",
  scope_423_entries, 3,
};

/* P041_trackide_sectionlist_T_TM */
static const MappingEntry scope_422_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(P041_section_int_T_TM), 0, &_Type_P041_section_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 0}
};
static const MappingScope scope_422 = {
  "P041_trackide_sectionlist_T_TM",
  scope_422_entries, 1,
};

/* P041_trackside_int_T_TM */
static const MappingEntry scope_421_entries[11] = {
  /* 0 */ { MAP_FIELD, ".D_LEVELTR", NULL, sizeof(kcg_int), offsetof(P041_trackside_int_T_TM, D_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_ACKLEVELTR", NULL, sizeof(kcg_int), offsetof(P041_trackside_int_T_TM, L_ACKLEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(P041_trackside_int_T_TM, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".M_LEVELTR", NULL, sizeof(kcg_int), offsetof(P041_trackside_int_T_TM, M_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(P041_trackside_int_T_TM, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(P041_trackside_int_T_TM, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(P041_trackside_int_T_TM, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(P041_trackside_int_T_TM, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(P041_trackside_int_T_TM, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(P041_trackide_sectionlist_T_TM), offsetof(P041_trackside_int_T_TM, SECTIONS), &_Type_P041_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_422, 1, 10},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(P041_trackside_int_T_TM, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_421 = {
  "P041_trackside_int_T_TM",
  scope_421_entries, 11,
};

/* P021_OBU_sectionlist_int_T_TM */
static const MappingEntry scope_420_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(P021_section_int_T_TM), 0, &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_419, 1, 0}
};
static const MappingScope scope_420 = {
  "P021_OBU_sectionlist_int_T_TM",
  scope_420_entries, 1,
};

/* P021_section_int_T_TM */
static const MappingEntry scope_419_entries[3] = {
  /* 0 */ { MAP_FIELD, ".D_GRADIENT", NULL, sizeof(kcg_int), offsetof(P021_section_int_T_TM, D_GRADIENT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".G_A", NULL, sizeof(kcg_int), offsetof(P021_section_int_T_TM, G_A), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".Q_GDIR", NULL, sizeof(kcg_int), offsetof(P021_section_int_T_TM, Q_GDIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_419 = {
  "P021_section_int_T_TM",
  scope_419_entries, 3,
};

/* P021_trackide_sectionlist_T_TM */
static const MappingEntry scope_418_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(P021_section_int_T_TM), 0, &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_419, 1, 0}
};
static const MappingScope scope_418 = {
  "P021_trackide_sectionlist_T_TM",
  scope_418_entries, 1,
};

/* P021_trackside_int_T_TM */
static const MappingEntry scope_417_entries[10] = {
  /* 0 */ { MAP_FIELD, ".D_GRADIENT", NULL, sizeof(kcg_int), offsetof(P021_trackside_int_T_TM, D_GRADIENT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".G_A", NULL, sizeof(kcg_int), offsetof(P021_trackside_int_T_TM, G_A), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(P021_trackside_int_T_TM, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(P021_trackside_int_T_TM, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(P021_trackside_int_T_TM, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(P021_trackside_int_T_TM, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_GDIR", NULL, sizeof(kcg_int), offsetof(P021_trackside_int_T_TM, Q_GDIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(P021_trackside_int_T_TM, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(P021_trackide_sectionlist_T_TM), offsetof(P021_trackside_int_T_TM, SECTIONS), &_Type_P021_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_418, 1, 9},
  /* 9 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(P021_trackside_int_T_TM, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_417 = {
  "P021_trackside_int_T_TM",
  scope_417_entries, 10,
};

/* X_TEXT_trackside_T_TM */
static const MappingEntry scope_416_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_255, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_416 = {
  "X_TEXT_trackside_T_TM",
  scope_416_entries, 1,
};

/* BaliseTelegramHeader_int_T_TM */
static const MappingEntry scope_415_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, m_dup), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, n_pig), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, n_total), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, q_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, q_media), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(kcg_int), offsetof(BaliseTelegramHeader_int_T_TM, q_updown), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_415 = {
  "BaliseTelegramHeader_int_T_TM",
  scope_415_entries, 10,
};

/* CompressedBaliseMessage_TM */
static const MappingEntry scope_414_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(CompressedBaliseMessage_TM, Header), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(CompressedBaliseMessage_TM, Messages), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_414 = {
  "CompressedBaliseMessage_TM",
  scope_414_entries, 2,
};

/* LocWithInAcc_T_Obu_BasicTypes_Pkg */
static const MappingEntry scope_413_entries[3] = {
  /* 0 */ { MAP_FIELD, ".d_max", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg, d_max), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".d_min", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg, d_min), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nominal", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(LocWithInAcc_T_Obu_BasicTypes_Pkg, nominal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_413 = {
  "LocWithInAcc_T_Obu_BasicTypes_Pkg",
  scope_413_entries, 3,
};

/* OdometrySpeeds_T_Obu_BasicTypes_Pkg */
static const MappingEntry scope_412_entries[4] = {
  /* 0 */ { MAP_FIELD, ".v_lower", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg, v_lower), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".v_rawNominal", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg, v_rawNominal), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".v_safeNominal", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg, v_safeNominal), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".v_upper", NULL, sizeof(V_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometrySpeeds_T_Obu_BasicTypes_Pkg, v_upper), &_Type_V_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_412 = {
  "OdometrySpeeds_T_Obu_BasicTypes_Pkg",
  scope_412_entries, 4,
};

/* OdometryLocations_T_Obu_BasicTypes_Pkg */
static const MappingEntry scope_411_entries[3] = {
  /* 0 */ { MAP_FIELD, ".o_max", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg, o_max), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".o_min", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg, o_min), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".o_nominal", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(OdometryLocations_T_Obu_BasicTypes_Pkg, o_nominal), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_411 = {
  "OdometryLocations_T_Obu_BasicTypes_Pkg",
  scope_411_entries, 3,
};

/* odometry_T_Obu_BasicTypes_Pkg */
static const MappingEntry scope_410_entries[7] = {
  /* 0 */ { MAP_FIELD, ".acceleration", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, acceleration), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".motionDirection", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, motionDirection), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".motionState", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, motionState), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".odo", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, odo), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_411, 1, 2},
  /* 4 */ { MAP_FIELD, ".speed", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, speed), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_412, 1, 3},
  /* 5 */ { MAP_FIELD, ".timestamp", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(odometry_T_Obu_BasicTypes_Pkg, timestamp), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(odometry_T_Obu_BasicTypes_Pkg, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_410 = {
  "odometry_T_Obu_BasicTypes_Pkg",
  scope_410_entries, 7,
};

/* odometryFactors_T_Toolbox */
static const MappingEntry scope_409_entries[3] = {
  /* 0 */ { MAP_FIELD, ".o_max", NULL, sizeof(kcg_real), offsetof(odometryFactors_T_Toolbox, o_max), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".o_min", NULL, sizeof(kcg_real), offsetof(odometryFactors_T_Toolbox, o_min), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".o_nominal", NULL, sizeof(kcg_real), offsetof(odometryFactors_T_Toolbox, o_nominal), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_409 = {
  "odometryFactors_T_Toolbox",
  scope_409_entries, 3,
};

/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ C_P027V1_fs_struct_to_arr_TM_lib_internal */
static const MappingEntry scope_408_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_int_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L1), &_Type_P027V1_section_int_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_440, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(P027V1_section_array_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L2), &_Type_P027V1_section_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_446, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P027V1_section_array_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, section_arrays), &_Type_P027V1_section_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_446, 1, 4}
};
static const MappingScope scope_408 = {
  "TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ C_P027V1_fs_struct_to_arr_TM_lib_internal",
  scope_408_entries, 5,
};

/* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ C_P027V1_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_407_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_444, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L2), &_Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_445, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L7), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_444, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, flat), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_444, 1, 9}
};
static const MappingScope scope_407 = {
  "TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ C_P027V1_fs_flatten_array_TM_lib_internal",
  scope_407_entries, 10,
};

/* TM_lib_internal::C_P041_fs_struct_to_array/ C_P041_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_406_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_section_int_T_TM), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P041_section_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_3), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L10), &_Type_array_int_3_Utils, NULL, NULL, &scope_468, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P041_section_array_T_TM), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P041_section_array_T_TM_Utils, NULL, NULL, &scope_468, 1, 5}
};
static const MappingScope scope_406 = {
  "TM_lib_internal::C_P041_fs_struct_to_array/ C_P041_fs_struct_to_array_TM_lib_internal",
  scope_406_entries, 6,
};

/* TM_lib_internal::C_P041_fs_flatten_array/ C_P041_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_405_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L1), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P041_OBU_sectionlist_array_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L2), &_Type_P041_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_467, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L7), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, flat), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 9}
};
static const MappingScope scope_405 = {
  "TM_lib_internal::C_P041_fs_flatten_array/ C_P041_fs_flatten_array_TM_lib_internal",
  scope_405_entries, 10,
};

/* TM_lib_internal::C_P027_flatten_sections_qdiff/ C_P027_flatten_sections_qdiff_TM_lib_internal */
static const MappingEntry scope_404_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, Flattened), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_444, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_fs_flatten_array_qdiff 1", &iter_foldi_32, sizeof(outC_C_P027V1_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_407, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff 1", &iter_map_32, sizeof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_408, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L74), &_Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_445, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L75), &_Type_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_466, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L76), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_444, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L83", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L83), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_444, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L84", NULL, sizeof(array_int_2_32_32), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L84), &_Type_array_int_2_32_32_Utils, NULL, NULL, &scope_475, 1, 6}
};
static const MappingScope scope_404 = {
  "TM_lib_internal::C_P027_flatten_sections_qdiff/ C_P027_flatten_sections_qdiff_TM_lib_internal",
  scope_404_entries, 8,
};

/* TM_lib_internal::C_P021_fs_struct_to_array/ C_P021_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_403_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_section_int_T_TM), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_419, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_3), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_3_Utils, NULL, NULL, &scope_468, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P021_section_array_T_TM), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P021_section_array_T_TM_Utils, NULL, NULL, &scope_468, 1, 5}
};
static const MappingScope scope_403 = {
  "TM_lib_internal::C_P021_fs_struct_to_array/ C_P021_fs_struct_to_array_TM_lib_internal",
  scope_403_entries, 6,
};

/* TM_lib_internal::C_P021_fs_flatten_array/ C_P021_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_402_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L1), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_sectionlist_array_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L2), &_Type_P021_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_467, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L7), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, flat), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 9}
};
static const MappingScope scope_402 = {
  "TM_lib_internal::C_P021_fs_flatten_array/ C_P021_fs_flatten_array_TM_lib_internal",
  scope_402_entries, 10,
};

/* TM_lib_internal::C_P041_flatten_sections/ C_P041_flatten_sections_TM_lib_internal */
static const MappingEntry scope_401_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, Flattened), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P041_fs_flatten_array 1", &iter_foldi_99, sizeof(outC_C_P041_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_405, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P041_fs_struct_to_array 1", &iter_map_33, sizeof(outC_C_P041_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_406, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_3_33), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_3_33_Utils, NULL, NULL, &scope_467, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P041_OBU_sectionlist_int_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L75), &_Type_P041_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_424, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L76), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L78), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_3_33_99), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_3_33_99_Utils, NULL, NULL, &scope_470, 1, 6}
};
static const MappingScope scope_401 = {
  "TM_lib_internal::C_P041_flatten_sections/ C_P041_flatten_sections_TM_lib_internal",
  scope_401_entries, 8,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/ C_P027V1_tracksim_compr_o_TM_conversions_baseline2 */
static const MappingEntry scope_400_entries[28] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 26},
  /* 1 */ { MAP_OUTPUT, "P027V1_sections_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, P027V1_sections_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 27},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027_flatten_sections_qdiff 1", NULL, sizeof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_404, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_397, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L1), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_442, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_432), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L209), &_Type_array_int_432_Utils, NULL, NULL, &scope_484, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L214), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L217", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L217), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_466, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 15 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_465, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L383", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L383), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L385", NULL, sizeof(array_int_68), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L385), &_Type_array_int_68_Utils, NULL, NULL, &scope_485, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L422", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L422), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L423", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L423), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L424", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L424), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L425", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L425), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_444, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L426", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L426), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L429", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L429), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L430", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L430), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L431", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L431), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_400 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/ C_P027V1_tracksim_compr_o_TM_conversions_baseline2",
  scope_400_entries, 28,
};

/* TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal */
static const MappingEntry scope_399_entries[19] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 8 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_PACKET), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L3), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 2},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 18 */ { MAP_OUTPUT, "nid_packet_meta", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, nid_packet_meta), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_399 = {
  "TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal",
  scope_399_entries, 19,
};

/* TM_lib_internal::C_P021_flatten_sections/ C_P021_flatten_sections_TM_lib_internal */
static const MappingEntry scope_398_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, Flattened), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_fs_flatten_array 1", &iter_foldi_231, sizeof(outC_C_P021_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_402, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_fs_struct_to_array 1", &iter_map_33, sizeof(outC_C_P021_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_403, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_3_33), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_3_33_Utils, NULL, NULL, &scope_467, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P021_OBU_sectionlist_int_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L75), &_Type_P021_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_420, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L76), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L78), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_3_33_231), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_3_33_231_Utils, NULL, NULL, &scope_483, 1, 6}
};
static const MappingScope scope_398 = {
  "TM_lib_internal::C_P021_flatten_sections/ C_P021_flatten_sections_TM_lib_internal",
  scope_398_entries, 8,
};

/* TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal */
static const MappingEntry scope_397_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "p_size", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_397 = {
  "TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal",
  scope_397_entries, 6,
};

/* TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal */
static const MappingEntry scope_396_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, DataOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_396 = {
  "TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal",
  scope_396_entries, 15,
};

/* TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal */
static const MappingEntry scope_395_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Acc", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, Acc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L2), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L29), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 2}
};
static const MappingScope scope_395 = {
  "TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal",
  scope_395_entries, 10,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_394_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_388_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_388_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_394 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_394_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_393_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_389_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_389_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_393 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_393_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_392_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_390_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_390_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_392 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_392_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_391_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_390_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_390_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_391 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_391_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_390_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_390_entries[0], isActive_kcg_bool_kcg_false, &scope_391, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_390_entries[0], isActive_kcg_bool_kcg_true, &scope_392, 1, 2}
};
static const MappingScope scope_390 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_390_entries, 3,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_389_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_389_entries[0], isActive_kcg_bool_kcg_false, &scope_390, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_389_entries[0], isActive_kcg_bool_kcg_true, &scope_393, 1, 2}
};
static const MappingScope scope_389 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_389_entries, 3,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_388_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_388_entries[0], isActive_kcg_bool_kcg_false, &scope_389, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_388_entries[0], isActive_kcg_bool_kcg_true, &scope_394, 1, 2}
};
static const MappingScope scope_388 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_388_entries, 3,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_387_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_388, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_387 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_387_entries, 6,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversions */
static const MappingEntry scope_386_entries[38] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 36},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 37},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_387, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P041_flatten_sections 1", NULL, sizeof(outC_C_P041_flatten_sections_TM_lib_internal), offsetof(outC_C_P041_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_401, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_399, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_397, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_trackside_int_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L1), &_Type_P041_trackside_int_T_TM_Utils, NULL, NULL, &scope_421, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_395), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L209), &_Type_array_int_395_Utils, NULL, NULL, &scope_479, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 19 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L368", NULL, sizeof(P041_trackide_sectionlist_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L368), &_Type_P041_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_422, 1, 22},
  /* 21 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 22 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 24 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_5), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L373), &_Type_array_int_5_Utils, NULL, NULL, &scope_464, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L375", NULL, sizeof(P041_section_int_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L375), &_Type_P041_section_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_477, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L380", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L380), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_6), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L381), &_Type_array_int_6_Utils, NULL, NULL, &scope_460, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L383", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L383), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_105), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L384), &_Type_array_int_105_Utils, NULL, NULL, &scope_458, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L385", NULL, sizeof(P041_OBU_sectionlist_int_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L385), &_Type_P041_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_424, 1, 33},
  /* 34 */ { MAP_LOCAL, "_L386", NULL, sizeof(array_10404), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L386), &_Type_array_10404_Utils, NULL, NULL, &scope_461, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L388", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L388), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 35},
  /* 37 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_386 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversions",
  scope_386_entries, 38,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_385_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_379_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_379_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_385 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_385_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_384_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_380_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_380_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_384 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_384_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_383_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_381_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_381_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_383 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_383_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_382_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_381_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_381_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_382 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_382_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_381_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_381_entries[0], isActive_kcg_bool_kcg_false, &scope_382, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_381_entries[0], isActive_kcg_bool_kcg_true, &scope_383, 1, 2}
};
static const MappingScope scope_381 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_381_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_380_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_380_entries[0], isActive_kcg_bool_kcg_false, &scope_381, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_380_entries[0], isActive_kcg_bool_kcg_true, &scope_384, 1, 2}
};
static const MappingScope scope_380 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_380_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_379_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_379_entries[0], isActive_kcg_bool_kcg_false, &scope_380, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_379_entries[0], isActive_kcg_bool_kcg_true, &scope_385, 1, 2}
};
static const MappingScope scope_379 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_379_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_378_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_379, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_378 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_378_entries, 6,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2 */
static const MappingEntry scope_377_entries[39] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 34},
  /* 1 */ { MAP_OUTPUT, "P027V1_body_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, P027V1_body_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 35},
  /* 2 */ { MAP_OUTPUT, "P027V1_sections", NULL, sizeof(_2_P027V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, P027V1_sections), &_Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_443, 1, 36},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_378, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_399, 1, 1},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 3", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Context_3), NULL, NULL, NULL, &scope_399, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L1), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_439, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_494), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L209), &_Type_array_int_494_Utils, NULL, NULL, &scope_476, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 19 */ { MAP_LOCAL, "_L367", NULL, sizeof(P027V1_trackside_sectionlist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L367), &_Type_P027V1_trackside_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_441, 1, 21},
  /* 20 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L369", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L369), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_466, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 23 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 24 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_460, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L383", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L383), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 23},
  /* 26 */ { MAP_LOCAL, "_L385", NULL, sizeof(_2_P027V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L385), &_Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_443, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L386", NULL, sizeof(array_10421), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L386), &_Type_array_10421_Utils, NULL, NULL, &scope_463, 1, 24},
  /* 28 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 30 */ { MAP_LOCAL, "_L394", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L394), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_442, 1, 28},
  /* 31 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 32 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L400), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 33 */ { MAP_LOCAL, "_L402", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L402), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 31},
  /* 34 */ { MAP_LOCAL, "_L403", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L403), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L405", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L405), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 33},
  /* 36 */ { MAP_OUTPUT, "meta_first_section", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, meta_first_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 37 */ { MAP_LOCAL, "n_iter_k", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, n_iter_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 38 */ { MAP_OUTPUT, "n_iter_k_out", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, n_iter_k_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37}
};
static const MappingScope scope_377 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2",
  scope_377_entries, 39,
};

/* TM_lib_internal::SEND_WriteMessageHeader/ SEND_WriteMessageHeader_TM_lib_internal */
static const MappingEntry scope_376_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_TM_lib_internal), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_395, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 5}
};
static const MappingScope scope_376 = {
  "TM_lib_internal::SEND_WriteMessageHeader/ SEND_WriteMessageHeader_TM_lib_internal",
  scope_376_entries, 26,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections/ C_P027V1_tracksim_merge_s_TM_conversions_baseline2 */
static const MappingEntry scope_375_entries[21] = {
  /* 0 */ { MAP_OUTPUT, "Packets_Out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, Packets_Out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 20},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section 2", NULL, sizeof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, Context_2), NULL, NULL, NULL, &scope_400, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_356, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteMessageHeader 1", NULL, sizeof(outC_SEND_WriteMessageHeader_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_376, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L431", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L431), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L432", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L432), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L433", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L433), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L434", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L434), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L435", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L435), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L436", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L436), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L437", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L437), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L438", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L438), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L439", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L439), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L440", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L440), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_442, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L441", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L441), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L442", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L442), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L443", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L443), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L446", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L446), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L447", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L447), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L448", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L448), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19}
};
static const MappingScope scope_375 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_merge_sections/ C_P027V1_tracksim_merge_s_TM_conversions_baseline2",
  scope_375_entries, 21,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_374_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_368_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_368_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_374 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_374_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_373_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_369_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_369_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_373 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_373_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_372_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_370_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_370_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_372 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_372_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_371_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_370_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_370_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_371 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_371_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_370_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_370_entries[0], isActive_kcg_bool_kcg_false, &scope_371, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_370_entries[0], isActive_kcg_bool_kcg_true, &scope_372, 1, 2}
};
static const MappingScope scope_370 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_370_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_369_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_369_entries[0], isActive_kcg_bool_kcg_false, &scope_370, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_369_entries[0], isActive_kcg_bool_kcg_true, &scope_373, 1, 2}
};
static const MappingScope scope_369 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_369_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_368_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_368_entries[0], isActive_kcg_bool_kcg_false, &scope_369, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_368_entries[0], isActive_kcg_bool_kcg_true, &scope_374, 1, 2}
};
static const MappingScope scope_368 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_368_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_367_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_368, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_367 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_367_entries, 6,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversions */
static const MappingEntry scope_366_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 35},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 36},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_367, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_flatten_sections 1", NULL, sizeof(outC_C_P021_flatten_sections_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_398, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_399, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_397, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L1), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_417, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_396), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L209), &_Type_array_int_396_Utils, NULL, NULL, &scope_474, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 19 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L369", NULL, sizeof(P021_trackide_sectionlist_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L369), &_Type_P021_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_418, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 23 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_465, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L375", NULL, sizeof(P021_section_int_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L375), &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_419, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_477, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L380", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L380), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_482, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_5), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L381), &_Type_array_int_5_Utils, NULL, NULL, &scope_464, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L383", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L383), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_104), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L384), &_Type_array_int_104_Utils, NULL, NULL, &scope_462, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L385", NULL, sizeof(P021_OBU_sectionlist_int_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L385), &_Type_P021_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_420, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L386", NULL, sizeof(array_10565), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L386), &_Type_array_10565_Utils, NULL, NULL, &scope_472, 1, 33},
  /* 34 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L388", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L388), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 34},
  /* 36 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_366 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversions",
  scope_366_entries, 37,
};

/* TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_365_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_359_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_359_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_365 = {
  "TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_365_entries, 2,
};

/* TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_364_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_360_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_360_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_364 = {
  "TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_364_entries, 2,
};

/* TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_363_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_361_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_361_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_363 = {
  "TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_363_entries, 2,
};

/* TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_362_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_361_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_361_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_362 = {
  "TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_362_entries, 2,
};

/* TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_361_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_361_entries[0], isActive_kcg_bool_kcg_false, &scope_362, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_361_entries[0], isActive_kcg_bool_kcg_true, &scope_363, 1, 2}
};
static const MappingScope scope_361 = {
  "TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_361_entries, 3,
};

/* TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_360_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_360_entries[0], isActive_kcg_bool_kcg_false, &scope_361, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_360_entries[0], isActive_kcg_bool_kcg_true, &scope_364, 1, 2}
};
static const MappingScope scope_360 = {
  "TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_360_entries, 3,
};

/* TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_359_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_359_entries[0], isActive_kcg_bool_kcg_false, &scope_360, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_359_entries[0], isActive_kcg_bool_kcg_true, &scope_365, 1, 2}
};
static const MappingScope scope_359 = {
  "TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_359_entries, 3,
};

/* TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_358_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_359, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_358 = {
  "TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_358_entries, 6,
};

/* TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2 */
static const MappingEntry scope_357_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 35},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 36},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_358, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_397, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P072V1_trackside_int_T_TM_baseline2), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L1), &_Type_P072V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_459, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_228), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L209), &_Type_array_int_228_Utils, NULL, NULL, &scope_481, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 11 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 16 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 17 */ { MAP_LOCAL, "_L365", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L365), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 18 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 19 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L367), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 20 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 22 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 23 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 24 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_17), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L373), &_Type_array_int_17_Utils, NULL, NULL, &scope_473, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L383", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L383), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_272), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L384), &_Type_array_int_272_Utils, NULL, NULL, &scope_487, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L388", NULL, sizeof(X_TEXT_trackside_T_TM), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L388), &_Type_X_TEXT_trackside_T_TM_Utils, NULL, NULL, &scope_416, 1, 33},
  /* 31 */ { MAP_LOCAL, "_L389", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L389), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 32 */ { MAP_LOCAL, "_L390", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L390), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 34 */ { MAP_LOCAL, "_L392", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L392), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 35 */ { MAP_LOCAL, "_L393", NULL, sizeof(Q_DIR), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, _L393), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 34},
  /* 36 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_357 = {
  "TM_conversions_baseline2::C_P072V1_tracksim_compr/ C_P072V1_tracksim_compr_TM_conversions_baseline2",
  scope_357_entries, 37,
};

/* TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal */
static const MappingEntry scope_356_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, DataOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseDataElement 1", &iter_mapwi_500, sizeof(outC_SEND_WriteBaliseDataElement_TM_lib_internal), offsetof(outC_SEND_MessageData_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_396, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_bool), offsetof(outC_SEND_MessageData_TM_lib_internal, _L403), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L404", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L404), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L406", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L406), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L407", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L407), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L408), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L413", NULL, sizeof(array_int_500_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L413), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_486, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L414", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L414), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L415", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L415), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 10}
};
static const MappingScope scope_356 = {
  "TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal",
  scope_356_entries, 12,
};

/* TM_lib_internal::SEND_WriteBaliseMessageHeader/ SEND_WriteBaliseMessageHeader_TM_lib_internal */
static const MappingEntry scope_355_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_TM_lib_internal), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_395, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 5}
};
static const MappingScope scope_355 = {
  "TM_lib_internal::SEND_WriteBaliseMessageHeader/ SEND_WriteBaliseMessageHeader_TM_lib_internal",
  scope_355_entries, 26,
};

/* TM_trackside::Write_P041/ Write_P041_TM_trackside */
static const MappingEntry scope_354_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P041_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P041_tracksim_compr 1", NULL, sizeof(outC_C_P041_tracksim_compr_TM_conversions), offsetof(outC_Write_P041_TM_trackside, Context_1), NULL, NULL, NULL, &scope_386, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P041_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_356, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P041_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_355, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_trackside_int_T_TM), offsetof(outC_Write_P041_TM_trackside, _L1), &_Type_P041_trackside_int_T_TM_Utils, NULL, NULL, &scope_421, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P041_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P041_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P041_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 13}
};
static const MappingScope scope_354 = {
  "TM_trackside::Write_P041/ Write_P041_TM_trackside",
  scope_354_entries, 17,
};

/* TM_trackside_baseline2::Write_P027V1/ Write_P027V1_TM_trackside_baseline2 */
static const MappingEntry scope_353_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 1 */ { MAP_OUTPUT, "PacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, PacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 25},
  /* 2 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_compr_body 1", NULL, sizeof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, Context_1), NULL, NULL, NULL, &scope_377, 1, 3},
  /* 3 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_merge_sections 1", &iter_foldwi_33, sizeof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _3_Context_1), NULL, NULL, NULL, &scope_375, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_356, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteMessageHeader 1", NULL, sizeof(outC_SEND_WriteMessageHeader_TM_lib_internal), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_376, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L1), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_439, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 14},
  /* 18 */ { MAP_LOCAL, "_L45", NULL, sizeof(_2_P027V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L45), &_Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_443, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L46), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L50), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 21 */ { MAP_LOCAL, "_L51", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L51), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L54", NULL, sizeof(array_int_33), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L54), &_Type_array_int_33_Utils, NULL, NULL, &scope_469, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L55", NULL, sizeof(array_int_33), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L55), &_Type_array_int_33_Utils, NULL, NULL, &scope_469, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L56), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23}
};
static const MappingScope scope_353 = {
  "TM_trackside_baseline2::Write_P027V1/ Write_P027V1_TM_trackside_baseline2",
  scope_353_entries, 26,
};

/* TM_trackside::Write_P021/ Write_P021_TM_trackside */
static const MappingEntry scope_352_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P021_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P021_tracksim_compr 1", NULL, sizeof(outC_C_P021_tracksim_compr_TM_conversions), offsetof(outC_Write_P021_TM_trackside, Context_1), NULL, NULL, NULL, &scope_366, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P021_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_356, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P021_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_355, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_Write_P021_TM_trackside, _L1), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_417, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P021_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P021_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P021_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 13}
};
static const MappingScope scope_352 = {
  "TM_trackside::Write_P021/ Write_P021_TM_trackside",
  scope_352_entries, 17,
};

/* TM_trackside_baseline2::Write_P072V1/ Write_P072V1_TM_trackside_baseline2 */
static const MappingEntry scope_351_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P072V1_TM_trackside_baseline2, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P072V1_TM_trackside_baseline2, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P072V1_tracksim_compr 1", NULL, sizeof(outC_C_P072V1_tracksim_compr_TM_conversions_baseline2), offsetof(outC_Write_P072V1_TM_trackside_baseline2, Context_1), NULL, NULL, NULL, &scope_357, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_356, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_355, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P072V1_trackside_int_T_TM_baseline2), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _L1), &_Type_P072V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_459, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_426, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_427, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P072V1_TM_trackside_baseline2, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_428, 1, 13}
};
static const MappingScope scope_351 = {
  "TM_trackside_baseline2::Write_P072V1/ Write_P072V1_TM_trackside_baseline2",
  scope_351_entries, 17,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams/ compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:then: */
static const MappingEntry scope_350_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_348_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L2_IfBlock1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, &scope_348_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L3_IfBlock1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, &scope_348_entries[0], isActive_kcg_bool_kcg_true, &scope_425, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L4_IfBlock1), &_Type_Telegram_T_BG_Types_Pkg_Utils, &scope_348_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L5_IfBlock1), &_Type_Telegram_T_BG_Types_Pkg_Utils, &scope_348_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 0}
};
static const MappingScope scope_350 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams/ compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:then:",
  scope_350_entries, 5,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams/ compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else: */
static const MappingEntry scope_349_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L11_IfBlock1), &_Type_kcg_bool_Utils, &scope_348_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_349 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams/ compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:",
  scope_349_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams/ compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1: */
static const MappingEntry scope_348_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_348_entries[0], isActive_kcg_bool_kcg_false, &scope_349, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_348_entries[0], isActive_kcg_bool_kcg_true, &scope_350, 1, 2}
};
static const MappingScope scope_348 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams/ compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:",
  scope_348_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams/ compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport */
static const MappingEntry scope_347_entries[8] = {
  /* 0 */ { MAP_LOCAL, "HeaderIsEqual", NULL, sizeof(kcg_bool), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, HeaderIsEqual), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_348, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L1), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L2), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L3), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L4), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_OUTPUT, "isEqual", NULL, sizeof(kcg_bool), offsetof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport, isEqual), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_347 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams/ compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport",
  scope_347_entries, 8,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:then: */
static const MappingEntry scope_346_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_330_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_346 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:then:",
  scope_346_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:then: */
static const MappingEntry scope_345_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L17_IfBlock1), &_Type_kcg_int_Utils, &scope_331_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_345 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:then:",
  scope_345_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:then: */
static const MappingEntry scope_344_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L18_IfBlock1), &_Type_kcg_int_Utils, &scope_332_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_344 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:then:",
  scope_344_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:then: */
static const MappingEntry scope_343_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L19_IfBlock1), &_Type_kcg_int_Utils, &scope_333_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_343 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:then:",
  scope_343_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_342_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L110_IfBlock1), &_Type_kcg_int_Utils, &scope_334_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_342 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:then:",
  scope_342_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_341_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L111_IfBlock1), &_Type_kcg_int_Utils, &scope_335_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_341 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:then:",
  scope_341_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_340_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L112_IfBlock1), &_Type_kcg_int_Utils, &scope_336_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_340 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:else:then:",
  scope_340_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_339_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L113_IfBlock1), &_Type_kcg_int_Utils, &scope_337_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_339 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:else:else:then:",
  scope_339_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_338_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_337_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_338 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:else:else:else:",
  scope_338_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_337_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_337_entries[0], isActive_kcg_bool_kcg_false, &scope_338, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_337_entries[0], isActive_kcg_bool_kcg_true, &scope_339, 1, 2}
};
static const MappingScope scope_337 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:else:else:",
  scope_337_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_336_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_336_entries[0], isActive_kcg_bool_kcg_false, &scope_337, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_336_entries[0], isActive_kcg_bool_kcg_true, &scope_340, 1, 2}
};
static const MappingScope scope_336 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:else:",
  scope_336_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_335_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_335_entries[0], isActive_kcg_bool_kcg_false, &scope_336, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_335_entries[0], isActive_kcg_bool_kcg_true, &scope_341, 1, 2}
};
static const MappingScope scope_335 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:else:",
  scope_335_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else: */
static const MappingEntry scope_334_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_334_entries[0], isActive_kcg_bool_kcg_false, &scope_335, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_334_entries[0], isActive_kcg_bool_kcg_true, &scope_342, 1, 2}
};
static const MappingScope scope_334 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:else:",
  scope_334_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else: */
static const MappingEntry scope_333_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_333_entries[0], isActive_kcg_bool_kcg_false, &scope_334, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_333_entries[0], isActive_kcg_bool_kcg_true, &scope_343, 1, 2}
};
static const MappingScope scope_333 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:else:",
  scope_333_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else: */
static const MappingEntry scope_332_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _5_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_332_entries[0], isActive_kcg_bool_kcg_false, &scope_333, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_332_entries[0], isActive_kcg_bool_kcg_true, &scope_344, 1, 2}
};
static const MappingScope scope_332 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:else:",
  scope_332_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else: */
static const MappingEntry scope_331_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_331_entries[0], isActive_kcg_bool_kcg_false, &scope_332, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_331_entries[0], isActive_kcg_bool_kcg_true, &scope_345, 1, 2}
};
static const MappingScope scope_331 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:",
  scope_331_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1: */
static const MappingEntry scope_330_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_330_entries[0], isActive_kcg_bool_kcg_false, &scope_331, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_330_entries[0], isActive_kcg_bool_kcg_true, &scope_346, 1, 2}
};
static const MappingScope scope_330 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:",
  scope_330_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport */
static const MappingEntry scope_329_entries[2] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_330, 1, 0},
  /* 1 */ { MAP_OUTPUT, "outTotal", NULL, sizeof(kcg_int), offsetof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport, outTotal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_329 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal/ convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport",
  scope_329_entries, 2,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck/ simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport */
static const MappingEntry scope_328_entries[12] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L1), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 3},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(N_PIG), offsetof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L15), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(N_PIG), offsetof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L3), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_OUTPUT, "telegramAlreadyInGroup", NULL, sizeof(kcg_bool), offsetof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport, telegramAlreadyInGroup), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11}
};
static const MappingScope scope_328 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck/ simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport",
  scope_328_entries, 12,
};

/* MessageLibBaseline2::Send_P041/ Send_P041_MessageLibBaseline2 */
static const MappingEntry scope_327_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg36", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, ck_every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P041_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P041 1", NULL, sizeof(outC_Write_P041_TM_trackside), offsetof(outC_Send_P041_MessageLibBaseline2, Context_1), NULL, &scope_327_entries[0], isActive_kcg_bool_kcg_true, &scope_354, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P041_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P041_trackside_int_T_TM), offsetof(outC_Send_P041_MessageLibBaseline2, _L4), &_Type_P041_trackside_int_T_TM_Utils, NULL, NULL, &scope_421, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P041_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_327 = {
  "MessageLibBaseline2::Send_P041/ Send_P041_MessageLibBaseline2",
  scope_327_entries, 9,
};

/* MessageLibBaseline2::Send_P027V1/ Send_P027V1_MessageLibBaseline2 */
static const MappingEntry scope_326_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg35", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, ck_every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P027V1_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside_baseline2::Write_P027V1 1", NULL, sizeof(outC_Write_P027V1_TM_trackside_baseline2), offsetof(outC_Send_P027V1_MessageLibBaseline2, Context_1), NULL, &scope_326_entries[0], isActive_kcg_bool_kcg_true, &scope_353, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L4), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_439, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_326 = {
  "MessageLibBaseline2::Send_P027V1/ Send_P027V1_MessageLibBaseline2",
  scope_326_entries, 9,
};

/* MessageLibBaseline2::Send_P021/ Send_P021_MessageLibBaseline2 */
static const MappingEntry scope_325_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg34", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, ck_every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P021_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P021 1", NULL, sizeof(outC_Write_P021_TM_trackside), offsetof(outC_Send_P021_MessageLibBaseline2, Context_1), NULL, &scope_325_entries[0], isActive_kcg_bool_kcg_true, &scope_352, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P021_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_Send_P021_MessageLibBaseline2, _L4), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_417, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P021_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_325 = {
  "MessageLibBaseline2::Send_P021/ Send_P021_MessageLibBaseline2",
  scope_325_entries, 9,
};

/* MessageLibBaseline2::Send_P072V1/ Send_P072V1_MessageLibBaseline2 */
static const MappingEntry scope_324_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg33", NULL, sizeof(kcg_bool), offsetof(outC_Send_P072V1_MessageLibBaseline2, ck_every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P072V1_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside_baseline2::Write_P072V1 1", NULL, sizeof(outC_Write_P072V1_TM_trackside_baseline2), offsetof(outC_Send_P072V1_MessageLibBaseline2, Context_1), NULL, &scope_324_entries[0], isActive_kcg_bool_kcg_true, &scope_351, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P072V1_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P072V1_trackside_int_T_TM_baseline2), offsetof(outC_Send_P072V1_MessageLibBaseline2, _L4), &_Type_P072V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_459, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P072V1_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P072V1_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P072V1_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P072V1_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_324 = {
  "MessageLibBaseline2::Send_P072V1/ Send_P072V1_MessageLibBaseline2",
  scope_324_entries, 9,
};

/* TM_conversions::TOOLS_convert_engineering_location/ TOOLS_convert_engineering_TM_conversions */
static const MappingEntry scope_323_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Loc_real", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, Loc_real), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_323 = {
  "TM_conversions::TOOLS_convert_engineering_location/ TOOLS_convert_engineering_TM_conversions",
  scope_323_entries, 5,
};

/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance/ Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibIntmath::Abs 1/ */
static const MappingEntry scope_322_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, A_Output_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L8_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_322 = {
  "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance/ Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibIntmath::Abs 1/",
  scope_322_entries, 6,
};

/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance/ Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt */
static const MappingEntry scope_321_entries[15] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L14), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L5), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_OUTPUT, "distance_BB", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt, distance_BB), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_322, 1, 0}
};
static const MappingScope scope_321 = {
  "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance/ Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt",
  scope_321_entries, 15,
};

/* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition/ setIntervalBGPosition_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_320_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg, _L2), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg, _L4), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L7", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg, _L7), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 2},
  /* 4 */ { MAP_OUTPUT, "outUpdateBGPosition", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg, outUpdateBGPosition), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 4}
};
static const MappingScope scope_320 = {
  "Receive_TrackSide_Msg_Pkg::setIntervalBGPosition/ setIntervalBGPosition_Receive_TrackSide_Msg_Pkg",
  scope_320_entries, 5,
};

/* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition/ setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_319_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L1), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(M_DUP), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L10), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(M_DUP), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L11), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L2), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 1},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(N_PIG), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L3), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L4), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(N_PIG), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L6), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L7), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L8", NULL, sizeof(N_PIG), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L8), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 8},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 16 */ { MAP_OUTPUT, "outUpdateBGPosition", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg, outUpdateBGPosition), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 16}
};
static const MappingScope scope_319 = {
  "Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition/ setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg",
  scope_319_entries, 17,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree/ setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport */
static const MappingEntry scope_318_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L1), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L2), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L4), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 2},
  /* 5 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_OUTPUT, "outTelegrams", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport, outTelegrams), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 6}
};
static const MappingScope scope_318 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree/ setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport",
  scope_318_entries, 7,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram/ replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport */
static const MappingEntry scope_317_entries[25] = {
  /* 0 */ { MAP_LOCAL, "@kcg32", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, ck_every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 21},
  /* 1 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams 1", NULL, sizeof(outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, Context_1), NULL, &scope_317_entries[0], isActive_kcg_bool_kcg_true, &scope_347, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L1), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L17", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L17), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L18", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L18), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L2", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L2), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 3},
  /* 14 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L4), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 5},
  /* 17 */ { MAP_LOCAL, "_L6", NULL, sizeof(N_PIG), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L6), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 6},
  /* 18 */ { MAP_LOCAL, "_L7", NULL, sizeof(N_PIG), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L7), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 7},
  /* 19 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 20 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 21 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 22 */ { MAP_LOCAL, "doReplace", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, doReplace), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 23 */ { MAP_OUTPUT, "outIsDuplicate", NULL, sizeof(kcg_bool), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, outIsDuplicate), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 24 */ { MAP_OUTPUT, "outTelegrams", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, outTelegrams), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 23}
};
static const MappingScope scope_317 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram/ replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport",
  scope_317_entries, 25,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB/ checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport */
static const MappingEntry scope_316_entries[20] = {
  /* 0 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L18), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L2), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 0},
  /* 7 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 11 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 12 */ { MAP_LOCAL, "_L25", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L25), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L26", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L26), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_BG), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L27), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_C), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L28), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 17 */ { MAP_LOCAL, "_L3", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L3), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 1},
  /* 18 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 19 */ { MAP_OUTPUT, "outCollector", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, outCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 19}
};
static const MappingScope scope_316 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB/ checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport",
  scope_316_entries, 20,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector/ initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport */
static const MappingEntry scope_315_entries[14] = {
  /* 0 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal 1", NULL, sizeof(outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, Context_1), NULL, NULL, NULL, &scope_329, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L10), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L11), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L12), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L2), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_BG), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L3), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(N_TOTAL), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L4), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L6), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(NID_C), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L8), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 13 */ { MAP_OUTPUT, "outCollector", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport, outCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 13}
};
static const MappingScope scope_315 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector/ initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport",
  scope_315_entries, 14,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram/ findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:then: */
static const MappingEntry scope_314_entries[8] = {
  /* 0 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck 7", &iter_foldwi_8, sizeof(outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, Context_7), NULL, &scope_312_entries[0], isActive_kcg_bool_kcg_true, &scope_328, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L2_IfBlock1), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_312_entries[0], isActive_kcg_bool_kcg_true, &scope_434, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_10558), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L3_IfBlock1), &_Type_array_10558_Utils, &scope_312_entries[0], isActive_kcg_bool_kcg_true, &scope_471, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L4_IfBlock1), &_Type_kcg_int_Utils, &scope_312_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_312_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_312_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(N_PIG), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L7_IfBlock1), &_Type_N_PIG_Utils, &scope_312_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L9_IfBlock1), &_Type_kcg_bool_Utils, &scope_312_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_314 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram/ findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:then:",
  scope_314_entries, 8,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram/ findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else: */
static const MappingEntry scope_313_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L21_IfBlock1), &_Type_kcg_bool_Utils, &scope_312_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_313 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram/ findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:else:",
  scope_313_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram/ findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1: */
static const MappingEntry scope_312_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_312_entries[0], isActive_kcg_bool_kcg_false, &scope_313, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_312_entries[0], isActive_kcg_bool_kcg_true, &scope_314, 1, 2}
};
static const MappingScope scope_312 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram/ findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupportIfBlock1:",
  scope_312_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram/ findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport */
static const MappingEntry scope_311_entries[5] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_312, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L30", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L30), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_OUTPUT, "telegramAlreadyInGroup", NULL, sizeof(kcg_bool), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, telegramAlreadyInGroup), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "valid", NULL, sizeof(kcg_bool), offsetof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_311 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram/ findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport",
  scope_311_entries, 5,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19/ */
static const MappingEntry scope_310_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_310 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19/",
  scope_310_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18/ */
static const MappingEntry scope_309_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_309 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18/",
  scope_309_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17/ */
static const MappingEntry scope_308_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_308 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17/",
  scope_308_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16/ */
static const MappingEntry scope_307_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_307 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16/",
  scope_307_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15/ */
static const MappingEntry scope_306_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_306 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15/",
  scope_306_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14/ */
static const MappingEntry scope_305_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_305 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14/",
  scope_305_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13/ */
static const MappingEntry scope_304_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_304 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13/",
  scope_304_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12/ */
static const MappingEntry scope_303_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_303 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12/",
  scope_303_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11/ */
static const MappingEntry scope_302_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_302 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11/",
  scope_302_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10/ */
static const MappingEntry scope_301_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_301 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10/",
  scope_301_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9/ */
static const MappingEntry scope_300_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_300 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9/",
  scope_300_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8/ */
static const MappingEntry scope_299_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_299 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8/",
  scope_299_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7/ */
static const MappingEntry scope_298_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_298 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7/",
  scope_298_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6/ */
static const MappingEntry scope_297_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_297 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6/",
  scope_297_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5/ */
static const MappingEntry scope_296_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_296 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5/",
  scope_296_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4/ */
static const MappingEntry scope_295_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_295 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4/",
  scope_295_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3/ */
static const MappingEntry scope_294_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_294 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3/",
  scope_294_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2/ */
static const MappingEntry scope_293_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_293 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2/",
  scope_293_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1/ */
static const MappingEntry scope_292_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_292 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1/",
  scope_292_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets */
static const MappingEntry scope_291_entries[54] = {
  /* 0 */ { MAP_LOCAL, "B_data_in", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_in), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 20},
  /* 1 */ { MAP_LOCAL, "B_data_link", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_link), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 22},
  /* 2 */ { MAP_LOCAL, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 21},
  /* 3 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, Balise_data_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 53},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P041 1", NULL, sizeof(outC_Send_P041_MessageLibBaseline2), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, Context_1), NULL, NULL, NULL, &scope_327, 1, 9},
  /* 5 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1", NULL, 0, 0, NULL, NULL, NULL, &scope_292, 1, 0},
  /* 6 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10", NULL, 0, 0, NULL, NULL, NULL, &scope_301, 1, 10},
  /* 7 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11", NULL, 0, 0, NULL, NULL, NULL, &scope_302, 1, 11},
  /* 8 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12", NULL, 0, 0, NULL, NULL, NULL, &scope_303, 1, 12},
  /* 9 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13", NULL, 0, 0, NULL, NULL, NULL, &scope_304, 1, 13},
  /* 10 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14", NULL, 0, 0, NULL, NULL, NULL, &scope_305, 1, 14},
  /* 11 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15", NULL, 0, 0, NULL, NULL, NULL, &scope_306, 1, 15},
  /* 12 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16", NULL, 0, 0, NULL, NULL, NULL, &scope_307, 1, 16},
  /* 13 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17", NULL, 0, 0, NULL, NULL, NULL, &scope_308, 1, 17},
  /* 14 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18", NULL, 0, 0, NULL, NULL, NULL, &scope_309, 1, 18},
  /* 15 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19", NULL, 0, 0, NULL, NULL, NULL, &scope_310, 1, 19},
  /* 16 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2", NULL, 0, 0, NULL, NULL, NULL, &scope_293, 1, 1},
  /* 17 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3", NULL, 0, 0, NULL, NULL, NULL, &scope_294, 1, 2},
  /* 18 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4", NULL, 0, 0, NULL, NULL, NULL, &scope_295, 1, 3},
  /* 19 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5", NULL, 0, 0, NULL, NULL, NULL, &scope_296, 1, 4},
  /* 20 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6", NULL, 0, 0, NULL, NULL, NULL, &scope_297, 1, 5},
  /* 21 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7", NULL, 0, 0, NULL, NULL, NULL, &scope_298, 1, 6},
  /* 22 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8", NULL, 0, 0, NULL, NULL, NULL, &scope_299, 1, 7},
  /* 23 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9", NULL, 0, 0, NULL, NULL, NULL, &scope_300, 1, 8},
  /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 31},
  /* 25 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L12", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 40},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 39},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 38},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 37},
  /* 32 */ { MAP_LOCAL, "_L18", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 36},
  /* 33 */ { MAP_LOCAL, "_L19", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 23},
  /* 35 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L21", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 33},
  /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 43},
  /* 38 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L24), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 44},
  /* 39 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 45},
  /* 40 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L26), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 46},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L28), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 47},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L29), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 48},
  /* 43 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 24},
  /* 44 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 49},
  /* 45 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L31), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L32", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L32), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 52},
  /* 47 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51},
  /* 48 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 25},
  /* 49 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 26},
  /* 50 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 27},
  /* 51 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 28},
  /* 52 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 29},
  /* 53 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 30}
};
static const MappingScope scope_291 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041/ Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets",
  scope_291_entries, 54,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19/ */
static const MappingEntry scope_290_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_290 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19/",
  scope_290_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18/ */
static const MappingEntry scope_289_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_289 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18/",
  scope_289_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17/ */
static const MappingEntry scope_288_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_288 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17/",
  scope_288_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16/ */
static const MappingEntry scope_287_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_287 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16/",
  scope_287_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15/ */
static const MappingEntry scope_286_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_286 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15/",
  scope_286_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14/ */
static const MappingEntry scope_285_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_285 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14/",
  scope_285_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13/ */
static const MappingEntry scope_284_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_284 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13/",
  scope_284_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12/ */
static const MappingEntry scope_283_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_283 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12/",
  scope_283_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11/ */
static const MappingEntry scope_282_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_282 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11/",
  scope_282_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10/ */
static const MappingEntry scope_281_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_281 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10/",
  scope_281_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9/ */
static const MappingEntry scope_280_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_280 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9/",
  scope_280_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8/ */
static const MappingEntry scope_279_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_279 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8/",
  scope_279_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7/ */
static const MappingEntry scope_278_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_278 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7/",
  scope_278_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6/ */
static const MappingEntry scope_277_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_277 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6/",
  scope_277_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5/ */
static const MappingEntry scope_276_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_276 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5/",
  scope_276_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4/ */
static const MappingEntry scope_275_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_275 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4/",
  scope_275_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3/ */
static const MappingEntry scope_274_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_274 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3/",
  scope_274_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2/ */
static const MappingEntry scope_273_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_273 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2/",
  scope_273_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1/ */
static const MappingEntry scope_272_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_272 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1/",
  scope_272_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets */
static const MappingEntry scope_271_entries[54] = {
  /* 0 */ { MAP_LOCAL, "B_data_in", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_in), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 20},
  /* 1 */ { MAP_LOCAL, "B_data_link", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_link), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 22},
  /* 2 */ { MAP_LOCAL, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 21},
  /* 3 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, Balise_data_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 53},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, Context_1), NULL, NULL, NULL, &scope_326, 1, 9},
  /* 5 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1", NULL, 0, 0, NULL, NULL, NULL, &scope_272, 1, 0},
  /* 6 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10", NULL, 0, 0, NULL, NULL, NULL, &scope_281, 1, 10},
  /* 7 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11", NULL, 0, 0, NULL, NULL, NULL, &scope_282, 1, 11},
  /* 8 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12", NULL, 0, 0, NULL, NULL, NULL, &scope_283, 1, 12},
  /* 9 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13", NULL, 0, 0, NULL, NULL, NULL, &scope_284, 1, 13},
  /* 10 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14", NULL, 0, 0, NULL, NULL, NULL, &scope_285, 1, 14},
  /* 11 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15", NULL, 0, 0, NULL, NULL, NULL, &scope_286, 1, 15},
  /* 12 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16", NULL, 0, 0, NULL, NULL, NULL, &scope_287, 1, 16},
  /* 13 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17", NULL, 0, 0, NULL, NULL, NULL, &scope_288, 1, 17},
  /* 14 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18", NULL, 0, 0, NULL, NULL, NULL, &scope_289, 1, 18},
  /* 15 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19", NULL, 0, 0, NULL, NULL, NULL, &scope_290, 1, 19},
  /* 16 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2", NULL, 0, 0, NULL, NULL, NULL, &scope_273, 1, 1},
  /* 17 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3", NULL, 0, 0, NULL, NULL, NULL, &scope_274, 1, 2},
  /* 18 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4", NULL, 0, 0, NULL, NULL, NULL, &scope_275, 1, 3},
  /* 19 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5", NULL, 0, 0, NULL, NULL, NULL, &scope_276, 1, 4},
  /* 20 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6", NULL, 0, 0, NULL, NULL, NULL, &scope_277, 1, 5},
  /* 21 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7", NULL, 0, 0, NULL, NULL, NULL, &scope_278, 1, 6},
  /* 22 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8", NULL, 0, 0, NULL, NULL, NULL, &scope_279, 1, 7},
  /* 23 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9", NULL, 0, 0, NULL, NULL, NULL, &scope_280, 1, 8},
  /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 31},
  /* 25 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L12", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 40},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 39},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 38},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 37},
  /* 32 */ { MAP_LOCAL, "_L18", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 36},
  /* 33 */ { MAP_LOCAL, "_L19", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 23},
  /* 35 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L21", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 33},
  /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 43},
  /* 38 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L24), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 44},
  /* 39 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 45},
  /* 40 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L26), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 46},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L28), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 47},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L29), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 48},
  /* 43 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 24},
  /* 44 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 49},
  /* 45 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L31), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L32", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L32), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 52},
  /* 47 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51},
  /* 48 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 25},
  /* 49 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 26},
  /* 50 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 27},
  /* 51 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 28},
  /* 52 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 29},
  /* 53 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 30}
};
static const MappingScope scope_271 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027/ Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets",
  scope_271_entries, 54,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19/ */
static const MappingEntry scope_270_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_270 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19/",
  scope_270_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18/ */
static const MappingEntry scope_269_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_269 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18/",
  scope_269_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17/ */
static const MappingEntry scope_268_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_268 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17/",
  scope_268_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16/ */
static const MappingEntry scope_267_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_267 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16/",
  scope_267_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15/ */
static const MappingEntry scope_266_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_266 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15/",
  scope_266_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14/ */
static const MappingEntry scope_265_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_265 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14/",
  scope_265_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13/ */
static const MappingEntry scope_264_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_264 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13/",
  scope_264_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12/ */
static const MappingEntry scope_263_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_263 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12/",
  scope_263_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11/ */
static const MappingEntry scope_262_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_262 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11/",
  scope_262_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10/ */
static const MappingEntry scope_261_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_261 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10/",
  scope_261_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9/ */
static const MappingEntry scope_260_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_260 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9/",
  scope_260_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8/ */
static const MappingEntry scope_259_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_259 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8/",
  scope_259_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7/ */
static const MappingEntry scope_258_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_258 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7/",
  scope_258_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6/ */
static const MappingEntry scope_257_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_257 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6/",
  scope_257_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5/ */
static const MappingEntry scope_256_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_256 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5/",
  scope_256_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4/ */
static const MappingEntry scope_255_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_255 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4/",
  scope_255_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3/ */
static const MappingEntry scope_254_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_254 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3/",
  scope_254_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2/ */
static const MappingEntry scope_253_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_253 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2/",
  scope_253_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1/ */
static const MappingEntry scope_252_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_252 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1/",
  scope_252_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets */
static const MappingEntry scope_251_entries[54] = {
  /* 0 */ { MAP_LOCAL, "B_data_in", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_in), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 20},
  /* 1 */ { MAP_LOCAL, "B_data_link", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_link), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 22},
  /* 2 */ { MAP_LOCAL, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 21},
  /* 3 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, Balise_data_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 53},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, Context_1), NULL, NULL, NULL, &scope_325, 1, 9},
  /* 5 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1", NULL, 0, 0, NULL, NULL, NULL, &scope_252, 1, 0},
  /* 6 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10", NULL, 0, 0, NULL, NULL, NULL, &scope_261, 1, 10},
  /* 7 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11", NULL, 0, 0, NULL, NULL, NULL, &scope_262, 1, 11},
  /* 8 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12", NULL, 0, 0, NULL, NULL, NULL, &scope_263, 1, 12},
  /* 9 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13", NULL, 0, 0, NULL, NULL, NULL, &scope_264, 1, 13},
  /* 10 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14", NULL, 0, 0, NULL, NULL, NULL, &scope_265, 1, 14},
  /* 11 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15", NULL, 0, 0, NULL, NULL, NULL, &scope_266, 1, 15},
  /* 12 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16", NULL, 0, 0, NULL, NULL, NULL, &scope_267, 1, 16},
  /* 13 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17", NULL, 0, 0, NULL, NULL, NULL, &scope_268, 1, 17},
  /* 14 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18", NULL, 0, 0, NULL, NULL, NULL, &scope_269, 1, 18},
  /* 15 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19", NULL, 0, 0, NULL, NULL, NULL, &scope_270, 1, 19},
  /* 16 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2", NULL, 0, 0, NULL, NULL, NULL, &scope_253, 1, 1},
  /* 17 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3", NULL, 0, 0, NULL, NULL, NULL, &scope_254, 1, 2},
  /* 18 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4", NULL, 0, 0, NULL, NULL, NULL, &scope_255, 1, 3},
  /* 19 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5", NULL, 0, 0, NULL, NULL, NULL, &scope_256, 1, 4},
  /* 20 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6", NULL, 0, 0, NULL, NULL, NULL, &scope_257, 1, 5},
  /* 21 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7", NULL, 0, 0, NULL, NULL, NULL, &scope_258, 1, 6},
  /* 22 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8", NULL, 0, 0, NULL, NULL, NULL, &scope_259, 1, 7},
  /* 23 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9", NULL, 0, 0, NULL, NULL, NULL, &scope_260, 1, 8},
  /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 31},
  /* 25 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L12", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 40},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 39},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 38},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 37},
  /* 32 */ { MAP_LOCAL, "_L18", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 36},
  /* 33 */ { MAP_LOCAL, "_L19", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 23},
  /* 35 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L21", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 33},
  /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 43},
  /* 38 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L24), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 44},
  /* 39 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 45},
  /* 40 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L26), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 46},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L28), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 47},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L29), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 48},
  /* 43 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 24},
  /* 44 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 49},
  /* 45 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L31), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L32", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L32), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 52},
  /* 47 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51},
  /* 48 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 25},
  /* 49 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 26},
  /* 50 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 27},
  /* 51 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 28},
  /* 52 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 29},
  /* 53 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 30}
};
static const MappingScope scope_251 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021/ Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets",
  scope_251_entries, 54,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19/ */
static const MappingEntry scope_250_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_250 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19/",
  scope_250_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18/ */
static const MappingEntry scope_249_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_249 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18/",
  scope_249_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17/ */
static const MappingEntry scope_248_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_248 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17/",
  scope_248_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16/ */
static const MappingEntry scope_247_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_247 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16/",
  scope_247_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15/ */
static const MappingEntry scope_246_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_246 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15/",
  scope_246_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14/ */
static const MappingEntry scope_245_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_245 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14/",
  scope_245_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13/ */
static const MappingEntry scope_244_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_244 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13/",
  scope_244_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12/ */
static const MappingEntry scope_243_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_243 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12/",
  scope_243_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11/ */
static const MappingEntry scope_242_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_242 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11/",
  scope_242_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10/ */
static const MappingEntry scope_241_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_241 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10/",
  scope_241_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9/ */
static const MappingEntry scope_240_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_240 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9/",
  scope_240_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8/ */
static const MappingEntry scope_239_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_239 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8/",
  scope_239_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7/ */
static const MappingEntry scope_238_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_238 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7/",
  scope_238_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6/ */
static const MappingEntry scope_237_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_237 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6/",
  scope_237_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5/ */
static const MappingEntry scope_236_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_236 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5/",
  scope_236_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4/ */
static const MappingEntry scope_235_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_235 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4/",
  scope_235_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3/ */
static const MappingEntry scope_234_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_234 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3/",
  scope_234_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2/ */
static const MappingEntry scope_233_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_233 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2/",
  scope_233_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1/ */
static const MappingEntry scope_232_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_232 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1/",
  scope_232_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets */
static const MappingEntry scope_231_entries[54] = {
  /* 0 */ { MAP_LOCAL, "B_data_in", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_in), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 20},
  /* 1 */ { MAP_LOCAL, "B_data_link", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_link), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 22},
  /* 2 */ { MAP_LOCAL, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 21},
  /* 3 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, Balise_data_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 53},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P072V1 1", NULL, sizeof(outC_Send_P072V1_MessageLibBaseline2), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, Context_1), NULL, NULL, NULL, &scope_324, 1, 9},
  /* 5 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1", NULL, 0, 0, NULL, NULL, NULL, &scope_232, 1, 0},
  /* 6 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10", NULL, 0, 0, NULL, NULL, NULL, &scope_241, 1, 10},
  /* 7 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11", NULL, 0, 0, NULL, NULL, NULL, &scope_242, 1, 11},
  /* 8 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12", NULL, 0, 0, NULL, NULL, NULL, &scope_243, 1, 12},
  /* 9 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13", NULL, 0, 0, NULL, NULL, NULL, &scope_244, 1, 13},
  /* 10 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14", NULL, 0, 0, NULL, NULL, NULL, &scope_245, 1, 14},
  /* 11 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15", NULL, 0, 0, NULL, NULL, NULL, &scope_246, 1, 15},
  /* 12 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16", NULL, 0, 0, NULL, NULL, NULL, &scope_247, 1, 16},
  /* 13 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17", NULL, 0, 0, NULL, NULL, NULL, &scope_248, 1, 17},
  /* 14 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18", NULL, 0, 0, NULL, NULL, NULL, &scope_249, 1, 18},
  /* 15 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19", NULL, 0, 0, NULL, NULL, NULL, &scope_250, 1, 19},
  /* 16 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2", NULL, 0, 0, NULL, NULL, NULL, &scope_233, 1, 1},
  /* 17 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3", NULL, 0, 0, NULL, NULL, NULL, &scope_234, 1, 2},
  /* 18 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4", NULL, 0, 0, NULL, NULL, NULL, &scope_235, 1, 3},
  /* 19 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5", NULL, 0, 0, NULL, NULL, NULL, &scope_236, 1, 4},
  /* 20 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6", NULL, 0, 0, NULL, NULL, NULL, &scope_237, 1, 5},
  /* 21 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7", NULL, 0, 0, NULL, NULL, NULL, &scope_238, 1, 6},
  /* 22 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8", NULL, 0, 0, NULL, NULL, NULL, &scope_239, 1, 7},
  /* 23 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9", NULL, 0, 0, NULL, NULL, NULL, &scope_240, 1, 8},
  /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 31},
  /* 25 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L12", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 40},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 39},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 38},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 37},
  /* 32 */ { MAP_LOCAL, "_L18", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 36},
  /* 33 */ { MAP_LOCAL, "_L19", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 23},
  /* 35 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L21", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 33},
  /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 43},
  /* 38 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L24), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 44},
  /* 39 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 45},
  /* 40 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L26), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 46},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L28), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 47},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L29), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 48},
  /* 43 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 24},
  /* 44 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 49},
  /* 45 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L31), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52},
  /* 47 */ { MAP_LOCAL, "_L33", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L33), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 51},
  /* 48 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 25},
  /* 49 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 26},
  /* 50 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 27},
  /* 51 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 28},
  /* 52 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 29},
  /* 53 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 30}
};
static const MappingScope scope_231 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short/ Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets",
  scope_231_entries, 54,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6/ */
static const MappingEntry scope_230_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_230 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6/",
  scope_230_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16/ */
static const MappingEntry scope_229_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_229 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16/",
  scope_229_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8/ */
static const MappingEntry scope_228_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_228 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8/",
  scope_228_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18/ */
static const MappingEntry scope_227_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_227 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18/",
  scope_227_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15/ */
static const MappingEntry scope_226_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_226 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15/",
  scope_226_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5/ */
static const MappingEntry scope_225_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_225 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5/",
  scope_225_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7/ */
static const MappingEntry scope_224_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_224 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7/",
  scope_224_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17/ */
static const MappingEntry scope_223_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_223 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17/",
  scope_223_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14/ */
static const MappingEntry scope_222_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_222 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14/",
  scope_222_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19/ */
static const MappingEntry scope_221_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_221 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19/",
  scope_221_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13/ */
static const MappingEntry scope_220_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_220 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13/",
  scope_220_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12/ */
static const MappingEntry scope_219_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_219 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12/",
  scope_219_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9/ */
static const MappingEntry scope_218_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_218 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9/",
  scope_218_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10/ */
static const MappingEntry scope_217_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_217 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10/",
  scope_217_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11/ */
static const MappingEntry scope_216_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_216 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11/",
  scope_216_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4/ */
static const MappingEntry scope_215_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_215 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4/",
  scope_215_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3/ */
static const MappingEntry scope_214_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_214 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3/",
  scope_214_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2/ */
static const MappingEntry scope_213_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_213 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2/",
  scope_213_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1/ */
static const MappingEntry scope_212_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L1_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 1}
};
static const MappingScope scope_212 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_PacketsUNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1/",
  scope_212_entries, 2,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets */
static const MappingEntry scope_211_entries[54] = {
  /* 0 */ { MAP_LOCAL, "B_data_in", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_in), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 20},
  /* 1 */ { MAP_LOCAL, "B_data_link", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_link), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 22},
  /* 2 */ { MAP_LOCAL, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 21},
  /* 3 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, Balise_data_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 53},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P072V1 1", NULL, sizeof(outC_Send_P072V1_MessageLibBaseline2), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, Context_1), NULL, NULL, NULL, &scope_324, 1, 9},
  /* 5 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 1", NULL, 0, 0, NULL, NULL, NULL, &scope_212, 1, 0},
  /* 6 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 10", NULL, 0, 0, NULL, NULL, NULL, &scope_217, 1, 5},
  /* 7 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 11", NULL, 0, 0, NULL, NULL, NULL, &scope_216, 1, 4},
  /* 8 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 12", NULL, 0, 0, NULL, NULL, NULL, &scope_219, 1, 7},
  /* 9 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 13", NULL, 0, 0, NULL, NULL, NULL, &scope_220, 1, 8},
  /* 10 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 14", NULL, 0, 0, NULL, NULL, NULL, &scope_222, 1, 11},
  /* 11 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 15", NULL, 0, 0, NULL, NULL, NULL, &scope_226, 1, 15},
  /* 12 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 16", NULL, 0, 0, NULL, NULL, NULL, &scope_229, 1, 18},
  /* 13 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 17", NULL, 0, 0, NULL, NULL, NULL, &scope_223, 1, 12},
  /* 14 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 18", NULL, 0, 0, NULL, NULL, NULL, &scope_227, 1, 16},
  /* 15 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 19", NULL, 0, 0, NULL, NULL, NULL, &scope_221, 1, 10},
  /* 16 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 2", NULL, 0, 0, NULL, NULL, NULL, &scope_213, 1, 1},
  /* 17 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 3", NULL, 0, 0, NULL, NULL, NULL, &scope_214, 1, 2},
  /* 18 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 4", NULL, 0, 0, NULL, NULL, NULL, &scope_215, 1, 3},
  /* 19 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 5", NULL, 0, 0, NULL, NULL, NULL, &scope_225, 1, 14},
  /* 20 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 6", NULL, 0, 0, NULL, NULL, NULL, &scope_230, 1, 19},
  /* 21 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 7", NULL, 0, 0, NULL, NULL, NULL, &scope_224, 1, 13},
  /* 22 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 8", NULL, 0, 0, NULL, NULL, NULL, &scope_228, 1, 17},
  /* 23 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Packet 9", NULL, 0, 0, NULL, NULL, NULL, &scope_218, 1, 6},
  /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 31},
  /* 25 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L12", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 40},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 39},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 38},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 37},
  /* 32 */ { MAP_LOCAL, "_L18", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 36},
  /* 33 */ { MAP_LOCAL, "_L19", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 23},
  /* 35 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L21", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 33},
  /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 43},
  /* 38 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L24), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 44},
  /* 39 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 45},
  /* 40 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L26), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 46},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L28), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 47},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L29), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 48},
  /* 43 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 24},
  /* 44 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 49},
  /* 45 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L31), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52},
  /* 47 */ { MAP_LOCAL, "_L33", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L33), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 51},
  /* 48 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 25},
  /* 49 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 26},
  /* 50 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 27},
  /* 51 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 28},
  /* 52 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 29},
  /* 53 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 30}
};
static const MappingScope scope_211 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072/ Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets",
  scope_211_entries, 54,
};

/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation/ Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibIntmath::Min 1/ */
static const MappingEntry scope_210_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, Mi_Output_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L21_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L22_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L24_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L25_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_210 = {
  "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation/ Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibIntmath::Min 1/",
  scope_210_entries, 5,
};

/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation/ Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt */
static const MappingEntry scope_209_entries[28] = {
  /* 0 */ { MAP_OUTPUT, "PIG_0_out", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, PIG_0_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::TOOLS_convert_engineering_location 1", NULL, sizeof(outC_TOOLS_convert_engineering_TM_conversions), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _1_Context_1), NULL, NULL, NULL, &scope_323, 1, 1},
  /* 2 */ { MAP_OUTPUT, "TrainPass", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, TrainPass), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Interdistance 1", NULL, sizeof(outC_Balise_Interdistance_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_321, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L16), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L47), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L48), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L51), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L65", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L65), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L66), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L68), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L71", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L71), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L73), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L75), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L76", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L76), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L77), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L82), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L90", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L90), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L91), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L92), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L93), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L94), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L95", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L95), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_EXPANDED, "math::Min 1", NULL, 0, 0, NULL, NULL, NULL, &scope_210, 1, 2}
};
static const MappingScope scope_209 = {
  "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation/ Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt",
  scope_209_entries, 28,
};

/* UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets/ No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt */
static const MappingEntry scope_208_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt, Balise_data_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L30", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt, _L30), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt, _L31), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L32", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt, _L32), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L36", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt, _L36), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 0}
};
static const MappingScope scope_208 = {
  "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets/ No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt",
  scope_208_entries, 6,
};

/* Receive_TrackSide_Msg_Pkg::addTelegram/ addTelegram_Receive_TrackSide_Msg_PkgIfBlock1:then: */
static const MappingEntry scope_207_entries[28] = {
  /* 0 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree 3", &iter_mapw_8, sizeof(outC_setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, Context_3), NULL, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_318, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition 1", NULL, sizeof(outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, Context_1), NULL, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_319, 1, 1},
  /* 2 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::setIntervalBGPosition 1", NULL, sizeof(outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _1_Context_1), NULL, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_320, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L15_IfBlock1), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L17_IfBlock1), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L21_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L35_IfBlock1), &_Type_kcg_int_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L36", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L36_IfBlock1), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_434, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L37", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L37_IfBlock1), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_434, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L39", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L39_IfBlock1), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_434, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L40_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L41_IfBlock1), &_Type_Telegram_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L45", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L45_IfBlock1), &_Type_Telegram_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L46", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L46_IfBlock1), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L47", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L47_IfBlock1), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_int), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L48_IfBlock1), &_Type_kcg_int_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 26},
  /* 18 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_int), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L49_IfBlock1), &_Type_kcg_int_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 25},
  /* 19 */ { MAP_LOCAL, "_L50", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L50_IfBlock1), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 24},
  /* 20 */ { MAP_LOCAL, "_L51", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L51_IfBlock1), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 23},
  /* 21 */ { MAP_LOCAL, "_L52", NULL, sizeof(NID_BG), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L52_IfBlock1), &_Type_NID_BG_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 22},
  /* 22 */ { MAP_LOCAL, "_L53", NULL, sizeof(NID_C), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L53_IfBlock1), &_Type_NID_C_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L54_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 20},
  /* 24 */ { MAP_LOCAL, "_L55", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L55_IfBlock1), &_Type_Telegram_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 27},
  /* 25 */ { MAP_LOCAL, "_L6", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L6_IfBlock1), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 5},
  /* 26 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L8_IfBlock1), &_Type_kcg_int_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4},
  /* 27 */ { MAP_LOCAL, "_L9", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L9_IfBlock1), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 3}
};
static const MappingScope scope_207 = {
  "Receive_TrackSide_Msg_Pkg::addTelegram/ addTelegram_Receive_TrackSide_Msg_PkgIfBlock1:then:",
  scope_207_entries, 28,
};

/* Receive_TrackSide_Msg_Pkg::addTelegram/ addTelegram_Receive_TrackSide_Msg_PkgIfBlock1:else: */
static const MappingEntry scope_206_entries[23] = {
  /* 0 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram 1", &iter_mapw_8, sizeof(outC_replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _2_Context_1), NULL, &scope_205_entries[0], isActive_kcg_bool_kcg_false, &scope_317, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L19_IfBlock1), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, &scope_452, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L10_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L11_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L13_IfBlock1), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, &scope_434, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L14_IfBlock1), &_Type_kcg_int_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L155_IfBlock1), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, &scope_434, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L16_IfBlock1), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, &scope_434, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L17", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L174_IfBlock1), &_Type_Telegram_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, &scope_435, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L18_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L20_IfBlock1), &_Type_Telegram_T_BG_Types_Pkg_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, &scope_435, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L21", NULL, sizeof(array_bool_8), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L213_IfBlock1), &_Type_array_bool_8_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, &scope_480, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L22_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L27_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 17},
  /* 14 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L29_IfBlock1), &_Type_kcg_int_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L30_IfBlock1), &_Type_kcg_int_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 19},
  /* 16 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L31_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L32_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L33_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 22},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L4_IfBlock1), &_Type_kcg_int_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L5_IfBlock1), &_Type_kcg_int_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 3},
  /* 21 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L87_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 4},
  /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, _L96_IfBlock1), &_Type_kcg_bool_Utils, &scope_205_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 5}
};
static const MappingScope scope_206 = {
  "Receive_TrackSide_Msg_Pkg::addTelegram/ addTelegram_Receive_TrackSide_Msg_PkgIfBlock1:else:",
  scope_206_entries, 23,
};

/* Receive_TrackSide_Msg_Pkg::addTelegram/ addTelegram_Receive_TrackSide_Msg_PkgIfBlock1: */
static const MappingEntry scope_205_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_205_entries[0], isActive_kcg_bool_kcg_false, &scope_206, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_205_entries[0], isActive_kcg_bool_kcg_true, &scope_207, 1, 2}
};
static const MappingScope scope_205 = {
  "Receive_TrackSide_Msg_Pkg::addTelegram/ addTelegram_Receive_TrackSide_Msg_PkgIfBlock1:",
  scope_205_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::addTelegram/ addTelegram_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_204_entries[5] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_205, 1, 0},
  /* 1 */ { MAP_OUTPUT, "outBGisComplete", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, outBGisComplete), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_OUTPUT, "outCollector", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, outCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 1},
  /* 3 */ { MAP_OUTPUT, "outIsDuplicate", NULL, sizeof(kcg_bool), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, outIsDuplicate), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_OUTPUT, "outTelegramArray", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_addTelegram_Receive_TrackSide_Msg_Pkg, outTelegramArray), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 1, 2}
};
static const MappingScope scope_204 = {
  "Receive_TrackSide_Msg_Pkg::addTelegram/ addTelegram_Receive_TrackSide_Msg_Pkg",
  scope_204_entries, 5,
};

/* Receive_TrackSide_Msg_Pkg::checkInit/ checkInit_Receive_TrackSide_Msg_PkgIfBlock1:then: */
static const MappingEntry scope_203_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkInit_Receive_TrackSide_Msg_Pkg, _L1_IfBlock1), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_201_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 0}
};
static const MappingScope scope_203 = {
  "Receive_TrackSide_Msg_Pkg::checkInit/ checkInit_Receive_TrackSide_Msg_PkgIfBlock1:then:",
  scope_203_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::checkInit/ checkInit_Receive_TrackSide_Msg_PkgIfBlock1:else: */
static const MappingEntry scope_202_entries[3] = {
  /* 0 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector 1", NULL, sizeof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport), offsetof(outC_checkInit_Receive_TrackSide_Msg_Pkg, Context_1), NULL, &scope_201_entries[0], isActive_kcg_bool_kcg_false, &scope_315, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L19", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_checkInit_Receive_TrackSide_Msg_Pkg, _L19_IfBlock1), &_Type_Telegram_T_BG_Types_Pkg_Utils, &scope_201_entries[0], isActive_kcg_bool_kcg_false, &scope_435, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L20", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkInit_Receive_TrackSide_Msg_Pkg, _L20_IfBlock1), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_201_entries[0], isActive_kcg_bool_kcg_false, &scope_452, 1, 2}
};
static const MappingScope scope_202 = {
  "Receive_TrackSide_Msg_Pkg::checkInit/ checkInit_Receive_TrackSide_Msg_PkgIfBlock1:else:",
  scope_202_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::checkInit/ checkInit_Receive_TrackSide_Msg_PkgIfBlock1: */
static const MappingEntry scope_201_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_checkInit_Receive_TrackSide_Msg_Pkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_201_entries[0], isActive_kcg_bool_kcg_false, &scope_202, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_201_entries[0], isActive_kcg_bool_kcg_true, &scope_203, 1, 2}
};
static const MappingScope scope_201 = {
  "Receive_TrackSide_Msg_Pkg::checkInit/ checkInit_Receive_TrackSide_Msg_PkgIfBlock1:",
  scope_201_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::checkInit/ checkInit_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_200_entries[7] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_201, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_checkInit_Receive_TrackSide_Msg_Pkg, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_checkInit_Receive_TrackSide_Msg_Pkg, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_checkInit_Receive_TrackSide_Msg_Pkg, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkInit_Receive_TrackSide_Msg_Pkg, _L8), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 5},
  /* 5 */ { MAP_LOCAL, "isDefined", NULL, sizeof(kcg_bool), offsetof(outC_checkInit_Receive_TrackSide_Msg_Pkg, isDefined), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_OUTPUT, "outCollector", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkInit_Receive_TrackSide_Msg_Pkg, outCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 6}
};
static const MappingScope scope_200 = {
  "Receive_TrackSide_Msg_Pkg::checkInit/ checkInit_Receive_TrackSide_Msg_Pkg",
  scope_200_entries, 7,
};

/* Receive_TrackSide_Msg_Pkg::checkTelegram/ checkTelegram_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_199_entries[36] = {
  /* 0 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::BaliseSupport::checkSingleBB 1", NULL, sizeof(outC_checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _2_Context_1), NULL, NULL, NULL, &scope_316, 1, 2},
  /* 1 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram 1", NULL, sizeof(outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, Context_1), NULL, NULL, NULL, &scope_311, 1, 0},
  /* 2 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::BaliseSupport::initCollector 1", NULL, sizeof(outC_initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _1_Context_1), NULL, NULL, NULL, &scope_315, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L2), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L32", NULL, sizeof(NID_BG), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L32), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L40", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L40), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L55", NULL, sizeof(N_PIG), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L55), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L56", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L56), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L61", NULL, sizeof(NID_BG), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L61), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L62), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L63), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_int), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L64), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L65", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L65), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_int), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L66), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L68), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 20 */ { MAP_LOCAL, "_L69", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L69), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L70), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 22 */ { MAP_LOCAL, "_L72", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L72), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 24},
  /* 23 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L73), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 24 */ { MAP_LOCAL, "_L74", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L74), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 25},
  /* 25 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L86), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26},
  /* 26 */ { MAP_LOCAL, "_L87", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L87), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 27 */ { MAP_LOCAL, "_L88", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L88), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 28 */ { MAP_LOCAL, "_L92", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L92), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 29},
  /* 29 */ { MAP_LOCAL, "_L93", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L93), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 30},
  /* 30 */ { MAP_LOCAL, "_L94", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, _L94), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 1, 31},
  /* 31 */ { MAP_LOCAL, "newBGInitNeeded", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, newBGInitNeeded), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 32 */ { MAP_OUTPUT, "outBGchangedEarly", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, outBGchangedEarly), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 33 */ { MAP_OUTPUT, "outCollector", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, outCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 32},
  /* 34 */ { MAP_OUTPUT, "outTelegramArray", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, outTelegramArray), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 1, 33},
  /* 35 */ { MAP_OUTPUT, "outTelegramNotInGroup", NULL, sizeof(kcg_bool), offsetof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg, outTelegramNotInGroup), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34}
};
static const MappingScope scope_199 = {
  "Receive_TrackSide_Msg_Pkg::checkTelegram/ checkTelegram_Receive_TrackSide_Msg_Pkg",
  scope_199_entries, 36,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB/ updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport */
static const MappingEntry scope_198_entries[14] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L2), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L3), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L6), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L7), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(NID_BG), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L8), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 6},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(NID_C), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L9), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_OUTPUT, "outCollector", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport, outCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 13}
};
static const MappingScope scope_198 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB/ updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport",
  scope_198_entries, 14,
};

/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance/ checkMaxAbsOdoDistance_BasicLocationFunctions_Pkgmath::Abs 1/ */
static const MappingEntry scope_197_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_int), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, A_Output_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L8_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_197 = {
  "BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance/ checkMaxAbsOdoDistance_BasicLocationFunctions_Pkgmath::Abs 1/",
  scope_197_entries, 6,
};

/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance/ checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg */
static const MappingEntry scope_196_entries[11] = {
  /* 0 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L2), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_411, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L3), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_411, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L4), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L5), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L8), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_411, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, _L9), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_OUTPUT, "isLessThanOrEqual", NULL, sizeof(kcg_bool), offsetof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg, isLessThanOrEqual), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_197, 1, 0}
};
static const MappingScope scope_196 = {
  "BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance/ checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg",
  scope_196_entries, 11,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P041/ Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises */
static const MappingEntry scope_195_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg31", NULL, sizeof(kcg_bool), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, ck_every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, B_data_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 12},
  /* 2 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P041 1", NULL, sizeof(outC_Test_BalisePackets_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _1_Context_1), NULL, &scope_195_entries[0], isActive_kcg_bool_kcg_true, &scope_291, 1, 0},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_1), NULL, NULL, NULL, &scope_209, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L15), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L17), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 4}
};
static const MappingScope scope_195 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P041/ Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises",
  scope_195_entries, 13,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P027/ Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises */
static const MappingEntry scope_194_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg30", NULL, sizeof(kcg_bool), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, ck_every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, B_data_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 12},
  /* 2 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P027 1", NULL, sizeof(outC_Test_BalisePackets_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _1_Context_1), NULL, &scope_194_entries[0], isActive_kcg_bool_kcg_true, &scope_271, 1, 0},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_1), NULL, NULL, NULL, &scope_209, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L15), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L17), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 4}
};
static const MappingScope scope_194 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P027/ Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises",
  scope_194_entries, 13,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P021/ Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises */
static const MappingEntry scope_193_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg29", NULL, sizeof(kcg_bool), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, ck_every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, B_data_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 12},
  /* 2 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P021 1", NULL, sizeof(outC_Test_BalisePackets_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _1_Context_1), NULL, &scope_193_entries[0], isActive_kcg_bool_kcg_true, &scope_251, 1, 0},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_1), NULL, NULL, NULL, &scope_209, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L15), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L17), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 4}
};
static const MappingScope scope_193 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P021/ Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises",
  scope_193_entries, 13,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short/ Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises */
static const MappingEntry scope_192_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg28", NULL, sizeof(kcg_bool), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, ck_every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, B_data_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 12},
  /* 2 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072_short 1", NULL, sizeof(outC_Test_BalisePackets_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _1_Context_1), NULL, &scope_192_entries[0], isActive_kcg_bool_kcg_true, &scope_231, 1, 0},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_1), NULL, NULL, NULL, &scope_209, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L15), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L17), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 4}
};
static const MappingScope scope_192 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short/ Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises",
  scope_192_entries, 13,
};

/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close/ Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt */
static const MappingEntry scope_191_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Error_out", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt, Error_out), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt, _L2), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt, _L20), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L21", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt, _L21), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt, _L22), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L23", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt, _L23), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt, _L24), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_191 = {
  "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close/ Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt",
  scope_191_entries, 10,
};

/* UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init/ Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt */
static const MappingEntry scope_190_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "BG_internal_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt, BG_internal_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt, _L2), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_478, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt, _L26), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L27", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt, _L27), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L28", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt, _L28), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt, _L30), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_190 = {
  "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init/ Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt",
  scope_190_entries, 9,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072/ Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises */
static const MappingEntry scope_189_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg27", NULL, sizeof(kcg_bool), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, ck_every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, B_data_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 12},
  /* 2 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Packets::Test_BalisePackets_P072 1", NULL, sizeof(outC_Test_BalisePackets_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Packets), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _1_Context_1), NULL, &scope_189_entries[0], isActive_kcg_bool_kcg_true, &scope_211, 1, 0},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_1), NULL, NULL, NULL, &scope_209, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L15), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L17), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 4}
};
static const MappingScope scope_189 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072/ Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises",
  scope_189_entries, 13,
};

/* UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified/ TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt */
static const MappingEntry scope_188_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg26", NULL, sizeof(kcg_bool), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, ck_every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, B_data_out), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 12},
  /* 2 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, Context_1), NULL, NULL, NULL, &scope_209, 1, 1},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, _1_Context_1), NULL, &scope_188_entries[0], isActive_kcg_bool_kcg_true, &scope_208, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, _L15), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, _L17), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, _L4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt, _L5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 4}
};
static const MappingScope scope_188 = {
  "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified/ TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt",
  scope_188_entries, 13,
};

/* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram/ manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_187_entries[20] = {
  /* 0 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 1 */ { MAP_LOCAL, "_L18", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L18), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 10},
  /* 2 */ { MAP_LOCAL, "_L19", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L19), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L20", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L20), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L21", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L21), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L46", NULL, sizeof(TelegramStore_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L46), &_Type_TelegramStore_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_453, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_bool), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L51), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_bool), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L55), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L7", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L7), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 4},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, _L9), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 12},
  /* 15 */ { MAP_OUTPUT, "outDecodedTelegram", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, outDecodedTelegram), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 17},
  /* 16 */ { MAP_OUTPUT, "outNeedStore", NULL, sizeof(kcg_bool), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, outNeedStore), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_OUTPUT, "outcenterOfBalisePosition", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, outcenterOfBalisePosition), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 18},
  /* 18 */ { MAP_OUTPUT, "outputPresent", NULL, sizeof(kcg_bool), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, outputPresent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_LOCAL, "storeValid", NULL, sizeof(kcg_bool), offsetof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg, storeValid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_187 = {
  "Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram/ manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg",
  scope_187_entries, 20,
};

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage/ updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport */
static const MappingEntry scope_186_entries[12] = {
  /* 0 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L2), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L3), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L6), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L7), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(NID_BG), offsetof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L8), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(NID_C), offsetof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport, _L9), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_OUTPUT, "outCollector", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport, outCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 11}
};
static const MappingScope scope_186 = {
  "Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage/ updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport",
  scope_186_entries, 12,
};

/* Receive_TrackSide_Msg_Pkg::manageTelegram/ manageTelegram_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_185_entries[29] = {
  /* 0 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::addTelegram 4", NULL, sizeof(outC_addTelegram_Receive_TrackSide_Msg_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, Context_4), NULL, NULL, NULL, &scope_204, 1, 2},
  /* 1 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::checkInit 1", NULL, sizeof(outC_checkInit_Receive_TrackSide_Msg_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, Context_1), NULL, NULL, NULL, &scope_200, 1, 1},
  /* 2 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::checkTelegram 1", NULL, sizeof(outC_checkTelegram_Receive_TrackSide_Msg_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _1_Context_1), NULL, NULL, NULL, &scope_199, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L47", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L47), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L51", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L51), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L53), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L54", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L54), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L58", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L58), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L6), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L60", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L60), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L63", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L63), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L64", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L64), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L65", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L65), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L66", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L66), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 17 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L68), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L69), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 19 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L70), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 20 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L72), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 21 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, _L73), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 22 */ { MAP_LOCAL, "isNotReceivedAlready", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, isNotReceivedAlready), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "needsReplace", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, needsReplace), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 24 */ { MAP_OUTPUT, "outBGisChangedEarly", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, outBGisChangedEarly), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 25 */ { MAP_OUTPUT, "outBGisComplete", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, outBGisComplete), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_OUTPUT, "outCollector", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, outCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 26},
  /* 27 */ { MAP_OUTPUT, "outStoresChanged", NULL, sizeof(kcg_bool), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, outStoresChanged), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 28 */ { MAP_OUTPUT, "outTelegramArray", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg, outTelegramArray), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 1, 27}
};
static const MappingScope scope_185 = {
  "Receive_TrackSide_Msg_Pkg::manageTelegram/ manageTelegram_Receive_TrackSide_Msg_Pkg",
  scope_185_entries, 29,
};

/* Receive_TrackSide_Msg_Pkg::checkOdometry/ checkOdometry_Receive_TrackSide_Msg_PkgIfBlock1:then: */
static const MappingEntry scope_184_entries[20] = {
  /* 0 */ { MAP_INSTANCE, "BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance 2", NULL, sizeof(outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, Context_2), NULL, &scope_182_entries[0], isActive_kcg_bool_kcg_true, &scope_196, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB 1", NULL, sizeof(outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, Context_1), NULL, &scope_182_entries[0], isActive_kcg_bool_kcg_true, &scope_198, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L10_IfBlock1), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, &scope_411, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L11_IfBlock1), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, &scope_411, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L12_IfBlock1), &_Type_kcg_int_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L13_IfBlock1), &_Type_kcg_int_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L14_IfBlock1), &_Type_kcg_bool_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L15_IfBlock1), &_Type_kcg_bool_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L16_IfBlock1), &_Type_kcg_bool_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L17_IfBlock1), &_Type_kcg_bool_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L18_IfBlock1), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 15},
  /* 11 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L19_IfBlock1), &_Type_kcg_bool_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L20", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L20_IfBlock1), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L21_IfBlock1), &_Type_kcg_bool_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L22_IfBlock1), &_Type_kcg_bool_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 19},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L6", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L6_IfBlock1), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, &scope_411, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L7", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L7_IfBlock1), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, &scope_410, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L9", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L9_IfBlock1), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 7}
};
static const MappingScope scope_184 = {
  "Receive_TrackSide_Msg_Pkg::checkOdometry/ checkOdometry_Receive_TrackSide_Msg_PkgIfBlock1:then:",
  scope_184_entries, 20,
};

/* Receive_TrackSide_Msg_Pkg::checkOdometry/ checkOdometry_Receive_TrackSide_Msg_PkgIfBlock1:else: */
static const MappingEntry scope_183_entries[3] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L31_IfBlock1), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_182_entries[0], isActive_kcg_bool_kcg_false, &scope_452, 1, 2}
};
static const MappingScope scope_183 = {
  "Receive_TrackSide_Msg_Pkg::checkOdometry/ checkOdometry_Receive_TrackSide_Msg_PkgIfBlock1:else:",
  scope_183_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::checkOdometry/ checkOdometry_Receive_TrackSide_Msg_PkgIfBlock1: */
static const MappingEntry scope_182_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_182_entries[0], isActive_kcg_bool_kcg_false, &scope_183, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_182_entries[0], isActive_kcg_bool_kcg_true, &scope_184, 1, 2}
};
static const MappingScope scope_182 = {
  "Receive_TrackSide_Msg_Pkg::checkOdometry/ checkOdometry_Receive_TrackSide_Msg_PkgIfBlock1:",
  scope_182_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::checkOdometry/ checkOdometry_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_181_entries[12] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_182, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L11), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_410, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L30", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, _L30), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 8},
  /* 8 */ { MAP_LOCAL, "isValid", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, isValid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_OUTPUT, "outBGIsChangedEarly", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, outBGIsChangedEarly), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_OUTPUT, "outCollector", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, outCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 11},
  /* 11 */ { MAP_OUTPUT, "outMessageComplete", NULL, sizeof(kcg_bool), offsetof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg, outMessageComplete), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_181 = {
  "Receive_TrackSide_Msg_Pkg::checkOdometry/ checkOdometry_Receive_TrackSide_Msg_Pkg",
  scope_181_entries, 12,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT/ Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises */
static const MappingEntry scope_180_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BaliseDataIn), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BaliseDataOut), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 11},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P021 1", NULL, sizeof(outC_Test_Balise_Sent_P021_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _1_Context_1), NULL, NULL, NULL, &scope_193, 1, 0},
  /* 4 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P027 1", NULL, sizeof(outC_Test_Balise_Sent_P027_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _2_Context_1), NULL, NULL, NULL, &scope_194, 1, 1},
  /* 5 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P041 1", NULL, sizeof(outC_Test_Balise_Sent_P041_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _3_Context_1), NULL, NULL, NULL, &scope_195, 1, 3},
  /* 6 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072 1", NULL, sizeof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _4_Context_1), NULL, NULL, NULL, &scope_189, 1, 6},
  /* 7 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _5_Context_1), NULL, NULL, NULL, &scope_191, 1, 8},
  /* 8 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_1), NULL, NULL, NULL, &scope_190, 1, 7},
  /* 9 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 3", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_3), NULL, NULL, NULL, &scope_188, 1, 2},
  /* 10 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 5", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_5), NULL, NULL, NULL, &scope_188, 1, 4},
  /* 11 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 6", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_6), NULL, NULL, NULL, &scope_188, 1, 5},
  /* 12 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 8", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_8), NULL, NULL, NULL, &scope_188, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L1), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L11), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L16), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_478, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L3), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L6), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L7), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L8), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L9), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 19}
};
static const MappingScope scope_180 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT/ Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises",
  scope_180_entries, 37,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 7/ */
static const MappingEntry scope_179_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, B_data_out_7), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L1_7), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2_7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L3_7), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 3}
};
static const MappingScope scope_179 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 7/",
  scope_179_entries, 4,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 6/ */
static const MappingEntry scope_178_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, B_data_out_6), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L1_6), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 3}
};
static const MappingScope scope_178 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 6/",
  scope_178_entries, 4,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 5/ */
static const MappingEntry scope_177_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, B_data_out_5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L1_5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 3}
};
static const MappingScope scope_177 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 5/",
  scope_177_entries, 4,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 4/ */
static const MappingEntry scope_176_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, B_data_out_4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L1_4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 3}
};
static const MappingScope scope_176 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 4/",
  scope_176_entries, 4,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 3/ */
static const MappingEntry scope_175_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, B_data_out_3), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L1_3), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 3}
};
static const MappingScope scope_175 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 3/",
  scope_175_entries, 4,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 2/ */
static const MappingEntry scope_174_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, B_data_out_2), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L1_2), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 3}
};
static const MappingScope scope_174 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 2/",
  scope_174_entries, 4,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 1/ */
static const MappingEntry scope_173_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, B_data_out_1), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L1_1), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 3}
};
static const MappingScope scope_173 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_BalisesUNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 1/",
  scope_173_entries, 4,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises */
static const MappingEntry scope_172_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BaliseDataIn), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BaliseDataOut), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 11},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072 1", NULL, sizeof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _1_Context_1), NULL, NULL, NULL, &scope_189, 1, 9},
  /* 4 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _2_Context_1), NULL, NULL, NULL, &scope_191, 1, 8},
  /* 5 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_1), NULL, NULL, NULL, &scope_190, 1, 7},
  /* 6 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_173, 1, 0},
  /* 7 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_174, 1, 1},
  /* 8 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_175, 1, 2},
  /* 9 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_176, 1, 3},
  /* 10 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_177, 1, 4},
  /* 11 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_178, 1, 5},
  /* 12 */ { MAP_EXPANDED, "UNISIG_Validation_Scenarios::test_InfraLibInt::No_Balise 7", NULL, 0, 0, NULL, NULL, NULL, &scope_179, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L1), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L11), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L16), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_478, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L3), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L6), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L7), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L8), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L9), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 19}
};
static const MappingScope scope_172 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single/ Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises",
  scope_172_entries, 37,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG023_300_8BT/ Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises */
static const MappingEntry scope_171_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BaliseDataIn), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BaliseDataOut), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 11},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072_short 1", NULL, sizeof(outC_Test_Balise_Sent_P072_short_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _2_Context_1), NULL, NULL, NULL, &scope_192, 1, 6},
  /* 4 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _3_Context_1), NULL, NULL, NULL, &scope_191, 1, 8},
  /* 5 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_1), NULL, NULL, NULL, &scope_190, 1, 7},
  /* 6 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 1", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _1_Context_1), NULL, NULL, NULL, &scope_188, 1, 2},
  /* 7 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 2", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_2), NULL, NULL, NULL, &scope_188, 1, 4},
  /* 8 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 3", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_3), NULL, NULL, NULL, &scope_188, 1, 5},
  /* 9 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 4", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_4), NULL, NULL, NULL, &scope_188, 1, 9},
  /* 10 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 5", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_5), NULL, NULL, NULL, &scope_188, 1, 0},
  /* 11 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 6", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_6), NULL, NULL, NULL, &scope_188, 1, 1},
  /* 12 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 7", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_7), NULL, NULL, NULL, &scope_188, 1, 3},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L1), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L11), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L16), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_478, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L3), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L6), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L7), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L8), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L9), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 19}
};
static const MappingScope scope_171 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG023_300_8BT/ Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises",
  scope_171_entries, 37,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG022_200_8BT/ Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises */
static const MappingEntry scope_170_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BaliseDataIn), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BaliseDataOut), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 11},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072 2", NULL, sizeof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_2), NULL, NULL, NULL, &scope_189, 1, 9},
  /* 4 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _3_Context_1), NULL, NULL, NULL, &scope_191, 1, 8},
  /* 5 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_1), NULL, NULL, NULL, &scope_190, 1, 7},
  /* 6 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 1", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _1_Context_1), NULL, NULL, NULL, &scope_188, 1, 2},
  /* 7 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 2", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _2_Context_2), NULL, NULL, NULL, &scope_188, 1, 4},
  /* 8 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 3", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_3), NULL, NULL, NULL, &scope_188, 1, 5},
  /* 9 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 5", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_5), NULL, NULL, NULL, &scope_188, 1, 0},
  /* 10 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 6", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_6), NULL, NULL, NULL, &scope_188, 1, 1},
  /* 11 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 7", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_7), NULL, NULL, NULL, &scope_188, 1, 3},
  /* 12 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 8", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_8), NULL, NULL, NULL, &scope_188, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L1), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L11), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L16), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_478, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L3), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L6), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L7), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L8), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L9), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 19}
};
static const MappingScope scope_170 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG022_200_8BT/ Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises",
  scope_170_entries, 37,
};

/* UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG021_100_8BT/ Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises */
static const MappingEntry scope_169_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 36},
  /* 1 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BaliseDataIn), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 10},
  /* 2 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, BaliseDataOut), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 11},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_Balise_Sent_P072 1", NULL, sizeof(outC_Test_Balise_Sent_P072_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _2_Context_1), NULL, NULL, NULL, &scope_189, 1, 6},
  /* 4 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _3_Context_1), NULL, NULL, NULL, &scope_191, 1, 8},
  /* 5 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_1), NULL, NULL, NULL, &scope_190, 1, 7},
  /* 6 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 1", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _1_Context_1), NULL, NULL, NULL, &scope_188, 1, 2},
  /* 7 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 2", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_2), NULL, NULL, NULL, &scope_188, 1, 4},
  /* 8 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 3", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_3), NULL, NULL, NULL, &scope_188, 1, 5},
  /* 9 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 4", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_4), NULL, NULL, NULL, &scope_188, 1, 9},
  /* 10 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 5", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_5), NULL, NULL, NULL, &scope_188, 1, 0},
  /* 11 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 6", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_6), NULL, NULL, NULL, &scope_188, 1, 1},
  /* 12 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::test_InfraLibInt::TEMPLATE_Balise_modified 7", NULL, sizeof(outC_TEMPLATE_Balise_modified_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, Context_7), NULL, NULL, NULL, &scope_188, 1, 3},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L1), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L11), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L16), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_478, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L2), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L3), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L4), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L5), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L6), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L7), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L8), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt), offsetof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises, _L9), &_Type_B_data_internal_T_UNISIG_Validation_Scenarios_test_InfraLibInt_Utils, NULL, NULL, &scope_438, 1, 19}
};
static const MappingScope scope_169 = {
  "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG021_100_8BT/ Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises",
  scope_169_entries, 37,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_168_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L4_IfBlock1), &_Type_Q_LINK_Utils, &scope_164_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_164_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_168 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:then:",
  scope_168_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_167_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L3_IfBlock1), &_Type_Q_LINK_Utils, &scope_165_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_165_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_167 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:then:",
  scope_167_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_166_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L1_IfBlock1), &_Type_Q_LINK_Utils, &scope_165_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_165_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_166 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:else:",
  scope_166_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_165_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_165_entries[0], isActive_kcg_bool_kcg_false, &scope_166, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_165_entries[0], isActive_kcg_bool_kcg_true, &scope_167, 1, 2}
};
static const MappingScope scope_165 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:",
  scope_165_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1: */
static const MappingEntry scope_164_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_164_entries[0], isActive_kcg_bool_kcg_false, &scope_165, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_164_entries[0], isActive_kcg_bool_kcg_true, &scope_168, 1, 2}
};
static const MappingScope scope_164 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:",
  scope_164_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversions */
static const MappingEntry scope_163_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_164, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_link", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_link_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, q_link_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_163 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversions",
  scope_163_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_BG/ CAST_Int_to_NID_BG_TM_conversions */
static const MappingEntry scope_162_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_bg", NULL, sizeof(NID_BG), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_162 = {
  "TM_conversions::CAST_Int_to_NID_BG/ CAST_Int_to_NID_BG_TM_conversions",
  scope_162_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions */
static const MappingEntry scope_161_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_c", NULL, sizeof(NID_C), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_161 = {
  "TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions",
  scope_161_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_MCOUNT/ CAST_Int_to_M_MCOUNT_TM_conversions */
static const MappingEntry scope_160_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "m_mcount", NULL, sizeof(M_MCOUNT), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, m_mcount), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_160 = {
  "TM_conversions::CAST_Int_to_M_MCOUNT/ CAST_Int_to_M_MCOUNT_TM_conversions",
  scope_160_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_159_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L6_IfBlock1), &_Type_M_DUP_Utils, &scope_153_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L7_IfBlock1), &_Type_kcg_bool_Utils, &scope_153_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_159 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:then:",
  scope_159_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_158_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L5", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L5_IfBlock1), &_Type_M_DUP_Utils, &scope_154_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L62_IfBlock1), &_Type_kcg_bool_Utils, &scope_154_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_158 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:then:",
  scope_158_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_157_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L4_IfBlock1), &_Type_M_DUP_Utils, &scope_155_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L53_IfBlock1), &_Type_kcg_bool_Utils, &scope_155_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_157 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:then:",
  scope_157_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_156_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_155_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L3_IfBlock1), &_Type_M_DUP_Utils, &scope_155_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_156 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:else:",
  scope_156_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_155_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_155_entries[0], isActive_kcg_bool_kcg_false, &scope_156, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_155_entries[0], isActive_kcg_bool_kcg_true, &scope_157, 1, 2}
};
static const MappingScope scope_155 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:",
  scope_155_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_154_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_154_entries[0], isActive_kcg_bool_kcg_false, &scope_155, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_154_entries[0], isActive_kcg_bool_kcg_true, &scope_158, 1, 2}
};
static const MappingScope scope_154 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:",
  scope_154_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1: */
static const MappingEntry scope_153_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_153_entries[0], isActive_kcg_bool_kcg_false, &scope_154, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_153_entries[0], isActive_kcg_bool_kcg_true, &scope_159, 1, 2}
};
static const MappingScope scope_153 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:",
  scope_153_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversions */
static const MappingEntry scope_152_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_153, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_dup", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, m_dup), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_dup_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, m_dup_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_152 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversions",
  scope_152_entries, 6,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_151_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L2_IfBlock1), &_Type_N_TOTAL_Utils, &scope_135_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_135_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_151 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:then:",
  scope_151_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_150_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L1_IfBlock1), &_Type_N_TOTAL_Utils, &scope_136_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L37_IfBlock1), &_Type_kcg_bool_Utils, &scope_136_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_150 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:then:",
  scope_150_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_149_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L19_IfBlock1), &_Type_N_TOTAL_Utils, &scope_137_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L38_IfBlock1), &_Type_kcg_bool_Utils, &scope_137_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_149 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:then:",
  scope_149_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_148_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L111_IfBlock1), &_Type_N_TOTAL_Utils, &scope_138_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L310_IfBlock1), &_Type_kcg_bool_Utils, &scope_138_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_148 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:then:",
  scope_148_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_147_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L113_IfBlock1), &_Type_N_TOTAL_Utils, &scope_139_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L312_IfBlock1), &_Type_kcg_bool_Utils, &scope_139_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_147 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:then:",
  scope_147_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_146_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L214_IfBlock1), &_Type_N_TOTAL_Utils, &scope_140_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_140_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_146 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:then:",
  scope_146_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_145_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L116_IfBlock1), &_Type_N_TOTAL_Utils, &scope_141_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L315_IfBlock1), &_Type_kcg_bool_Utils, &scope_141_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_145 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:then:",
  scope_145_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_144_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L118_IfBlock1), &_Type_N_TOTAL_Utils, &scope_142_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L317_IfBlock1), &_Type_kcg_bool_Utils, &scope_142_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_144 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then:",
  scope_144_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_143_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L119_IfBlock1), &_Type_N_TOTAL_Utils, &scope_142_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_142_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_143 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else:",
  scope_143_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_142_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_142_entries[0], isActive_kcg_bool_kcg_false, &scope_143, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_142_entries[0], isActive_kcg_bool_kcg_true, &scope_144, 1, 2}
};
static const MappingScope scope_142 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:",
  scope_142_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_141_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_141_entries[0], isActive_kcg_bool_kcg_false, &scope_142, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_141_entries[0], isActive_kcg_bool_kcg_true, &scope_145, 1, 2}
};
static const MappingScope scope_141 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:",
  scope_141_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_140_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_140_entries[0], isActive_kcg_bool_kcg_false, &scope_141, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_140_entries[0], isActive_kcg_bool_kcg_true, &scope_146, 1, 2}
};
static const MappingScope scope_140 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:",
  scope_140_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_139_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_139_entries[0], isActive_kcg_bool_kcg_false, &scope_140, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_139_entries[0], isActive_kcg_bool_kcg_true, &scope_147, 1, 2}
};
static const MappingScope scope_139 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:",
  scope_139_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_138_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_138_entries[0], isActive_kcg_bool_kcg_false, &scope_139, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_138_entries[0], isActive_kcg_bool_kcg_true, &scope_148, 1, 2}
};
static const MappingScope scope_138 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:",
  scope_138_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_137_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _5_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_137_entries[0], isActive_kcg_bool_kcg_false, &scope_138, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_137_entries[0], isActive_kcg_bool_kcg_true, &scope_149, 1, 2}
};
static const MappingScope scope_137 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:",
  scope_137_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_136_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_136_entries[0], isActive_kcg_bool_kcg_false, &scope_137, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_136_entries[0], isActive_kcg_bool_kcg_true, &scope_150, 1, 2}
};
static const MappingScope scope_136 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:",
  scope_136_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1: */
static const MappingEntry scope_135_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_135_entries[0], isActive_kcg_bool_kcg_false, &scope_136, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_135_entries[0], isActive_kcg_bool_kcg_true, &scope_151, 1, 2}
};
static const MappingScope scope_135 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:",
  scope_135_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversions */
static const MappingEntry scope_134_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_135, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "n_pig", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, n_pig), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "n_total_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, n_total_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_134 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversions",
  scope_134_entries, 6,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_133_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L2_IfBlock1), &_Type_N_PIG_Utils, &scope_117_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_117_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_133 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:then:",
  scope_133_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_132_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L1_IfBlock1), &_Type_N_PIG_Utils, &scope_118_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L37_IfBlock1), &_Type_kcg_bool_Utils, &scope_118_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_132 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:then:",
  scope_132_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_131_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L18_IfBlock1), &_Type_N_PIG_Utils, &scope_119_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_119_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_131 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:then:",
  scope_131_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_130_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L110_IfBlock1), &_Type_N_PIG_Utils, &scope_120_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L39_IfBlock1), &_Type_kcg_bool_Utils, &scope_120_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_130 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:then:",
  scope_130_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_129_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L112_IfBlock1), &_Type_N_PIG_Utils, &scope_121_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L311_IfBlock1), &_Type_kcg_bool_Utils, &scope_121_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_129 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:then:",
  scope_129_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_128_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L214_IfBlock1), &_Type_N_PIG_Utils, &scope_122_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L413_IfBlock1), &_Type_kcg_bool_Utils, &scope_122_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_128 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:then:",
  scope_128_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_127_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L116_IfBlock1), &_Type_N_PIG_Utils, &scope_123_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L315_IfBlock1), &_Type_kcg_bool_Utils, &scope_123_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_127 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:then:",
  scope_127_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_126_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L118_IfBlock1), &_Type_N_PIG_Utils, &scope_124_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L417_IfBlock1), &_Type_kcg_bool_Utils, &scope_124_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_126 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then:",
  scope_126_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_125_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L220_IfBlock1), &_Type_N_PIG_Utils, &scope_124_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L319_IfBlock1), &_Type_kcg_bool_Utils, &scope_124_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_125 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else:",
  scope_125_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_124_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_124_entries[0], isActive_kcg_bool_kcg_false, &scope_125, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_124_entries[0], isActive_kcg_bool_kcg_true, &scope_126, 1, 2}
};
static const MappingScope scope_124 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:",
  scope_124_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_123_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_123_entries[0], isActive_kcg_bool_kcg_false, &scope_124, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_123_entries[0], isActive_kcg_bool_kcg_true, &scope_127, 1, 2}
};
static const MappingScope scope_123 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:",
  scope_123_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_122_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_122_entries[0], isActive_kcg_bool_kcg_false, &scope_123, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_122_entries[0], isActive_kcg_bool_kcg_true, &scope_128, 1, 2}
};
static const MappingScope scope_122 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:",
  scope_122_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_121_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_121_entries[0], isActive_kcg_bool_kcg_false, &scope_122, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_121_entries[0], isActive_kcg_bool_kcg_true, &scope_129, 1, 2}
};
static const MappingScope scope_121 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:",
  scope_121_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_120_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_120_entries[0], isActive_kcg_bool_kcg_false, &scope_121, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_120_entries[0], isActive_kcg_bool_kcg_true, &scope_130, 1, 2}
};
static const MappingScope scope_120 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:",
  scope_120_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_119_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _5_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_119_entries[0], isActive_kcg_bool_kcg_false, &scope_120, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_119_entries[0], isActive_kcg_bool_kcg_true, &scope_131, 1, 2}
};
static const MappingScope scope_119 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:",
  scope_119_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_118_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_118_entries[0], isActive_kcg_bool_kcg_false, &scope_119, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_118_entries[0], isActive_kcg_bool_kcg_true, &scope_132, 1, 2}
};
static const MappingScope scope_118 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:",
  scope_118_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1: */
static const MappingEntry scope_117_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_117_entries[0], isActive_kcg_bool_kcg_false, &scope_118, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_117_entries[0], isActive_kcg_bool_kcg_true, &scope_133, 1, 2}
};
static const MappingScope scope_117 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:",
  scope_117_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversions */
static const MappingEntry scope_116_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_117, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "n_pig", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "n_pig_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, n_pig_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_116 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversions",
  scope_116_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_115_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_MEDIA), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L4_IfBlock1), &_Type_Q_MEDIA_Utils, &scope_111_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_111_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_115 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:then:",
  scope_115_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_114_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_MEDIA), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L3_IfBlock1), &_Type_Q_MEDIA_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_114 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:then:",
  scope_114_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_113_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_MEDIA), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L1_IfBlock1), &_Type_Q_MEDIA_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_112_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_113 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:else:",
  scope_113_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_112_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_112_entries[0], isActive_kcg_bool_kcg_false, &scope_113, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_112_entries[0], isActive_kcg_bool_kcg_true, &scope_114, 1, 2}
};
static const MappingScope scope_112 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:",
  scope_112_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1: */
static const MappingEntry scope_111_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_111_entries[0], isActive_kcg_bool_kcg_false, &scope_112, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_111_entries[0], isActive_kcg_bool_kcg_true, &scope_115, 1, 2}
};
static const MappingScope scope_111 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:",
  scope_111_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversions */
static const MappingEntry scope_110_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_111, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_media", NULL, sizeof(Q_MEDIA), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_media_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, q_media_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_110 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversions",
  scope_110_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_109_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L4_IfBlock1), &_Type_M_VERSION_Utils, &scope_101_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_101_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_109 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:then:",
  scope_109_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_108_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L3_IfBlock1), &_Type_M_VERSION_Utils, &scope_102_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L53_IfBlock1), &_Type_kcg_bool_Utils, &scope_102_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_108 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:then:",
  scope_108_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_107_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L2_IfBlock1), &_Type_M_VERSION_Utils, &scope_103_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L44_IfBlock1), &_Type_kcg_bool_Utils, &scope_103_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_107 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:then:",
  scope_107_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_106_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L26_IfBlock1), &_Type_M_VERSION_Utils, &scope_104_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L45_IfBlock1), &_Type_kcg_bool_Utils, &scope_104_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_106 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:then:",
  scope_106_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_105_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_104_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L27_IfBlock1), &_Type_M_VERSION_Utils, &scope_104_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_105 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:else:",
  scope_105_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_104_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_104_entries[0], isActive_kcg_bool_kcg_false, &scope_105, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_104_entries[0], isActive_kcg_bool_kcg_true, &scope_106, 1, 2}
};
static const MappingScope scope_104 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:",
  scope_104_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_103_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_103_entries[0], isActive_kcg_bool_kcg_false, &scope_104, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_103_entries[0], isActive_kcg_bool_kcg_true, &scope_107, 1, 2}
};
static const MappingScope scope_103 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:",
  scope_103_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_102_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_102_entries[0], isActive_kcg_bool_kcg_false, &scope_103, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_102_entries[0], isActive_kcg_bool_kcg_true, &scope_108, 1, 2}
};
static const MappingScope scope_102 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:",
  scope_102_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1: */
static const MappingEntry scope_101_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_101_entries[0], isActive_kcg_bool_kcg_false, &scope_102, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_101_entries[0], isActive_kcg_bool_kcg_true, &scope_109, 1, 2}
};
static const MappingScope scope_101 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:",
  scope_101_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversions */
static const MappingEntry scope_100_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_101, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_version", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_version_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, m_version_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_100 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversions",
  scope_100_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_99_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_UPDOWN), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L4_IfBlock1), &_Type_Q_UPDOWN_Utils, &scope_95_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_95_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_99 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:then:",
  scope_99_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_98_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_UPDOWN), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L3_IfBlock1), &_Type_Q_UPDOWN_Utils, &scope_96_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_96_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_98 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:then:",
  scope_98_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_97_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_UPDOWN), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L1_IfBlock1), &_Type_Q_UPDOWN_Utils, &scope_96_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_96_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_97 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:else:",
  scope_97_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_96_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_96_entries[0], isActive_kcg_bool_kcg_false, &scope_97, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_96_entries[0], isActive_kcg_bool_kcg_true, &scope_98, 1, 2}
};
static const MappingScope scope_96 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:",
  scope_96_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1: */
static const MappingEntry scope_95_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_95_entries[0], isActive_kcg_bool_kcg_false, &scope_96, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_95_entries[0], isActive_kcg_bool_kcg_true, &scope_99, 1, 2}
};
static const MappingScope scope_95 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:",
  scope_95_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversions */
static const MappingEntry scope_94_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_95, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_updown", NULL, sizeof(Q_UPDOWN), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_updown_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, q_updown_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_94 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversions",
  scope_94_entries, 6,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock4:then: */
static const MappingEntry scope_93_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L1_IfBlock4), &_Type_kcg_bool_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_93 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock4:then:",
  scope_93_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock4:else: */
static const MappingEntry scope_92_entries[10] = {
  /* 0 */ { MAP_LOCAL, "@kcg25", NULL, sizeof(TelegramStore_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, storeAdditionalTelegram), &_Type_TelegramStore_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_453, 0, 0},
  /* 1 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram 3", NULL, sizeof(outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, Context_3), NULL, &scope_91_entries[0], isActive_kcg_bool_kcg_false, &scope_187, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L10_IfBlock4), &_Type_kcg_bool_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L11_IfBlock4), &_Type_Telegram_T_BG_Types_Pkg_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_false, &scope_435, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L12_IfBlock4), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_false, &scope_433, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L13_IfBlock4), &_Type_kcg_bool_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(TelegramStore_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L5_IfBlock4), &_Type_TelegramStore_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_false, &scope_453, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L6_IfBlock4), &_Type_Telegram_T_BG_Types_Pkg_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_false, &scope_435, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L7_IfBlock4), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_false, &scope_433, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L9_IfBlock4), &_Type_kcg_bool_Utils, &scope_91_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 5}
};
static const MappingScope scope_92 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock4:else:",
  scope_92_entries, 10,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock4: */
static const MappingEntry scope_91_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, IfBlock4_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_91_entries[0], isActive_kcg_bool_kcg_false, &scope_92, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_91_entries[0], isActive_kcg_bool_kcg_true, &scope_93, 1, 2}
};
static const MappingScope scope_91 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock4:",
  scope_91_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock2:then: */
static const MappingEntry scope_90_entries[9] = {
  /* 0 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage 1", NULL, sizeof(outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _2_Context_1), NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_186, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L14_IfBlock2), &_Type_kcg_bool_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L23", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L23_IfBlock2), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L29", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L29_IfBlock2), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_434, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L41", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L41_IfBlock2), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_434, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L45", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L45_IfBlock2), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L46_IfBlock2), &_Type_kcg_int_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L48", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L48_IfBlock2), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(BG_Message_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L7_IfBlock2), &_Type_BG_Message_T_BG_Types_Pkg_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_436, 1, 1}
};
static const MappingScope scope_90 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock2:then:",
  scope_90_entries, 9,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock2:else:IfBlock3:then: */
static const MappingEntry scope_89_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L1_IfBlock2_IfBlock3), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L2_IfBlock2_IfBlock3), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_true, &scope_434, 1, 1}
};
static const MappingScope scope_89 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock2:else:IfBlock3:then:",
  scope_89_entries, 2,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock2:else:IfBlock3:else: */
static const MappingEntry scope_88_entries[4] = {
  /* 0 */ { MAP_LOCAL, "@kcg23", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, storeBGTelegramArray), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg24", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, storeCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 0, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L14_IfBlock2_IfBlock3), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_false, &scope_434, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L23_IfBlock2_IfBlock3), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_87_entries[0], isActive_kcg_bool_kcg_false, &scope_452, 1, 3}
};
static const MappingScope scope_88 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock2:else:IfBlock3:else:",
  scope_88_entries, 4,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock2:else:IfBlock3: */
static const MappingEntry scope_87_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, IfBlock3_clock_IfBlock2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_87_entries[0], isActive_kcg_bool_kcg_false, &scope_88, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_87_entries[0], isActive_kcg_bool_kcg_true, &scope_89, 1, 2}
};
static const MappingScope scope_87 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock2:else:IfBlock3:",
  scope_87_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock2:else: */
static const MappingEntry scope_86_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock3:", NULL, 0, 0, NULL, NULL, NULL, &scope_87, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L1_IfBlock2), &_Type_kcg_bool_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L11_IfBlock2), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_false, &scope_433, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L12_IfBlock2), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_false, &scope_434, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(BG_Message_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L3_IfBlock2), &_Type_BG_Message_T_BG_Types_Pkg_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_false, &scope_436, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L6_IfBlock2), &_Type_kcg_int_Utils, &scope_85_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 3}
};
static const MappingScope scope_86 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock2:else:",
  scope_86_entries, 6,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock2: */
static const MappingEntry scope_85_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, IfBlock2_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_false, &scope_86, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_85_entries[0], isActive_kcg_bool_kcg_true, &scope_90, 1, 2}
};
static const MappingScope scope_85 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock2:",
  scope_85_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock1:then: */
static const MappingEntry scope_84_entries[12] = {
  /* 0 */ { MAP_LOCAL, "@kcg21", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, storeCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg22", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, storeBGTelegramArray), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 0, 1},
  /* 2 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::manageTelegram 1", NULL, sizeof(outC_manageTelegram_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, Context_1), NULL, &scope_79_entries[0], isActive_kcg_bool_kcg_true, &scope_185, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L10_IfBlock1), &_Type_Telegram_T_BG_Types_Pkg_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, &scope_435, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L11_IfBlock1), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, &scope_433, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L12_IfBlock1), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L14_IfBlock1), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L18_IfBlock1), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, &scope_434, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L20_IfBlock1), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, &scope_434, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L22_IfBlock1), &_Type_kcg_bool_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3}
};
static const MappingScope scope_84 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock1:then:",
  scope_84_entries, 12,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock1:else:IfBlock3:then: */
static const MappingEntry scope_83_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg19", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, storeCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg20", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, storeBGTelegramArray), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 0, 1},
  /* 2 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::checkOdometry 3", NULL, sizeof(outC_checkOdometry_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _1_Context_3), NULL, &scope_81_entries[0], isActive_kcg_bool_kcg_true, &scope_181, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L11_IfBlock1_IfBlock3), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_true, &scope_434, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L4_IfBlock1_IfBlock3), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L5_IfBlock1_IfBlock3), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_true, &scope_410, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L6_IfBlock1_IfBlock3), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L7_IfBlock1_IfBlock3), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L9_IfBlock1_IfBlock3), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_true, &scope_452, 1, 7}
};
static const MappingScope scope_83 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock1:else:IfBlock3:then:",
  scope_83_entries, 9,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock1:else:IfBlock3:else: */
static const MappingEntry scope_82_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L1_IfBlock1_IfBlock3), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L2_IfBlock1_IfBlock3), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_82 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock1:else:IfBlock3:else:",
  scope_82_entries, 2,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock1:else:IfBlock3: */
static const MappingEntry scope_81_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, IfBlock3_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_kcg_bool_kcg_false, &scope_82, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_kcg_bool_kcg_true, &scope_83, 1, 2}
};
static const MappingScope scope_81 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock1:else:IfBlock3:",
  scope_81_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock1:else: */
static const MappingEntry scope_80_entries[1] = {
  /* 0 */ { MAP_IF, "IfBlock3:", NULL, 0, 0, NULL, NULL, NULL, &scope_81, 1, 0}
};
static const MappingScope scope_80 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock1:else:",
  scope_80_entries, 1,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock1: */
static const MappingEntry scope_79_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_79_entries[0], isActive_kcg_bool_kcg_false, &scope_80, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_79_entries[0], isActive_kcg_bool_kcg_true, &scope_84, 1, 2}
};
static const MappingScope scope_79 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_PkgIfBlock1:",
  scope_79_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_78_entries[32] = {
  /* 0 */ { MAP_LOCAL, "@kcg18", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 1 */ { MAP_LOCAL, "BGisChangedEarly", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, BGisChangedEarly), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "BGisComplete", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, BGisComplete), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_79, 1, 4},
  /* 4 */ { MAP_IF, "IfBlock2:", NULL, 0, 0, NULL, NULL, NULL, &scope_85, 1, 5},
  /* 5 */ { MAP_IF, "IfBlock4:", NULL, 0, 0, NULL, NULL, NULL, &scope_91, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L23", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L23), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 21},
  /* 7 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 8 */ { MAP_LOCAL, "_L26", NULL, sizeof(TelegramStore_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L26), &_Type_TelegramStore_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_453, 1, 19},
  /* 9 */ { MAP_LOCAL, "_L27", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L27), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 18},
  /* 10 */ { MAP_LOCAL, "_L30", NULL, sizeof(TelegramStore_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L30), &_Type_TelegramStore_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_453, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L34), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 13 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L42), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 14 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L43), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 15 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26},
  /* 16 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L45), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 17 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L46), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 18 */ { MAP_LOCAL, "_L47", NULL, sizeof(TelegramStore_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L47), &_Type_TelegramStore_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_453, 1, 29},
  /* 19 */ { MAP_LOCAL, "_L48", NULL, sizeof(BG_Message_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, _L48), &_Type_BG_Message_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_436, 1, 30},
  /* 20 */ { MAP_LOCAL, "needTelegramStore", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, needTelegramStore), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 21 */ { MAP_OUTPUT, "outBGMessage", NULL, sizeof(BG_Message_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, outBGMessage), &_Type_BG_Message_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_436, 1, 31},
  /* 22 */ { MAP_LOCAL, "positionToUse", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, positionToUse), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 11},
  /* 23 */ { MAP_LOCAL, "storeAdditionalTelegram@mem", NULL, sizeof(TelegramStore_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, storeAdditionalTelegram), &_Type_TelegramStore_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_453, 0, 0},
  /* 24 */ { MAP_LOCAL, "storeBGTelegramArray@mem", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, storeBGTelegramArray), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 0, 2},
  /* 25 */ { MAP_LOCAL, "storeCollector@mem", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, storeCollector), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 0, 1},
  /* 26 */ { MAP_LOCAL, "storeIsChanged", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, storeIsChanged), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 27 */ { MAP_LOCAL, "telegramPresent", NULL, sizeof(kcg_bool), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, telegramPresent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 28 */ { MAP_LOCAL, "telegramToUse", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, telegramToUse), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 9},
  /* 29 */ { MAP_LOCAL, "tempBGTelegramArray", NULL, sizeof(TelegramArray_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, tempBGTelegramArray), &_Type_TelegramArray_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_434, 1, 14},
  /* 30 */ { MAP_LOCAL, "tempCollectorStore", NULL, sizeof(BGCollector_T_Receive_TrackSide_Msg_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, tempCollectorStore), &_Type_BGCollector_T_Receive_TrackSide_Msg_Pkg_Utils, NULL, NULL, &scope_452, 1, 13},
  /* 31 */ { MAP_LOCAL, "testBG", NULL, sizeof(BG_Message_T_BG_Types_Pkg), offsetof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg, testBG), &_Type_BG_Message_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_436, 1, 16}
};
static const MappingScope scope_78 = {
  "Receive_TrackSide_Msg_Pkg::BuildBGMessage/ BuildBGMessage_Receive_TrackSide_Msg_Pkg",
  scope_78_entries, 32,
};

/* Toolbox::Functions::ODO_genSpeedInaccuracies/ ODO_genSpeedInaccuracies_Toolbox_Functions */
static const MappingEntry scope_77_entries[17] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L13), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_412, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(odometryFactors_T_Toolbox), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L14), &_Type_odometryFactors_T_Toolbox_Utils, NULL, NULL, &scope_409, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(Speed_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L15), &_Type_Speed_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L16), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_real), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L17), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_real), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L19), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_real), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L20), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L21), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L6), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 14 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 16 */ { MAP_OUTPUT, "odometrySpeeds", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions, odometrySpeeds), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_412, 1, 16}
};
static const MappingScope scope_77 = {
  "Toolbox::Functions::ODO_genSpeedInaccuracies/ ODO_genSpeedInaccuracies_Toolbox_Functions",
  scope_77_entries, 17,
};

/* Toolbox::Functions::ODO_genOdometryInaccuracies/ ODO_genOdometryInaccuracies_Toolbox_Functions */
static const MappingEntry scope_76_entries[14] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L1), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L16), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_real), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L20), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L21), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L22), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L33", NULL, sizeof(odometryFactors_T_Toolbox), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L33), &_Type_odometryFactors_T_Toolbox_Utils, NULL, NULL, &scope_409, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_real), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L34), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_real), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L35), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_real), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L36), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L8", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, _L8), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_411, 1, 1},
  /* 13 */ { MAP_OUTPUT, "odometryLocations", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions, odometryLocations), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_411, 1, 13}
};
static const MappingScope scope_76 = {
  "Toolbox::Functions::ODO_genOdometryInaccuracies/ ODO_genOdometryInaccuracies_Toolbox_Functions",
  scope_76_entries, 14,
};

/* Test_Driver::Driver_ConstantSpeed20/ Driver_ConstantSpeed20_Test_Driver */
static const MappingEntry scope_75_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed20_Test_Driver, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed20_Test_Driver, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed20_Test_Driver, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed20_Test_Driver, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "out_acceleration", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed20_Test_Driver, out_acceleration), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "out_initialvelocity", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed20_Test_Driver, out_initialvelocity), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_75 = {
  "Test_Driver::Driver_ConstantSpeed20/ Driver_ConstantSpeed20_Test_Driver",
  scope_75_entries, 6,
};

/* Test_Driver::Driver_ConstantSpeed100/ Driver_ConstantSpeed100_Test_Driver */
static const MappingEntry scope_74_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed100_Test_Driver, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed100_Test_Driver, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed100_Test_Driver, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed100_Test_Driver, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "out_acceleration", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed100_Test_Driver, out_acceleration), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "out_initialvelocity", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed100_Test_Driver, out_initialvelocity), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_74 = {
  "Test_Driver::Driver_ConstantSpeed100/ Driver_ConstantSpeed100_Test_Driver",
  scope_74_entries, 6,
};

/* Test_Driver::Driver_ConstantSpeed400/ Driver_ConstantSpeed400_Test_Driver */
static const MappingEntry scope_73_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed400_Test_Driver, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed400_Test_Driver, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed400_Test_Driver, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed400_Test_Driver, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "out_acceleration", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed400_Test_Driver, out_acceleration), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "out_initialvelocity", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantSpeed400_Test_Driver, out_initialvelocity), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_73 = {
  "Test_Driver::Driver_ConstantSpeed400/ Driver_ConstantSpeed400_Test_Driver",
  scope_73_entries, 6,
};

/* Test_Driver::Driver_ConstantAcc/ Driver_ConstantAcc_Test_Driver */
static const MappingEntry scope_72_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantAcc_Test_Driver, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantAcc_Test_Driver, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_OUTPUT, "out_acceleration", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantAcc_Test_Driver, out_acceleration), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "out_initialvelocity", NULL, sizeof(kcg_real), offsetof(outC_Driver_ConstantAcc_Test_Driver, out_initialvelocity), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_72 = {
  "Test_Driver::Driver_ConstantAcc/ Driver_ConstantAcc_Test_Driver",
  scope_72_entries, 4,
};

/* UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3000/ Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios */
static const MappingEntry scope_71_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "BM", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios, BM), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 6},
  /* 1 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG001_100_Single 1", NULL, sizeof(outC_Test_BG001_100_Single_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios, Context_1), NULL, NULL, NULL, &scope_172, 1, 0},
  /* 2 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG002_200_8BT 2", NULL, sizeof(outC_Test_BG002_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios, Context_2), NULL, NULL, NULL, &scope_180, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_real), offsetof(outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios, _L33), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L36", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios, _L36), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L49", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios, _L49), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L50", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios, _L50), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 5}
};
static const MappingScope scope_71 = {
  "UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3000/ Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios",
  scope_71_entries, 7,
};

/* UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3B01/ Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios */
static const MappingEntry scope_70_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "BM", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios, BM), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 8},
  /* 1 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG021_100_8BT 1", NULL, sizeof(outC_Test_BG021_100_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios, Context_1), NULL, NULL, NULL, &scope_169, 1, 0},
  /* 2 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG022_200_8BT 1", NULL, sizeof(outC_Test_BG022_200_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios, _1_Context_1), NULL, NULL, NULL, &scope_170, 1, 1},
  /* 3 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Test_Track_Elements::Test_Balises::Test_BG023_300_8BT 1", NULL, sizeof(outC_Test_BG023_300_8BT_UNISIG_Validation_Scenarios_Test_Track_Elements_Test_Balises), offsetof(outC_Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios, _2_Context_1), NULL, NULL, NULL, &scope_171, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_real), offsetof(outC_Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios, _L33), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L36", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios, _L36), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L49", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios, _L49), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L50", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios, _L50), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L51", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios, _L51), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 7}
};
static const MappingScope scope_70 = {
  "UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3B01/ Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios",
  scope_70_entries, 9,
};

/* TM_conversions::CASTLIB_BaliseHeaders/ CASTLIB_BaliseHeaders_TM_conversions */
static const MappingEntry scope_69_entries[33] = {
  /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, Out), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 32},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_DUP 1", NULL, sizeof(outC_CAST_Int_to_M_DUP_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _5_Context_1), NULL, NULL, NULL, &scope_152, 1, 5},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_MCOUNT 1", NULL, sizeof(outC_CAST_Int_to_M_MCOUNT_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _6_Context_1), NULL, NULL, NULL, &scope_160, 1, 6},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_VERSION 1", NULL, sizeof(outC_CAST_Int_to_M_VERSION_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_100, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_BG 1", NULL, sizeof(outC_CAST_Int_to_NID_BG_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _8_Context_1), NULL, NULL, NULL, &scope_162, 1, 8},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_C 1", NULL, sizeof(outC_CAST_Int_to_NID_C_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _7_Context_1), NULL, NULL, NULL, &scope_161, 1, 7},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_N_PIG 1", NULL, sizeof(outC_CAST_Int_to_N_PIG_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _3_Context_1), NULL, NULL, NULL, &scope_116, 1, 3},
  /* 7 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_N_TOTAL 1", NULL, sizeof(outC_CAST_Int_to_N_TOTAL_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _4_Context_1), NULL, NULL, NULL, &scope_134, 1, 4},
  /* 8 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LINK 1", NULL, sizeof(outC_CAST_Int_to_Q_LINK_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _9_Context_1), NULL, NULL, NULL, &scope_163, 1, 9},
  /* 9 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_MEDIA 1", NULL, sizeof(outC_CAST_Int_to_Q_MEDIA_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_110, 1, 2},
  /* 10 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_UPDOWN 1", NULL, sizeof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, Context_1), NULL, NULL, NULL, &scope_94, 1, 0},
  /* 11 */ { MAP_LOCAL, "_L1", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L22", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L22), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L23", NULL, sizeof(Q_UPDOWN), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L23), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L24", NULL, sizeof(M_VERSION), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L24), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L25", NULL, sizeof(Q_MEDIA), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L25), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L26", NULL, sizeof(N_PIG), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L26), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 25},
  /* 20 */ { MAP_LOCAL, "_L27", NULL, sizeof(N_TOTAL), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L27), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 26},
  /* 21 */ { MAP_LOCAL, "_L28", NULL, sizeof(M_DUP), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L28), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 27},
  /* 22 */ { MAP_LOCAL, "_L29", NULL, sizeof(M_MCOUNT), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L29), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 28},
  /* 23 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 24 */ { MAP_LOCAL, "_L30", NULL, sizeof(NID_C), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L30), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L31", NULL, sizeof(NID_BG), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L31), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L32", NULL, sizeof(Q_LINK), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L32), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 28 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 29 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 30 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 31 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 32 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13}
};
static const MappingScope scope_69 = {
  "TM_conversions::CASTLIB_BaliseHeaders/ CASTLIB_BaliseHeaders_TM_conversions",
  scope_69_entries, 33,
};

/* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg/ Receive_RadioMsg_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_68_entries[14] = {
  /* 0 */ { MAP_LOCAL, "_L12", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L12), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L14", NULL, sizeof(TrackSide_ForCheck_T_Common_Types_Pkg), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L14), &_Type_TrackSide_ForCheck_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L16", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L16), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L17", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L17), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(RadioMessage_T_Radio_Types_Pkg), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L19), &_Type_RadioMessage_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_451, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L21", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L21), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_430, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L34), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L37", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L37), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_450, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L67", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L67), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L68", NULL, sizeof(BG_Message_T_BG_Types_Pkg), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L68), &_Type_BG_Message_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_436, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L92", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, _L92), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 12},
  /* 13 */ { MAP_OUTPUT, "outTrackMessage_for_check", NULL, sizeof(TrackSide_ForCheck_T_Common_Types_Pkg), offsetof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg, outTrackMessage_for_check), &_Type_TrackSide_ForCheck_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 13}
};
static const MappingScope scope_68 = {
  "Receive_TrackSide_Msg_Pkg::Receive_RadioMsg/ Receive_RadioMsg_Receive_TrackSide_Msg_Pkg",
  scope_68_entries, 14,
};

/* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram/ Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_67_entries[30] = {
  /* 0 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::BuildBGMessage 1", NULL, sizeof(outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, Context_1), NULL, NULL, NULL, &scope_78, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(RadioMessage_T_Radio_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L13), &_Type_RadioMessage_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_451, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L17), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 11},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 6 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 8 */ { MAP_LOCAL, "_L23", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L23), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 16},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L25), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 17},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L26), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 18},
  /* 11 */ { MAP_LOCAL, "_L28", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L28), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 19},
  /* 12 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 13 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 14 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L34), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 15 */ { MAP_LOCAL, "_L35", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L35), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 23},
  /* 16 */ { MAP_LOCAL, "_L37", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L37), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 24},
  /* 17 */ { MAP_LOCAL, "_L38", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L38), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 25},
  /* 18 */ { MAP_LOCAL, "_L40", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L40), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 26},
  /* 19 */ { MAP_LOCAL, "_L46", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L46), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 27},
  /* 20 */ { MAP_LOCAL, "_L5", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L5), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_410, 1, 7},
  /* 21 */ { MAP_LOCAL, "_L55", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L55), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 28},
  /* 22 */ { MAP_LOCAL, "_L6", NULL, sizeof(BG_Message_T_BG_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L6), &_Type_BG_Message_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_436, 1, 8},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(TrackSide_ForCheck_T_Common_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, _L7), &_Type_TrackSide_ForCheck_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 9},
  /* 24 */ { MAP_LOCAL, "centerOfBaliseDetection", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, centerOfBaliseDetection), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 2},
  /* 25 */ { MAP_LOCAL, "decodedTelegram", NULL, sizeof(Telegram_T_BG_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, decodedTelegram), &_Type_Telegram_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_435, 1, 3},
  /* 26 */ { MAP_LOCAL, "msgType", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, msgType), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 27 */ { MAP_OUTPUT, "outTrackMessage_for_check", NULL, sizeof(TrackSide_ForCheck_T_Common_Types_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, outTrackMessage_for_check), &_Type_TrackSide_ForCheck_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 29},
  /* 28 */ { MAP_LOCAL, "systemTimeMsgReceived", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, systemTimeMsgReceived), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 29 */ { MAP_LOCAL, "telegramPresent", NULL, sizeof(kcg_bool), offsetof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg, telegramPresent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_67 = {
  "Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram/ Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg",
  scope_67_entries, 30,
};

/* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion/ PHYSICS_acceleratedMotion_Toolbox_Physics_Basic */
static const MappingEntry scope_66_entries[33] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 22},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L14), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L15), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L16), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L17), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 21},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L23), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L24), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L25), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L26), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L27), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 14 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 16 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L30), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L32), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 23},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L33), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 24},
  /* 20 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L35), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L36), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L37), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L38), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L39), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 19},
  /* 27 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 28 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L6), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 29 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 30 */ { MAP_OUTPUT, "newPosition", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, newPosition), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 31},
  /* 31 */ { MAP_OUTPUT, "newVelocity", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, newVelocity), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 32},
  /* 32 */ { MAP_LOCAL, "timeInSeconds", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic, timeInSeconds), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_66 = {
  "Toolbox::Physics::Basic::PHYSICS_acceleratedMotion/ PHYSICS_acceleratedMotion_Toolbox_Physics_Basic",
  scope_66_entries, 33,
};

/* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance/ PHYSICS_simulateAirResistance_Toolbox_Physics_Basic */
static const MappingEntry scope_65_entries[12] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic, _L13), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic, _L14), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic, _L15), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic, _L16), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic, _L6), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_OUTPUT, "newAcceleration", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic, newAcceleration), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11}
};
static const MappingScope scope_65 = {
  "Toolbox::Physics::Basic::PHYSICS_simulateAirResistance/ PHYSICS_simulateAirResistance_Toolbox_Physics_Basic",
  scope_65_entries, 12,
};

/* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime/ PHYSICS_simulateAccelerat_Toolbox_Physics_Basic */
static const MappingEntry scope_64_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg16", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, currentAcceleration), &_Type_kcg_real_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg17", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, _L5), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, _L6), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, _L7), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, _L8), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, _L9), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_OUTPUT, "acceleration", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, acceleration), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "currentAcceleration@mem", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic, currentAcceleration), &_Type_kcg_real_Utils, NULL, NULL, NULL, 0, 2}
};
static const MappingScope scope_64 = {
  "Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime/ PHYSICS_simulateAccelerat_Toolbox_Physics_Basic",
  scope_64_entries, 13,
};

/* Toolbox::Functions::TRAIN_systemTimeGenerator/ TRAIN_systemTimeGenerator_Toolbox_Functions */
static const MappingEntry scope_63_entries[7] = {
  /* 0 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), offsetof(outC_TRAIN_systemTimeGenerator_Toolbox_Functions, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_int), offsetof(outC_TRAIN_systemTimeGenerator_Toolbox_Functions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), offsetof(outC_TRAIN_systemTimeGenerator_Toolbox_Functions, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 3 */ { MAP_LOCAL, "_L2@mem", NULL, sizeof(kcg_int), offsetof(outC_TRAIN_systemTimeGenerator_Toolbox_Functions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_TRAIN_systemTimeGenerator_Toolbox_Functions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_TRAIN_systemTimeGenerator_Toolbox_Functions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_OUTPUT, "timestamp", NULL, sizeof(kcg_int), offsetof(outC_TRAIN_systemTimeGenerator_Toolbox_Functions, timestamp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_63 = {
  "Toolbox::Functions::TRAIN_systemTimeGenerator/ TRAIN_systemTimeGenerator_Toolbox_Functions",
  scope_63_entries, 7,
};

/* Toolbox::Converters::m_s_To_km_h/ m_s_To_km_h_Toolbox_Converters */
static const MappingEntry scope_62_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_m_s_To_km_h_Toolbox_Converters, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_m_s_To_km_h_Toolbox_Converters, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_m_s_To_km_h_Toolbox_Converters, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "km_h", NULL, sizeof(kcg_real), offsetof(outC_m_s_To_km_h_Toolbox_Converters, km_h), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_62 = {
  "Toolbox::Converters::m_s_To_km_h/ m_s_To_km_h_Toolbox_Converters",
  scope_62_entries, 4,
};

/* Toolbox::TrainModules::ODO/ ODO_Toolbox_TrainModules */
static const MappingEntry scope_61_entries[20] = {
  /* 0 */ { MAP_INSTANCE, "Toolbox::Functions::ODO_genOdometryInaccuracies 1", NULL, sizeof(outC_ODO_genOdometryInaccuracies_Toolbox_Functions), offsetof(outC_ODO_Toolbox_TrainModules, Context_1), NULL, NULL, NULL, &scope_76, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Toolbox::Functions::ODO_genSpeedInaccuracies 1", NULL, sizeof(outC_ODO_genSpeedInaccuracies_Toolbox_Functions), offsetof(outC_ODO_Toolbox_TrainModules, _1_Context_1), NULL, NULL, NULL, &scope_77, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, _L1), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_410, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, _L10), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(odometryFactors_T_Toolbox), offsetof(outC_ODO_Toolbox_TrainModules, _L11), &_Type_odometryFactors_T_Toolbox_Utils, NULL, NULL, &scope_409, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, _L13), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_ODO_Toolbox_TrainModules, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(Speed_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, _L15), &_Type_Speed_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_ODO_Toolbox_TrainModules, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, _L17), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, _L18), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 15},
  /* 11 */ { MAP_LOCAL, "_L19", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, _L19), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L20", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, _L20), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_412, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(odometryFactors_T_Toolbox), offsetof(outC_ODO_Toolbox_TrainModules, _L21), &_Type_odometryFactors_T_Toolbox_Utils, NULL, NULL, &scope_409, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_ODO_Toolbox_TrainModules, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, _L5), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L6", NULL, sizeof(Speed_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, _L6), &_Type_Speed_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 17 */ { MAP_LOCAL, "_L7", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, _L7), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 18 */ { MAP_LOCAL, "_L9", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, _L9), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_411, 1, 7},
  /* 19 */ { MAP_OUTPUT, "odometry", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_Toolbox_TrainModules, odometry), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_410, 1, 19}
};
static const MappingScope scope_61 = {
  "Toolbox::TrainModules::ODO/ ODO_Toolbox_TrainModules",
  scope_61_entries, 20,
};

/* Toolbox::Functions::ODO_doLocInacc/ ODO_doLocInacc_Toolbox_Functions */
static const MappingEntry scope_60_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L12", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_ODO_doLocInacc_Toolbox_Functions, _L12), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L13", NULL, sizeof(L_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_ODO_doLocInacc_Toolbox_Functions, _L13), &_Type_L_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_doLocInacc_Toolbox_Functions, _L2), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_413, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_ODO_doLocInacc_Toolbox_Functions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "locInAcc", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_ODO_doLocInacc_Toolbox_Functions, locInAcc), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_413, 1, 4}
};
static const MappingScope scope_60 = {
  "Toolbox::Functions::ODO_doLocInacc/ ODO_doLocInacc_Toolbox_Functions",
  scope_60_entries, 5,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:then: */
static const MappingEntry scope_59_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L15", NULL, sizeof(parameter_StoryTest_T_UNISIG_Validation_Scenarios), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _L15_IfBlock1), &_Type_parameter_StoryTest_T_UNISIG_Validation_Scenarios_Utils, &scope_49_entries[0], isActive_kcg_bool_kcg_true, &scope_437, 1, 0}
};
static const MappingScope scope_59 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:then:",
  scope_59_entries, 1,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:then: */
static const MappingEntry scope_58_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L7", NULL, sizeof(parameter_StoryTest_T_UNISIG_Validation_Scenarios), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _L7_IfBlock1), &_Type_parameter_StoryTest_T_UNISIG_Validation_Scenarios_Utils, &scope_50_entries[0], isActive_kcg_bool_kcg_true, &scope_437, 1, 0}
};
static const MappingScope scope_58 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:then:",
  scope_58_entries, 1,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:then: */
static const MappingEntry scope_57_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L11", NULL, sizeof(parameter_StoryTest_T_UNISIG_Validation_Scenarios), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _L11_IfBlock1), &_Type_parameter_StoryTest_T_UNISIG_Validation_Scenarios_Utils, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_437, 1, 0}
};
static const MappingScope scope_57 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:then:",
  scope_57_entries, 1,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:then: */
static const MappingEntry scope_56_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L9", NULL, sizeof(parameter_StoryTest_T_UNISIG_Validation_Scenarios), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _L9_IfBlock1), &_Type_parameter_StoryTest_T_UNISIG_Validation_Scenarios_Utils, &scope_52_entries[0], isActive_kcg_bool_kcg_true, &scope_437, 1, 0}
};
static const MappingScope scope_56 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:then:",
  scope_56_entries, 1,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_55_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(parameter_StoryTest_T_UNISIG_Validation_Scenarios), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _L4_IfBlock1), &_Type_parameter_StoryTest_T_UNISIG_Validation_Scenarios_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_true, &scope_437, 1, 0}
};
static const MappingScope scope_55 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:else:then:",
  scope_55_entries, 1,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_54_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L8", NULL, sizeof(parameter_StoryTest_T_UNISIG_Validation_Scenarios), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _L8_IfBlock1), &_Type_parameter_StoryTest_T_UNISIG_Validation_Scenarios_Utils, &scope_53_entries[0], isActive_kcg_bool_kcg_false, &scope_437, 1, 0}
};
static const MappingScope scope_54 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:else:else:",
  scope_54_entries, 1,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:else: */
static const MappingEntry scope_53_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_kcg_bool_kcg_false, &scope_54, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_kcg_bool_kcg_true, &scope_55, 1, 2}
};
static const MappingScope scope_53 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:else:",
  scope_53_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else: */
static const MappingEntry scope_52_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_52_entries[0], isActive_kcg_bool_kcg_false, &scope_53, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_52_entries[0], isActive_kcg_bool_kcg_true, &scope_56, 1, 2}
};
static const MappingScope scope_52 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:",
  scope_52_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else: */
static const MappingEntry scope_51_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_51_entries[0], isActive_kcg_bool_kcg_false, &scope_52, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_51_entries[0], isActive_kcg_bool_kcg_true, &scope_57, 1, 2}
};
static const MappingScope scope_51 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:",
  scope_51_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else: */
static const MappingEntry scope_50_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_50_entries[0], isActive_kcg_bool_kcg_false, &scope_51, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_50_entries[0], isActive_kcg_bool_kcg_true, &scope_58, 1, 2}
};
static const MappingScope scope_50 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:else:",
  scope_50_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1: */
static const MappingEntry scope_49_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_49_entries[0], isActive_kcg_bool_kcg_false, &scope_50, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_49_entries[0], isActive_kcg_bool_kcg_true, &scope_59, 1, 2}
};
static const MappingScope scope_49 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_PkgIfBlock1:",
  scope_49_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg */
static const MappingEntry scope_48_entries[9] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_49, 1, 0},
  /* 1 */ { MAP_LOCAL, "Track_Parameter", NULL, sizeof(parameter_StoryTest_T_UNISIG_Validation_Scenarios), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, Track_Parameter), &_Type_parameter_StoryTest_T_UNISIG_Validation_Scenarios_Utils, NULL, NULL, &scope_437, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L28", NULL, sizeof(parameter_StoryTest_T_UNISIG_Validation_Scenarios), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _L28), &_Type_parameter_StoryTest_T_UNISIG_Validation_Scenarios_Utils, NULL, NULL, &scope_437, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _L29), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _L30), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_OUTPUT, "out_EndofTrack", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, out_EndofTrack), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_OUTPUT, "out_TotalNrofBGs", NULL, sizeof(kcg_int), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, out_TotalNrofBGs), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_OUTPUT, "out_initialPosition", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg, out_initialPosition), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_48 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData/ Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg",
  scope_48_entries, 9,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:then: */
static const MappingEntry scope_47_entries[3] = {
  /* 0 */ { MAP_INSTANCE, "Test_Driver::Driver_ConstantSpeed20 1", NULL, sizeof(outC_Driver_ConstantSpeed20_Test_Driver), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, _3_Context_1), NULL, &scope_41_entries[0], isActive_kcg_bool_kcg_true, &scope_75, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, _L1_IfBlock1), &_Type_kcg_real_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, _L2_IfBlock1), &_Type_kcg_real_Utils, &scope_41_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_47 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:then:",
  scope_47_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:else:then: */
static const MappingEntry scope_46_entries[3] = {
  /* 0 */ { MAP_INSTANCE, "Test_Driver::Driver_ConstantSpeed100 1", NULL, sizeof(outC_Driver_ConstantSpeed100_Test_Driver), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, _2_Context_1), NULL, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_74, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, _L15_IfBlock1), &_Type_kcg_real_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, _L26_IfBlock1), &_Type_kcg_real_Utils, &scope_42_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_46 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:else:then:",
  scope_46_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:then: */
static const MappingEntry scope_45_entries[3] = {
  /* 0 */ { MAP_INSTANCE, "Test_Driver::Driver_ConstantSpeed400 1", NULL, sizeof(outC_Driver_ConstantSpeed400_Test_Driver), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, _1_Context_1), NULL, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_73, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, _L18_IfBlock1), &_Type_kcg_real_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, _L27_IfBlock1), &_Type_kcg_real_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2}
};
static const MappingScope scope_45 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:then:",
  scope_45_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else: */
static const MappingEntry scope_44_entries[3] = {
  /* 0 */ { MAP_INSTANCE, "Test_Driver::Driver_ConstantAcc 1", NULL, sizeof(outC_Driver_ConstantAcc_Test_Driver), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, Context_1), NULL, &scope_43_entries[0], isActive_kcg_bool_kcg_false, &scope_72, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, _L19_IfBlock1), &_Type_kcg_real_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, _L210_IfBlock1), &_Type_kcg_real_Utils, &scope_43_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_44 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:",
  scope_44_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:else:else: */
static const MappingEntry scope_43_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_43_entries[0], isActive_kcg_bool_kcg_false, &scope_44, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_43_entries[0], isActive_kcg_bool_kcg_true, &scope_45, 1, 2}
};
static const MappingScope scope_43 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:",
  scope_43_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:else: */
static const MappingEntry scope_42_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_42_entries[0], isActive_kcg_bool_kcg_false, &scope_43, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_42_entries[0], isActive_kcg_bool_kcg_true, &scope_46, 1, 2}
};
static const MappingScope scope_42 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:else:",
  scope_42_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1: */
static const MappingEntry scope_41_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_41_entries[0], isActive_kcg_bool_kcg_false, &scope_42, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_41_entries[0], isActive_kcg_bool_kcg_true, &scope_47, 1, 2}
};
static const MappingScope scope_41 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_PkgIfBlock1:",
  scope_41_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg */
static const MappingEntry scope_40_entries[3] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 0},
  /* 1 */ { MAP_OUTPUT, "acceleration", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, acceleration), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_OUTPUT, "initialVelocity", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg, initialVelocity), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_40 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver/ Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg",
  scope_40_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:then: */
static const MappingEntry scope_39_entries[3] = {
  /* 0 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3000 2", NULL, sizeof(outC_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _1_Context_2), NULL, &scope_29_entries[0], isActive_kcg_bool_kcg_true, &scope_71, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _L1_IfBlock1), &_Type_kcg_real_Utils, &scope_29_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _L4_IfBlock1), &_Type_CompressedBaliseMessage_TM_Utils, &scope_29_entries[0], isActive_kcg_bool_kcg_true, &scope_414, 1, 2}
};
static const MappingScope scope_39 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:then:",
  scope_39_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:then: */
static const MappingEntry scope_38_entries[3] = {
  /* 0 */ { MAP_INSTANCE, "UNISIG_Validation_Scenarios::Story_TEST_VAL_SUB026_3B01 2", NULL, sizeof(outC_Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, Context_2), NULL, &scope_30_entries[0], isActive_kcg_bool_kcg_true, &scope_70, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _L2_IfBlock1), &_Type_kcg_real_Utils, &scope_30_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _L8_IfBlock1), &_Type_CompressedBaliseMessage_TM_Utils, &scope_30_entries[0], isActive_kcg_bool_kcg_true, &scope_414, 1, 2}
};
static const MappingScope scope_38 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:then:",
  scope_38_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:then: */
static const MappingEntry scope_37_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _L3_IfBlock1), &_Type_CompressedBaliseMessage_TM_Utils, &scope_31_entries[0], isActive_kcg_bool_kcg_true, &scope_414, 1, 0}
};
static const MappingScope scope_37 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:then:",
  scope_37_entries, 1,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:then: */
static const MappingEntry scope_36_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _L35_IfBlock1), &_Type_CompressedBaliseMessage_TM_Utils, &scope_32_entries[0], isActive_kcg_bool_kcg_true, &scope_414, 1, 0}
};
static const MappingScope scope_36 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:then:",
  scope_36_entries, 1,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_35_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _L6_IfBlock1), &_Type_CompressedBaliseMessage_TM_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_true, &scope_414, 1, 0}
};
static const MappingScope scope_35 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:else:then:",
  scope_35_entries, 1,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_34_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _L36_IfBlock1), &_Type_CompressedBaliseMessage_TM_Utils, &scope_33_entries[0], isActive_kcg_bool_kcg_false, &scope_414, 1, 0}
};
static const MappingScope scope_34 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:else:else:",
  scope_34_entries, 1,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:else: */
static const MappingEntry scope_33_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive_kcg_bool_kcg_false, &scope_34, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive_kcg_bool_kcg_true, &scope_35, 1, 2}
};
static const MappingScope scope_33 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:else:",
  scope_33_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else: */
static const MappingEntry scope_32_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_32_entries[0], isActive_kcg_bool_kcg_false, &scope_33, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_32_entries[0], isActive_kcg_bool_kcg_true, &scope_36, 1, 2}
};
static const MappingScope scope_32 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:else:",
  scope_32_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else: */
static const MappingEntry scope_31_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_31_entries[0], isActive_kcg_bool_kcg_false, &scope_32, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_31_entries[0], isActive_kcg_bool_kcg_true, &scope_37, 1, 2}
};
static const MappingScope scope_31 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:else:",
  scope_31_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else: */
static const MappingEntry scope_30_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_30_entries[0], isActive_kcg_bool_kcg_false, &scope_31, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_30_entries[0], isActive_kcg_bool_kcg_true, &scope_38, 1, 2}
};
static const MappingScope scope_30 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:else:",
  scope_30_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1: */
static const MappingEntry scope_29_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_29_entries[0], isActive_kcg_bool_kcg_false, &scope_30, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_29_entries[0], isActive_kcg_bool_kcg_true, &scope_39, 1, 2}
};
static const MappingScope scope_29 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_PkgIfBlock1:",
  scope_29_entries, 3,
};

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg */
static const MappingEntry scope_28_entries[4] = {
  /* 0 */ { MAP_LOCAL, "CurrentTrackMsg", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, CurrentTrackMsg), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 1},
  /* 1 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_29, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, _L14), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 2},
  /* 3 */ { MAP_OUTPUT, "out_compressedTrackMsg", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg, out_compressedTrackMsg), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 3}
};
static const MappingScope scope_28 = {
  "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack/ Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg",
  scope_28_entries, 4,
};

/* Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader/ Convert_CompressedBalise__Subfuction_Enhancements_Pkg */
static const MappingEntry scope_27_entries[7] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CASTLIB_BaliseHeaders 1", NULL, sizeof(outC_CASTLIB_BaliseHeaders_TM_conversions), offsetof(outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg, Context_1), NULL, NULL, NULL, &scope_69, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg, _L1), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg, _L3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_415, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg, _L5), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 4},
  /* 5 */ { MAP_OUTPUT, "out_CompressedPackets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg, out_CompressedPackets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 5},
  /* 6 */ { MAP_OUTPUT, "out_TelegramHeader", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg, out_TelegramHeader), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 6}
};
static const MappingScope scope_27 = {
  "Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader/ Convert_CompressedBalise__Subfuction_Enhancements_Pkg",
  scope_27_entries, 7,
};

/* Subfuction_Enhancements_Pkg::Check_EndofTrack/ Check_EndofTrack_Subfuction_Enhancements_Pkg */
static const MappingEntry scope_26_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Check_EndofTrack_Subfuction_Enhancements_Pkg, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Check_EndofTrack_Subfuction_Enhancements_Pkg, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Check_EndofTrack_Subfuction_Enhancements_Pkg, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "out_TracksFinished", NULL, sizeof(kcg_bool), offsetof(outC_Check_EndofTrack_Subfuction_Enhancements_Pkg, out_TracksFinished), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_26 = {
  "Subfuction_Enhancements_Pkg::Check_EndofTrack/ Check_EndofTrack_Subfuction_Enhancements_Pkg",
  scope_26_entries, 4,
};

/* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg/ Receive_TrackSide_Msg_Receive_TrackSide_Msg_PkgIfBlock1:then: */
static const MappingEntry scope_25_entries[3] = {
  /* 0 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::Receive_RadioMsg 1", NULL, sizeof(outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _1_Context_1), NULL, &scope_23_entries[0], isActive_kcg_bool_kcg_true, &scope_68, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L1_IfBlock1), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, &scope_23_entries[0], isActive_kcg_bool_kcg_true, &scope_447, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(TrackSide_ForCheck_T_Common_Types_Pkg), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L2_IfBlock1), &_Type_TrackSide_ForCheck_T_Common_Types_Pkg_Utils, &scope_23_entries[0], isActive_kcg_bool_kcg_true, &scope_431, 1, 2}
};
static const MappingScope scope_25 = {
  "Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg/ Receive_TrackSide_Msg_Receive_TrackSide_Msg_PkgIfBlock1:then:",
  scope_25_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg/ Receive_TrackSide_Msg_Receive_TrackSide_Msg_PkgIfBlock1:else: */
static const MappingEntry scope_24_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram 1", NULL, sizeof(outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, Context_1), NULL, &scope_23_entries[0], isActive_kcg_bool_kcg_false, &scope_67, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L12_IfBlock1), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, &scope_23_entries[0], isActive_kcg_bool_kcg_false, &scope_410, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(TrackSide_ForCheck_T_Common_Types_Pkg), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L22_IfBlock1), &_Type_TrackSide_ForCheck_T_Common_Types_Pkg_Utils, &scope_23_entries[0], isActive_kcg_bool_kcg_false, &scope_431, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_23_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L4_IfBlock1), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, &scope_23_entries[0], isActive_kcg_bool_kcg_false, &scope_447, 1, 3}
};
static const MappingScope scope_24 = {
  "Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg/ Receive_TrackSide_Msg_Receive_TrackSide_Msg_PkgIfBlock1:else:",
  scope_24_entries, 5,
};

/* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg/ Receive_TrackSide_Msg_Receive_TrackSide_Msg_PkgIfBlock1: */
static const MappingEntry scope_23_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_kcg_bool_kcg_false, &scope_24, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_kcg_bool_kcg_true, &scope_25, 1, 2}
};
static const MappingScope scope_23 = {
  "Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg/ Receive_TrackSide_Msg_Receive_TrackSide_Msg_PkgIfBlock1:",
  scope_23_entries, 3,
};

/* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg/ Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg */
static const MappingEntry scope_22_entries[12] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_23, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L10), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L2), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L8), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "isRadioMsg", NULL, sizeof(kcg_bool), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, isRadioMsg), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 11 */ { MAP_OUTPUT, "outTrackMessage_for_check", NULL, sizeof(TrackSide_ForCheck_T_Common_Types_Pkg), offsetof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg, outTrackMessage_for_check), &_Type_TrackSide_ForCheck_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 11}
};
static const MappingScope scope_22 = {
  "Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg/ Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg",
  scope_22_entries, 12,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsSM1:Driving:<1 */
static const MappingEntry scope_21_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_15_entries[1], isActive_SSM_TR_SM1_SSM_TR_Driving_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_21 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsSM1:Driving:<1",
  scope_21_entries, 1,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsSM1:Driving: */
static const MappingEntry scope_20_entries[29] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_15_entries[1], isActive_SSM_TR_SM1_SSM_TR_Driving_1_SM1, &scope_21, 1, 28},
  /* 1 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, init), &_Type_kcg_bool_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 0, 4},
  /* 2 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L15_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 0, 5},
  /* 3 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, init), &_Type_kcg_bool_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L14_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 0, 3},
  /* 5 */ { MAP_INSTANCE, "Toolbox::Converters::m_s_To_km_h 2", NULL, sizeof(outC_m_s_To_km_h_Toolbox_Converters), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, Context_2), NULL, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, &scope_62, 1, 8},
  /* 6 */ { MAP_INSTANCE, "Toolbox::Physics::Basic::PHYSICS_acceleratedMotion 1", NULL, sizeof(outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _2_Context_1), NULL, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, &scope_66, 1, 9},
  /* 7 */ { MAP_INSTANCE, "Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime 1", NULL, sizeof(outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, Context_1), NULL, &scope_15_entries[3], isActive_kcg_bool_kcg_true, &scope_64, 1, 0},
  /* 8 */ { MAP_INSTANCE, "Toolbox::Physics::Basic::PHYSICS_simulateAirResistance 1", NULL, sizeof(outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _1_Context_1), NULL, &scope_15_entries[4], isActive_kcg_bool_kcg_true, &scope_65, 1, 1},
  /* 9 */ { MAP_LOCAL, "_L14@mem", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L14_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 0, 6},
  /* 10 */ { MAP_LOCAL, "_L15@mem", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L15_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 0, 7},
  /* 11 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L16_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L18_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 13},
  /* 13 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L19_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L20_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L21_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L25_SM1_Driving), &_Type_kcg_bool_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L26_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L27_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L28_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 20},
  /* 20 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L29_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L30_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 22},
  /* 22 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L31_SM1_Driving), &_Type_kcg_bool_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 23},
  /* 23 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L32_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 24},
  /* 24 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L33_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 26},
  /* 25 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L34_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 25},
  /* 26 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L35_SM1_Driving), &_Type_kcg_int_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 27},
  /* 27 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L6_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 10},
  /* 28 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L8_SM1_Driving), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 1, 11}
};
static const MappingScope scope_20 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsSM1:Driving:",
  scope_20_entries, 29,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsSM1:Reset:<1 */
static const MappingEntry scope_19_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_15_entries[1], isActive_SSM_TR_SM1_SSM_TR_Reset_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_19 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsSM1:Reset:<1",
  scope_19_entries, 1,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsSM1:Reset: */
static const MappingEntry scope_18_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_15_entries[1], isActive_SSM_TR_SM1_SSM_TR_Reset_1_SM1, &scope_19, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L2_SM1_Reset), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Reset_SM1, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L4_SM1_Reset), &_Type_kcg_real_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Reset_SM1, NULL, 1, 1}
};
static const MappingScope scope_18 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsSM1:Reset:",
  scope_18_entries, 3,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsSM1: */
static const MappingEntry scope_15_entries[11] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _7_ck_every), &_Type_kcg_bool_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 0, 7},
  /* 4 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, ck_every), &_Type_kcg_bool_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 0, 8},
  /* 5 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2},
  /* 6 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 7 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 8 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4},
  /* 9 */ { MAP_STATE, "Driving:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, &scope_20, 1, 10},
  /* 10 */ { MAP_STATE, "Reset:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Reset_SM1, &scope_18, 1, 9}
};
static const MappingScope scope_15 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsSM1:",
  scope_15_entries, 11,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:then: */
static const MappingEntry scope_14_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L2_IfBlock1), &_Type_kcg_real_Utils, &scope_8_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_14 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:then:",
  scope_14_entries, 1,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:else:then: */
static const MappingEntry scope_13_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L1_IfBlock1), &_Type_kcg_real_Utils, &scope_9_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_13 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:else:then:",
  scope_13_entries, 1,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:else:else:then: */
static const MappingEntry scope_12_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L19_IfBlock1), &_Type_kcg_real_Utils, &scope_10_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
static const MappingScope scope_12 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:else:else:then:",
  scope_12_entries, 1,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:else:else:else: */
static const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L110_IfBlock1), &_Type_kcg_real_Utils, &scope_10_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_11 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:else:else:else:",
  scope_11_entries, 1,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:else:else: */
static const MappingEntry scope_10_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive_kcg_bool_kcg_false, &scope_11, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive_kcg_bool_kcg_true, &scope_12, 1, 2}
};
static const MappingScope scope_10 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:else:else:",
  scope_10_entries, 3,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:else: */
static const MappingEntry scope_9_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _8_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_kcg_bool_kcg_false, &scope_10, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_kcg_bool_kcg_true, &scope_13, 1, 2}
};
static const MappingScope scope_9 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:else:",
  scope_9_entries, 3,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1: */
static const MappingEntry scope_8_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_false, &scope_9, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_kcg_bool_kcg_true, &scope_14, 1, 2}
};
static const MappingScope scope_8 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_PhysicsIfBlock1:",
  scope_8_entries, 3,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_Physicsdigital::FlipFlopSet 1/ */
static const MappingEntry scope_7_entries[11] = {
  /* 0 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, init6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L2_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 2 */ { MAP_OUTPUT, "FFS_Output", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, FFS_Output_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L10_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L11_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L12_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L2@mem", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L2_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L5_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L6_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_7 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_Physicsdigital::FlipFlopSet 1/",
  scope_7_entries, 11,
};

/* Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_Physics */
static const MappingEntry scope_6_entries[46] = {
  /* 0 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, init6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, init), &_Type_kcg_bool_Utils, &scope_15_entries[0], isActive_SSM_ST_SM1_SSM_st_Driving_SM1, NULL, 0, 1},
  /* 2 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_8, 1, 6},
  /* 3 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_15, 1, 7},
  /* 4 */ { MAP_INSTANCE, "Toolbox::Converters::m_s_To_km_h 1", NULL, sizeof(outC_m_s_To_km_h_Toolbox_Converters), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _4_Context_1), NULL, NULL, NULL, &scope_62, 1, 3},
  /* 5 */ { MAP_INSTANCE, "Toolbox::Functions::TRAIN_systemTimeGenerator 1", NULL, sizeof(outC_TRAIN_systemTimeGenerator_Toolbox_Functions), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _3_Context_1), NULL, NULL, NULL, &scope_63, 1, 4},
  /* 6 */ { MAP_INSTANCE, "Toolbox::TrainModules::ODO 1", NULL, sizeof(outC_ODO_Toolbox_TrainModules), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _5_Context_1), NULL, NULL, NULL, &scope_61, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L15), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 19},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L16), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 18},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L17), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L18), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 11 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L19), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L20), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L21), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L24", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L24), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L26), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 23},
  /* 17 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 18 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 19 */ { MAP_LOCAL, "_L5", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L5), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_410, 1, 12},
  /* 20 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L6), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 21 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L62), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L63), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_int), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L64), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L65", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L65), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L66), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_int), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L67), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L70), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L71", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L71), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33},
  /* 29 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L72), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 30 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L73), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 31 */ { MAP_LOCAL, "_L74", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L74), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 36},
  /* 32 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L75), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37},
  /* 33 */ { MAP_LOCAL, "_L76", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L76), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38},
  /* 34 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L77), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39},
  /* 35 */ { MAP_LOCAL, "_L79", NULL, sizeof(kcg_int), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, _L79), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 36 */ { MAP_EXPANDED, "digital::FlipFlopSet 1", NULL, 0, 0, NULL, NULL, NULL, &scope_7, 1, 5},
  /* 37 */ { MAP_LOCAL, "finalAccelerationInPercent", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, finalAccelerationInPercent), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 38 */ { MAP_LOCAL, "needZeroPosition", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, needZeroPosition), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 39 */ { MAP_OUTPUT, "odometry", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, odometry), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_410, 1, 44},
  /* 40 */ { MAP_OUTPUT, "position", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, position), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 41},
  /* 41 */ { MAP_OUTPUT, "resetOut", NULL, sizeof(kcg_bool), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, resetOut), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 45},
  /* 42 */ { MAP_OUTPUT, "timestamp", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, timestamp), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 43},
  /* 43 */ { MAP_LOCAL, "tmpPosition", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, tmpPosition), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 44 */ { MAP_LOCAL, "tmpVelocity", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, tmpVelocity), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 8},
  /* 45 */ { MAP_OUTPUT, "velocity", NULL, sizeof(kcg_real), offsetof(outC_PHYSICS_MovementSimulation_Toolbox_Physics, velocity), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 42}
};
static const MappingScope scope_6 = {
  "Toolbox::Physics::PHYSICS_MovementSimulation/ PHYSICS_MovementSimulation_Toolbox_Physics",
  scope_6_entries, 46,
};

/* Toolbox::TrainModules::BTM/ BTM_Toolbox_TrainModules */
static const MappingEntry scope_5_entries[23] = {
  /* 0 */ { MAP_INSTANCE, "Toolbox::Functions::ODO_doLocInacc 1", NULL, sizeof(outC_ODO_doLocInacc_Toolbox_Functions), offsetof(outC_BTM_Toolbox_TrainModules, Context_1), NULL, NULL, NULL, &scope_60, 1, 0},
  /* 1 */ { MAP_OUTPUT, "TrackMessage", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, TrackMessage), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 22},
  /* 2 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_BTM_Toolbox_TrainModules, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_BTM_Toolbox_TrainModules, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L18), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_410, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L20", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L20), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(NID_C), offsetof(outC_BTM_Toolbox_TrainModules, _L22), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_BTM_Toolbox_TrainModules, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_BTM_Toolbox_TrainModules, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L25), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L26), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L27), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L28), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L29), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 16},
  /* 15 */ { MAP_LOCAL, "_L32", NULL, sizeof(API_RadioMsgHeader_T_API_Msg_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L32), &_Type_API_RadioMsgHeader_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_449, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L33", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L33), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_413, 1, 18},
  /* 17 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_BTM_Toolbox_TrainModules, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_BTM_Toolbox_TrainModules, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 19 */ { MAP_LOCAL, "_L37", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L37), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 21},
  /* 20 */ { MAP_LOCAL, "_L4", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L4), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 1},
  /* 21 */ { MAP_LOCAL, "_L5", NULL, sizeof(API_TelegramHeader_T_API_Msg_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L5), &_Type_API_TelegramHeader_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_448, 1, 2},
  /* 22 */ { MAP_LOCAL, "_L6", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_BTM_Toolbox_TrainModules, _L6), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_5 = {
  "Toolbox::TrainModules::BTM/ BTM_Toolbox_TrainModules",
  scope_5_entries, 23,
};

/* Subfuction_Enhancements_Pkg::FilterTrackMsg/ FilterTrackMsg_Subfuction_Enhancements_Pkg */
static const MappingEntry scope_4_entries[47] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, rem_TrackMsg), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 2 */ { MAP_OUTPUT, "FiltereTrackMsg", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, FiltereTrackMsg), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 46},
  /* 3 */ { MAP_LOCAL, "LastBTreceived", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, LastBTreceived), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 3},
  /* 4 */ { MAP_LOCAL, "TrackMsg@mem", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, rem_TrackMsg), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 0, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L1), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L101", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L101), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 45},
  /* 7 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L43), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L44", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L44), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L45", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L45), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L46", NULL, sizeof(API_TelegramHeader_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L46), &_Type_API_TelegramHeader_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_448, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L47", NULL, sizeof(API_RadioMsgHeader_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L47), &_Type_API_RadioMsgHeader_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_449, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L48", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L48), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L49), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 14 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 15 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L51), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 16 */ { MAP_LOCAL, "_L52", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L52), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 8},
  /* 17 */ { MAP_LOCAL, "_L53", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L53), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 9},
  /* 18 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L56), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L57", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L57), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L58), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 21 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L59), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 22 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L60), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26},
  /* 23 */ { MAP_LOCAL, "_L61", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L61), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 27},
  /* 24 */ { MAP_LOCAL, "_L62", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L62), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_433, 1, 28},
  /* 25 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L63), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 26 */ { MAP_LOCAL, "_L64", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L64), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 19},
  /* 27 */ { MAP_LOCAL, "_L65", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L65), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 20},
  /* 28 */ { MAP_LOCAL, "_L66", NULL, sizeof(API_TelegramHeader_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L66), &_Type_API_TelegramHeader_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_448, 1, 21},
  /* 29 */ { MAP_LOCAL, "_L67", NULL, sizeof(API_RadioMsgHeader_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L67), &_Type_API_RadioMsgHeader_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_449, 1, 22},
  /* 30 */ { MAP_LOCAL, "_L68", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L68), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 23},
  /* 31 */ { MAP_LOCAL, "_L69", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L69), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 29},
  /* 32 */ { MAP_LOCAL, "_L71", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L71), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 33 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L72), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31},
  /* 34 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L73), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L75), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L77), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 37 */ { MAP_LOCAL, "_L78", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L78), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 38 */ { MAP_LOCAL, "_L79", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L79), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 39 */ { MAP_LOCAL, "_L80", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L80), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37},
  /* 40 */ { MAP_LOCAL, "_L81", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L81), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38},
  /* 41 */ { MAP_LOCAL, "_L82", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L82), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 39},
  /* 42 */ { MAP_LOCAL, "_L83", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L83), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 40},
  /* 43 */ { MAP_LOCAL, "_L84", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L84), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 41},
  /* 44 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_bool), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L86), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42},
  /* 45 */ { MAP_LOCAL, "_L87", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L87), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 43},
  /* 46 */ { MAP_LOCAL, "_L94", NULL, sizeof(RBC_Id_T_Common_Types_Pkg), offsetof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg, _L94), &_Type_RBC_Id_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_429, 1, 44}
};
static const MappingScope scope_4 = {
  "Subfuction_Enhancements_Pkg::FilterTrackMsg/ FilterTrackMsg_Subfuction_Enhancements_Pkg",
  scope_4_entries, 47,
};

/* VerReTrackMsg_Pkg::Input_MultiplexerInit/ Input_MultiplexerInit_VerReTrackMsg_Pkg */
static const MappingEntry scope_3_entries[14] = {
  /* 0 */ { MAP_OUTPUT, "EndofStory", NULL, sizeof(kcg_real), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, EndofStory), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_INSTANCE, "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver 1", NULL, sizeof(outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, _1_Context_1), NULL, NULL, NULL, &scope_40, 1, 0},
  /* 2 */ { MAP_INSTANCE, "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData 1", NULL, sizeof(outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, Context_1), NULL, NULL, NULL, &scope_48, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_real), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, _L11), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_real), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, _L13), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, _L14), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 10 */ { MAP_OUTPUT, "out_TotalNrofBGs", NULL, sizeof(kcg_int), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, out_TotalNrofBGs), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_OUTPUT, "out_acceleration", NULL, sizeof(kcg_real), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, out_acceleration), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_OUTPUT, "out_initialPosition", NULL, sizeof(kcg_real), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, out_initialPosition), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_OUTPUT, "out_initialVelocity", NULL, sizeof(kcg_real), offsetof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg, out_initialVelocity), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11}
};
static const MappingScope scope_3 = {
  "VerReTrackMsg_Pkg::Input_MultiplexerInit/ Input_MultiplexerInit_VerReTrackMsg_Pkg",
  scope_3_entries, 14,
};

/* VerReTrackMsg_Pkg::Input_Multiplexer/ Input_Multiplexer_VerReTrackMsg_Pkg */
static const MappingEntry scope_2_entries[13] = {
  /* 0 */ { MAP_INSTANCE, "Subfuction_Enhancements_Pkg::Check_EndofTrack 1", NULL, sizeof(outC_Check_EndofTrack_Subfuction_Enhancements_Pkg), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, Context_1), NULL, NULL, NULL, &scope_26, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Subfuction_Enhancements_Pkg::Convert_CompressedBalise_to_PacketandHeader 1", NULL, sizeof(outC_Convert_CompressedBalise__Subfuction_Enhancements_Pkg), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, _2_Context_1), NULL, NULL, NULL, &scope_27, 1, 1},
  /* 2 */ { MAP_INSTANCE, "Subfunctions_CheckBGInput_Pkg::Multiplexer_TestTrack 1", NULL, sizeof(outC_Multiplexer_TestTrack_Subfunctions_CheckBGInput_Pkg), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, _1_Context_1), NULL, NULL, NULL, &scope_28, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_real), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, _L18), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, _L8), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, _L9), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_414, 1, 8},
  /* 10 */ { MAP_OUTPUT, "out_TelegramHeader", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, out_TelegramHeader), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 11},
  /* 11 */ { MAP_OUTPUT, "out_TrackFinished", NULL, sizeof(kcg_bool), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, out_TrackFinished), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_OUTPUT, "out_compressedPackets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Input_Multiplexer_VerReTrackMsg_Pkg, out_compressedPackets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 10}
};
static const MappingScope scope_2 = {
  "VerReTrackMsg_Pkg::Input_Multiplexer/ Input_Multiplexer_VerReTrackMsg_Pkg",
  scope_2_entries, 13,
};

/* VerReTrackMsg_Pkg::Root2_VerReTrackMsg/ Root2_VerReTrackMsg_VerReTrackMsg_Pkg */
static const MappingEntry scope_1_entries[42] = {
  /* 0 */ { MAP_OUTPUT, "BG_Message_Array", NULL, sizeof(BG_Message_T_BG_Types_Pkg), (size_t)&outputs_ctx.BG_Message_Array, &_Type_BG_Message_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_436, 1, 39},
  /* 1 */ { MAP_INSTANCE, "Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg 1", NULL, sizeof(outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg), (size_t)&outputs_ctx._4_Context_1, NULL, NULL, NULL, &scope_22, 1, 5},
  /* 2 */ { MAP_INSTANCE, "Subfuction_Enhancements_Pkg::FilterTrackMsg 2", NULL, sizeof(outC_FilterTrackMsg_Subfuction_Enhancements_Pkg), (size_t)&outputs_ctx._3_Context_2, NULL, NULL, NULL, &scope_4, 1, 2},
  /* 3 */ { MAP_INPUT, "TestDriver", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.TestDriver, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 4 */ { MAP_INPUT, "TestStory", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.TestStory, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 41},
  /* 5 */ { MAP_INSTANCE, "Toolbox::Physics::PHYSICS_MovementSimulation 2", NULL, sizeof(outC_PHYSICS_MovementSimulation_Toolbox_Physics), (size_t)&outputs_ctx._1_Context_2, NULL, NULL, NULL, &scope_6, 1, 4},
  /* 6 */ { MAP_INSTANCE, "Toolbox::TrainModules::BTM 2", NULL, sizeof(outC_BTM_Toolbox_TrainModules), (size_t)&outputs_ctx._2_Context_2, NULL, NULL, NULL, &scope_5, 1, 3},
  /* 7 */ { MAP_INSTANCE, "VerReTrackMsg_Pkg::Input_Multiplexer 1", NULL, sizeof(outC_Input_Multiplexer_VerReTrackMsg_Pkg), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 8 */ { MAP_INSTANCE, "VerReTrackMsg_Pkg::Input_MultiplexerInit 2", NULL, sizeof(outC_Input_MultiplexerInit_VerReTrackMsg_Pkg), (size_t)&outputs_ctx.Context_2, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L21, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 29},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx._L22, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_425, 1, 26},
  /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), (size_t)&outputs_ctx._L23, &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_432, 1, 27},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L24, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L25, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 14 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L27, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 15 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L28, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_real), (size_t)&outputs_ctx._L30, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_real), (size_t)&outputs_ctx._L31, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_real), (size_t)&outputs_ctx._L32, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_real), (size_t)&outputs_ctx._L33, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 19},
  /* 20 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L34, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_real), (size_t)&outputs_ctx._L35, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 21},
  /* 22 */ { MAP_LOCAL, "_L36", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), (size_t)&outputs_ctx._L36, &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 16},
  /* 23 */ { MAP_LOCAL, "_L37", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), (size_t)&outputs_ctx._L37, &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_447, 1, 15},
  /* 24 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L38, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 25 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_real), (size_t)&outputs_ctx._L39, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 9},
  /* 26 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_real), (size_t)&outputs_ctx._L40, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 27 */ { MAP_LOCAL, "_L41", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L41, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 11},
  /* 28 */ { MAP_LOCAL, "_L42", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L42, &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_410, 1, 12},
  /* 29 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L43, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 30 */ { MAP_LOCAL, "_L44", NULL, sizeof(TrackSide_ForCheck_T_Common_Types_Pkg), (size_t)&outputs_ctx._L44, &_Type_TrackSide_ForCheck_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_431, 1, 30},
  /* 31 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L45, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 32 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L46, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L47", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L47, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 32},
  /* 34 */ { MAP_LOCAL, "_L48", NULL, sizeof(MsgSource_T_Common_Types_Pkg), (size_t)&outputs_ctx._L48, &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 33},
  /* 35 */ { MAP_LOCAL, "_L49", NULL, sizeof(BG_Message_T_BG_Types_Pkg), (size_t)&outputs_ctx._L49, &_Type_BG_Message_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_436, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L50", NULL, sizeof(RadioMessage_T_Radio_Types_Pkg), (size_t)&outputs_ctx._L50, &_Type_RadioMessage_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_451, 1, 35},
  /* 37 */ { MAP_LOCAL, "_L51", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L51, &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_410, 1, 37},
  /* 38 */ { MAP_LOCAL, "currentOdometry", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx.currentOdometry, &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_410, 1, 8},
  /* 39 */ { MAP_LOCAL, "currentPosition", NULL, sizeof(kcg_real), (size_t)&outputs_ctx.currentPosition, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 40 */ { MAP_PROBE, "dbgVelocity", NULL, sizeof(kcg_real), (size_t)&outputs_ctx.dbgVelocity, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 41 */ { MAP_OUTPUT, "ready", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.ready, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38}
};
static const MappingScope scope_1 = {
  "VerReTrackMsg_Pkg::Root2_VerReTrackMsg/ Root2_VerReTrackMsg_VerReTrackMsg_Pkg",
  scope_1_entries, 42,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "VerReTrackMsg_Pkg::Root2_VerReTrackMsg", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

