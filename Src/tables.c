#include <stdint.h>


const uint16_t sine_50Hz[] = { 
  2047, 2067, 2087, 2107, 2127, 2147, 2167, 2187, 2207, 2227, 2247, 2267, 2287, 2307, 2327, 2347, 2367, 2387, 2406, 2426, 
  2446, 2466, 2485, 2505, 2524, 2544, 2563, 2583, 2602, 2621, 2641, 2660, 2679, 2698, 2717, 2736, 2755, 2774, 2793, 2811, 
  2830, 2848, 2867, 2885, 2903, 2922, 2940, 2958, 2976, 2994, 3011, 3029, 3047, 3064, 3082, 3099, 3116, 3133, 3150, 3167, 
  3184, 3200, 3217, 3233, 3250, 3266, 3282, 3298, 3314, 3330, 3345, 3361, 3376, 3391, 3406, 3421, 3436, 3451, 3465, 3480, 
  3494, 3508, 3522, 3536, 3550, 3563, 3577, 3590, 3603, 3616, 3629, 3642, 3654, 3666, 3679, 3691, 3703, 3714, 3726, 3737, 
  3749, 3760, 3771, 3781, 3792, 3802, 3813, 3823, 3832, 3842, 3852, 3861, 3870, 3879, 3888, 3897, 3905, 3914, 3922, 3930, 
  3938, 3945, 3953, 3960, 3967, 3974, 3981, 3987, 3993, 3999, 4005, 4011, 4017, 4022, 4027, 4032, 4037, 4042, 4046, 4050, 
  4054, 4058, 4062, 4065, 4068, 4071, 4074, 4077, 4079, 4082, 4084, 4086, 4087, 4089, 4090, 4091, 4092, 4093, 4093, 4093, 
  4094, 4093, 4093, 4093, 4092, 4091, 4090, 4089, 4087, 4086, 4084, 4082, 4079, 4077, 4074, 4071, 4068, 4065, 4062, 4058, 
  4054, 4050, 4046, 4042, 4037, 4032, 4027, 4022, 4017, 4011, 4005, 3999, 3993, 3987, 3981, 3974, 3967, 3960, 3953, 3945, 
  3938, 3930, 3922, 3914, 3905, 3897, 3888, 3879, 3870, 3861, 3852, 3842, 3832, 3823, 3813, 3802, 3792, 3781, 3771, 3760, 
  3749, 3737, 3726, 3714, 3703, 3691, 3679, 3666, 3654, 3642, 3629, 3616, 3603, 3590, 3577, 3563, 3550, 3536, 3522, 3508, 
  3494, 3480, 3465, 3451, 3436, 3421, 3406, 3391, 3376, 3361, 3345, 3330, 3314, 3298, 3282, 3266, 3250, 3233, 3217, 3200, 
  3184, 3167, 3150, 3133, 3116, 3099, 3082, 3064, 3047, 3029, 3011, 2994, 2976, 2958, 2940, 2922, 2903, 2885, 2867, 2848, 
  2830, 2811, 2793, 2774, 2755, 2736, 2717, 2698, 2679, 2660, 2641, 2621, 2602, 2583, 2563, 2544, 2524, 2505, 2485, 2466, 
  2446, 2426, 2406, 2387, 2367, 2347, 2327, 2307, 2287, 2267, 2247, 2227, 2207, 2187, 2167, 2147, 2127, 2107, 2087, 2067, 
  2046, 2026, 2006, 1986, 1966, 1946, 1926, 1906, 1886, 1866, 1846, 1826, 1806, 1786, 1766, 1746, 1726, 1706, 1687, 1667, 
  1647, 1627, 1608, 1588, 1569, 1549, 1530, 1510, 1491, 1472, 1452, 1433, 1414, 1395, 1376, 1357, 1338, 1319, 1300, 1282, 
  1263, 1245, 1226, 1208, 1190, 1171, 1153, 1135, 1117, 1099, 1082, 1064, 1046, 1029, 1011, 994, 977, 960, 943, 926, 
  909, 893, 876, 860, 843, 827, 811, 795, 779, 763, 748, 732, 717, 702, 687, 672, 657, 642, 628, 613, 
  599, 585, 571, 557, 543, 530, 516, 503, 490, 477, 464, 451, 439, 427, 414, 402, 390, 379, 367, 356, 
  344, 333, 322, 312, 301, 291, 280, 270, 261, 251, 241, 232, 223, 214, 205, 196, 188, 179, 171, 163, 
  155, 148, 140, 133, 126, 119, 112, 106, 100, 94, 88, 82, 76, 71, 66, 61, 56, 51, 47, 43, 
  39, 35, 31, 28, 25, 22, 19, 16, 14, 11, 9, 7, 6, 4, 3, 2, 1, 0, 0, 0, 
  0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 9, 11, 14, 16, 19, 22, 25, 28, 31, 35, 
  39, 43, 47, 51, 56, 61, 66, 71, 76, 82, 88, 94, 100, 106, 112, 119, 126, 133, 140, 148, 
  155, 163, 171, 179, 188, 196, 205, 214, 223, 232, 241, 251, 261, 270, 280, 291, 301, 312, 322, 333, 
  344, 356, 367, 379, 390, 402, 414, 427, 439, 451, 464, 477, 490, 503, 516, 530, 543, 557, 571, 585, 
  599, 613, 628, 642, 657, 672, 687, 702, 717, 732, 748, 763, 779, 795, 811, 827, 843, 860, 876, 893, 
  909, 926, 943, 960, 977, 994, 1011, 1029, 1046, 1064, 1082, 1099, 1117, 1135, 1153, 1171, 1190, 1208, 1226, 1245, 
  1263, 1282, 1300, 1319, 1338, 1357, 1376, 1395, 1414, 1433, 1452, 1472, 1491, 1510, 1530, 1549, 1569, 1588, 1608, 1627, 
  1647, 1667, 1687, 1706, 1726, 1746, 1766, 1786, 1806, 1826, 1846, 1866, 1886, 1906, 1926, 1946, 1966, 1986, 2006, 2026
  
};

const uint16_t sine_100Hz[] = { 
  2047, 2087, 2127, 2167, 2207, 2247, 2287, 2327, 2367, 2406, 2446, 2485, 2524, 2563, 2602, 2641, 2679, 2717, 2755, 2793, 
  2830, 2867, 2903, 2940, 2976, 3011, 3047, 3082, 3116, 3150, 3184, 3217, 3250, 3282, 3314, 3345, 3376, 3406, 3436, 3465, 
  3494, 3522, 3550, 3577, 3603, 3629, 3654, 3679, 3703, 3726, 3749, 3771, 3792, 3813, 3832, 3852, 3870, 3888, 3905, 3922, 
  3938, 3953, 3967, 3981, 3993, 4005, 4017, 4027, 4037, 4046, 4054, 4062, 4068, 4074, 4079, 4084, 4087, 4090, 4092, 4093, 
  4094, 4093, 4092, 4090, 4087, 4084, 4079, 4074, 4068, 4062, 4054, 4046, 4037, 4027, 4017, 4005, 3993, 3981, 3967, 3953, 
  3938, 3922, 3905, 3888, 3870, 3852, 3832, 3813, 3792, 3771, 3749, 3726, 3703, 3679, 3654, 3629, 3603, 3577, 3550, 3522, 
  3494, 3465, 3436, 3406, 3376, 3345, 3314, 3282, 3250, 3217, 3184, 3150, 3116, 3082, 3047, 3011, 2976, 2940, 2903, 2867, 
  2830, 2793, 2755, 2717, 2679, 2641, 2602, 2563, 2524, 2485, 2446, 2406, 2367, 2327, 2287, 2247, 2207, 2167, 2127, 2087, 
  2046, 2006, 1966, 1926, 1886, 1846, 1806, 1766, 1726, 1687, 1647, 1608, 1569, 1530, 1491, 1452, 1414, 1376, 1338, 1300, 
  1263, 1226, 1190, 1153, 1117, 1082, 1046, 1011, 977, 943, 909, 876, 843, 811, 779, 748, 717, 687, 657, 628, 
  599, 571, 543, 516, 490, 464, 439, 414, 390, 367, 344, 322, 301, 280, 261, 241, 223, 205, 188, 171, 
  155, 140, 126, 112, 100, 88, 76, 66, 56, 47, 39, 31, 25, 19, 14, 9, 6, 3, 1, 0, 
  0, 0, 1, 3, 6, 9, 14, 19, 25, 31, 39, 47, 56, 66, 76, 88, 100, 112, 126, 140, 
  155, 171, 188, 205, 223, 241, 261, 280, 301, 322, 344, 367, 390, 414, 439, 464, 490, 516, 543, 571, 
  599, 628, 657, 687, 717, 748, 779, 811, 843, 876, 909, 943, 977, 1011, 1046, 1082, 1117, 1153, 1190, 1226, 
  1263, 1300, 1338, 1376, 1414, 1452, 1491, 1530, 1569, 1608, 1647, 1687, 1726, 1766, 1806, 1846, 1886, 1926, 1966, 2006
  
};

const uint16_t sine_200Hz[] = { 
  2047, 2127, 2207, 2287, 2367, 2446, 2524, 2602, 2679, 2755, 2830, 2903, 2976, 3047, 3116, 3184, 3250, 3314, 3376, 3436, 
  3494, 3550, 3603, 3654, 3703, 3749, 3792, 3832, 3870, 3905, 3938, 3967, 3993, 4017, 4037, 4054, 4068, 4079, 4087, 4092, 
  4094, 4092, 4087, 4079, 4068, 4054, 4037, 4017, 3993, 3967, 3938, 3905, 3870, 3832, 3792, 3749, 3703, 3654, 3603, 3550, 
  3494, 3436, 3376, 3314, 3250, 3184, 3116, 3047, 2976, 2903, 2830, 2755, 2679, 2602, 2524, 2446, 2367, 2287, 2207, 2127, 
  2046, 1966, 1886, 1806, 1726, 1647, 1569, 1491, 1414, 1338, 1263, 1190, 1117, 1046, 977, 909, 843, 779, 717, 657, 
  599, 543, 490, 439, 390, 344, 301, 261, 223, 188, 155, 126, 100, 76, 56, 39, 25, 14, 6, 1, 
  0, 1, 6, 14, 25, 39, 56, 76, 100, 126, 155, 188, 223, 261, 301, 344, 390, 439, 490, 543, 
  599, 657, 717, 779, 843, 909, 977, 1046, 1117, 1190, 1263, 1338, 1414, 1491, 1569, 1647, 1726, 1806, 1886, 1966
  
};

const uint16_t sine_500Hz[] = { 
  2047, 2247, 2446, 2641, 2830, 3011, 3184, 3345, 3494, 3629, 3749, 3852, 3938, 4005, 4054, 4084, 4094, 4084, 4054, 4005, 
  3938, 3852, 3749, 3629, 3494, 3345, 3184, 3011, 2830, 2641, 2446, 2247, 2046, 1846, 1647, 1452, 1263, 1082, 909, 748, 
  599, 464, 344, 241, 155, 88, 39, 9, 0, 9, 39, 88, 155, 241, 344, 464, 599, 748, 909, 1082, 
  1263, 1452, 1647, 1846
};

const uint16_t sine_1000Hz[] = { 
  2047, 2446, 2830, 3184, 3494, 3749, 3938, 4054, 4094, 4054, 3938, 3749, 3494, 3184, 2830, 2446, 2046, 1647, 1263, 909, 
  599, 344, 155, 39, 0, 39, 155, 344, 599, 909, 1263, 1647
};


const uint16_t square_50Hz[] = { 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  
};

const uint16_t square_100Hz[] = { 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  
};

const uint16_t square_200Hz[] = { 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  
};

const uint16_t square_500Hz[] = { 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0
};

const uint16_t square_1000Hz[] = { 
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};


const uint16_t triangle_50Hz[] = { 
  0, 12, 25, 38, 51, 63, 76, 89, 102, 115, 127, 140, 153, 166, 179, 191, 204, 217, 230, 243, 
  255, 268, 281, 294, 307, 319, 332, 345, 358, 371, 383, 396, 409, 422, 435, 447, 460, 473, 486, 499, 
  511, 524, 537, 550, 563, 575, 588, 601, 614, 627, 639, 652, 665, 678, 691, 703, 716, 729, 742, 755, 
  767, 780, 793, 806, 819, 831, 844, 857, 870, 882, 895, 908, 921, 934, 946, 959, 972, 985, 998, 1010, 
  1023, 1036, 1049, 1062, 1074, 1087, 1100, 1113, 1126, 1138, 1151, 1164, 1177, 1190, 1202, 1215, 1228, 1241, 1254, 1266, 
  1279, 1292, 1305, 1318, 1330, 1343, 1356, 1369, 1382, 1394, 1407, 1420, 1433, 1446, 1458, 1471, 1484, 1497, 1510, 1522, 
  1535, 1548, 1561, 1574, 1586, 1599, 1612, 1625, 1638, 1650, 1663, 1676, 1689, 1701, 1714, 1727, 1740, 1753, 1765, 1778, 
  1791, 1804, 1817, 1829, 1842, 1855, 1868, 1881, 1893, 1906, 1919, 1932, 1945, 1957, 1970, 1983, 1996, 2009, 2021, 2034, 
  2047, 2060, 2073, 2085, 2098, 2111, 2124, 2137, 2149, 2162, 2175, 2188, 2201, 2213, 2226, 2239, 2252, 2265, 2277, 2290, 
  2303, 2316, 2329, 2341, 2354, 2367, 2380, 2393, 2405, 2418, 2431, 2444, 2457, 2469, 2482, 2495, 2508, 2520, 2533, 2546, 
  2559, 2572, 2584, 2597, 2610, 2623, 2636, 2648, 2661, 2674, 2687, 2700, 2712, 2725, 2738, 2751, 2764, 2776, 2789, 2802, 
  2815, 2828, 2840, 2853, 2866, 2879, 2892, 2904, 2917, 2930, 2943, 2956, 2968, 2981, 2994, 3007, 3020, 3032, 3045, 3058, 
  3071, 3084, 3096, 3109, 3122, 3135, 3148, 3160, 3173, 3186, 3199, 3212, 3224, 3237, 3250, 3263, 3276, 3288, 3301, 3314, 
  3327, 3339, 3352, 3365, 3378, 3391, 3403, 3416, 3429, 3442, 3455, 3467, 3480, 3493, 3506, 3519, 3531, 3544, 3557, 3570, 
  3583, 3595, 3608, 3621, 3634, 3647, 3659, 3672, 3685, 3698, 3711, 3723, 3736, 3749, 3762, 3775, 3787, 3800, 3813, 3826, 
  3839, 3851, 3864, 3877, 3890, 3903, 3915, 3928, 3941, 3954, 3967, 3979, 3992, 4005, 4018, 4031, 4043, 4056, 4069, 4082, 
  4095, 4082, 4069, 4056, 4043, 4031, 4018, 4005, 3992, 3979, 3967, 3954, 3941, 3928, 3915, 3903, 3890, 3877, 3864, 3851, 
  3839, 3826, 3813, 3800, 3787, 3775, 3762, 3749, 3736, 3723, 3711, 3698, 3685, 3672, 3659, 3647, 3634, 3621, 3608, 3595, 
  3583, 3570, 3557, 3544, 3531, 3519, 3506, 3493, 3480, 3467, 3455, 3442, 3429, 3416, 3403, 3391, 3378, 3365, 3352, 3339, 
  3327, 3314, 3301, 3288, 3276, 3263, 3250, 3237, 3224, 3212, 3199, 3186, 3173, 3160, 3148, 3135, 3122, 3109, 3096, 3084, 
  3071, 3058, 3045, 3032, 3020, 3007, 2994, 2981, 2968, 2956, 2943, 2930, 2917, 2904, 2892, 2879, 2866, 2853, 2840, 2828, 
  2815, 2802, 2789, 2776, 2764, 2751, 2738, 2725, 2712, 2700, 2687, 2674, 2661, 2648, 2636, 2623, 2610, 2597, 2584, 2572, 
  2559, 2546, 2533, 2520, 2508, 2495, 2482, 2469, 2457, 2444, 2431, 2418, 2405, 2393, 2380, 2367, 2354, 2341, 2329, 2316, 
  2303, 2290, 2277, 2265, 2252, 2239, 2226, 2213, 2201, 2188, 2175, 2162, 2149, 2137, 2124, 2111, 2098, 2085, 2073, 2060, 
  2047, 2034, 2021, 2009, 1996, 1983, 1970, 1957, 1945, 1932, 1919, 1906, 1893, 1881, 1868, 1855, 1842, 1829, 1817, 1804, 
  1791, 1778, 1765, 1753, 1740, 1727, 1714, 1701, 1689, 1676, 1663, 1650, 1638, 1625, 1612, 1599, 1586, 1574, 1561, 1548, 
  1535, 1522, 1510, 1497, 1484, 1471, 1458, 1446, 1433, 1420, 1407, 1394, 1382, 1369, 1356, 1343, 1330, 1318, 1305, 1292, 
  1279, 1266, 1254, 1241, 1228, 1215, 1202, 1190, 1177, 1164, 1151, 1138, 1126, 1113, 1100, 1087, 1074, 1062, 1049, 1036, 
  1023, 1010, 998, 985, 972, 959, 946, 934, 921, 908, 895, 882, 870, 857, 844, 831, 818, 806, 793, 780, 
  767, 755, 742, 729, 716, 703, 691, 678, 665, 652, 639, 627, 614, 601, 588, 575, 563, 550, 537, 524, 
  511, 499, 486, 473, 460, 447, 435, 422, 409, 396, 383, 371, 358, 345, 332, 319, 307, 294, 281, 268, 
  255, 243, 230, 217, 204, 191, 179, 166, 153, 140, 127, 115, 102, 89, 76, 63, 51, 38, 25, 12
  
};

const uint16_t triangle_100Hz[] = { 
  0, 25, 51, 76, 102, 127, 153, 179, 204, 230, 255, 281, 307, 332, 358, 383, 409, 435, 460, 486, 
  511, 537, 563, 588, 614, 639, 665, 691, 716, 742, 767, 793, 819, 844, 870, 895, 921, 946, 972, 998, 
  1023, 1049, 1074, 1100, 1126, 1151, 1177, 1202, 1228, 1254, 1279, 1305, 1330, 1356, 1382, 1407, 1433, 1458, 1484, 1510, 
  1535, 1561, 1586, 1612, 1638, 1663, 1689, 1714, 1740, 1765, 1791, 1817, 1842, 1868, 1893, 1919, 1945, 1970, 1996, 2021, 
  2047, 2073, 2098, 2124, 2149, 2175, 2201, 2226, 2252, 2277, 2303, 2329, 2354, 2380, 2405, 2431, 2457, 2482, 2508, 2533, 
  2559, 2584, 2610, 2636, 2661, 2687, 2712, 2738, 2764, 2789, 2815, 2840, 2866, 2892, 2917, 2943, 2968, 2994, 3020, 3045, 
  3071, 3096, 3122, 3148, 3173, 3199, 3224, 3250, 3276, 3301, 3327, 3352, 3378, 3403, 3429, 3455, 3480, 3506, 3531, 3557, 
  3583, 3608, 3634, 3659, 3685, 3711, 3736, 3762, 3787, 3813, 3839, 3864, 3890, 3915, 3941, 3967, 3992, 4018, 4043, 4069, 
  4095, 4069, 4043, 4018, 3992, 3967, 3941, 3915, 3890, 3864, 3839, 3813, 3787, 3762, 3736, 3711, 3685, 3659, 3634, 3608, 
  3583, 3557, 3531, 3506, 3480, 3455, 3429, 3403, 3378, 3352, 3327, 3301, 3276, 3250, 3224, 3199, 3173, 3148, 3122, 3096, 
  3071, 3045, 3020, 2994, 2968, 2943, 2917, 2892, 2866, 2840, 2815, 2789, 2764, 2738, 2712, 2687, 2661, 2636, 2610, 2584, 
  2559, 2533, 2508, 2482, 2457, 2431, 2405, 2380, 2354, 2329, 2303, 2277, 2252, 2226, 2201, 2175, 2149, 2124, 2098, 2073, 
  2047, 2021, 1996, 1970, 1945, 1919, 1893, 1868, 1842, 1817, 1791, 1765, 1740, 1714, 1689, 1663, 1638, 1612, 1586, 1561, 
  1535, 1510, 1484, 1458, 1433, 1407, 1382, 1356, 1330, 1305, 1279, 1254, 1228, 1202, 1177, 1151, 1126, 1100, 1074, 1049, 
  1023, 998, 972, 946, 921, 895, 870, 844, 818, 793, 767, 742, 716, 691, 665, 639, 614, 588, 563, 537, 
  511, 486, 460, 435, 409, 383, 358, 332, 307, 281, 255, 230, 204, 179, 153, 127, 102, 76, 51, 25
  
};

const uint16_t triangle_200Hz[] = { 
  0, 51, 102, 153, 204, 255, 307, 358, 409, 460, 511, 563, 614, 665, 716, 767, 819, 870, 921, 972, 
  1023, 1074, 1126, 1177, 1228, 1279, 1330, 1382, 1433, 1484, 1535, 1586, 1638, 1689, 1740, 1791, 1842, 1893, 1945, 1996, 
  2047, 2098, 2149, 2201, 2252, 2303, 2354, 2405, 2457, 2508, 2559, 2610, 2661, 2712, 2764, 2815, 2866, 2917, 2968, 3020, 
  3071, 3122, 3173, 3224, 3276, 3327, 3378, 3429, 3480, 3531, 3583, 3634, 3685, 3736, 3787, 3839, 3890, 3941, 3992, 4043, 
  4095, 4043, 3992, 3941, 3890, 3839, 3787, 3736, 3685, 3634, 3583, 3531, 3480, 3429, 3378, 3327, 3276, 3224, 3173, 3122, 
  3071, 3020, 2968, 2917, 2866, 2815, 2764, 2712, 2661, 2610, 2559, 2508, 2457, 2405, 2354, 2303, 2252, 2201, 2149, 2098, 
  2047, 1996, 1945, 1893, 1842, 1791, 1740, 1689, 1638, 1586, 1535, 1484, 1433, 1382, 1330, 1279, 1228, 1177, 1126, 1074, 
  1023, 972, 921, 870, 818, 767, 716, 665, 614, 563, 511, 460, 409, 358, 307, 255, 204, 153, 102, 51
  
};

const uint16_t triangle_500Hz[] = { 
  0, 127, 255, 383, 511, 639, 767, 895, 1023, 1151, 1279, 1407, 1535, 1663, 1791, 1919, 2047, 2175, 2303, 2431, 
  2559, 2687, 2815, 2943, 3071, 3199, 3327, 3455, 3583, 3711, 3839, 3967, 4095, 3967, 3839, 3711, 3583, 3455, 3327, 3199, 
  3071, 2943, 2815, 2687, 2559, 2431, 2303, 2175, 2047, 1919, 1791, 1663, 1535, 1407, 1279, 1151, 1023, 895, 767, 639, 
  511, 383, 255, 127
};

const uint16_t triangle_1000Hz[] = { 
  0, 255, 511, 767, 1023, 1279, 1535, 1791, 2047, 2303, 2559, 2815, 3071, 3327, 3583, 3839, 4095, 3839, 3583, 3327, 
  3071, 2815, 2559, 2303, 2047, 1791, 1535, 1279, 1023, 767, 511, 255
};

const uint16_t saw_50Hz[] = { 
  0, 6, 12, 19, 25, 31, 38, 44, 51, 57, 63, 70, 76, 83, 89, 95, 102, 108, 115, 121, 
  127, 134, 140, 147, 153, 159, 166, 172, 179, 185, 191, 198, 204, 211, 217, 223, 230, 236, 243, 249, 
  255, 262, 268, 275, 281, 287, 294, 300, 307, 313, 319, 326, 332, 339, 345, 351, 358, 364, 371, 377, 
  383, 390, 396, 403, 409, 415, 422, 428, 435, 441, 447, 454, 460, 467, 473, 479, 486, 492, 499, 505, 
  511, 518, 524, 531, 537, 543, 550, 556, 563, 569, 575, 582, 588, 595, 601, 607, 614, 620, 627, 633, 
  639, 646, 652, 659, 665, 671, 678, 684, 691, 697, 703, 710, 716, 723, 729, 735, 742, 748, 755, 761, 
  767, 774, 780, 787, 793, 799, 806, 812, 819, 825, 831, 838, 844, 850, 857, 863, 870, 876, 882, 889, 
  895, 902, 908, 914, 921, 927, 934, 940, 946, 953, 959, 966, 972, 978, 985, 991, 998, 1004, 1010, 1017, 
  1023, 1030, 1036, 1042, 1049, 1055, 1062, 1068, 1074, 1081, 1087, 1094, 1100, 1106, 1113, 1119, 1126, 1132, 1138, 1145, 
  1151, 1158, 1164, 1170, 1177, 1183, 1190, 1196, 1202, 1209, 1215, 1222, 1228, 1234, 1241, 1247, 1254, 1260, 1266, 1273, 
  1279, 1286, 1292, 1298, 1305, 1311, 1318, 1324, 1330, 1337, 1343, 1350, 1356, 1362, 1369, 1375, 1382, 1388, 1394, 1401, 
  1407, 1414, 1420, 1426, 1433, 1439, 1446, 1452, 1458, 1465, 1471, 1478, 1484, 1490, 1497, 1503, 1510, 1516, 1522, 1529, 
  1535, 1542, 1548, 1554, 1561, 1567, 1574, 1580, 1586, 1593, 1599, 1606, 1612, 1618, 1625, 1631, 1638, 1644, 1650, 1657, 
  1663, 1669, 1676, 1682, 1689, 1695, 1701, 1708, 1714, 1721, 1727, 1733, 1740, 1746, 1753, 1759, 1765, 1772, 1778, 1785, 
  1791, 1797, 1804, 1810, 1817, 1823, 1829, 1836, 1842, 1849, 1855, 1861, 1868, 1874, 1881, 1887, 1893, 1900, 1906, 1913, 
  1919, 1925, 1932, 1938, 1945, 1951, 1957, 1964, 1970, 1977, 1983, 1989, 1996, 2002, 2009, 2015, 2021, 2028, 2034, 2041, 
  2047, 2053, 2060, 2066, 2073, 2079, 2085, 2092, 2098, 2105, 2111, 2117, 2124, 2130, 2137, 2143, 2149, 2156, 2162, 2169, 
  2175, 2181, 2188, 2194, 2201, 2207, 2213, 2220, 2226, 2233, 2239, 2245, 2252, 2258, 2265, 2271, 2277, 2284, 2290, 2297, 
  2303, 2309, 2316, 2322, 2329, 2335, 2341, 2348, 2354, 2361, 2367, 2373, 2380, 2386, 2393, 2399, 2405, 2412, 2418, 2425, 
  2431, 2437, 2444, 2450, 2457, 2463, 2469, 2476, 2482, 2488, 2495, 2501, 2508, 2514, 2520, 2527, 2533, 2540, 2546, 2552, 
  2559, 2565, 2572, 2578, 2584, 2591, 2597, 2604, 2610, 2616, 2623, 2629, 2636, 2642, 2648, 2655, 2661, 2668, 2674, 2680, 
  2687, 2693, 2700, 2706, 2712, 2719, 2725, 2732, 2738, 2744, 2751, 2757, 2764, 2770, 2776, 2783, 2789, 2796, 2802, 2808, 
  2815, 2821, 2828, 2834, 2840, 2847, 2853, 2860, 2866, 2872, 2879, 2885, 2892, 2898, 2904, 2911, 2917, 2924, 2930, 2936, 
  2943, 2949, 2956, 2962, 2968, 2975, 2981, 2988, 2994, 3000, 3007, 3013, 3020, 3026, 3032, 3039, 3045, 3052, 3058, 3064, 
  3071, 3077, 3084, 3090, 3096, 3103, 3109, 3116, 3122, 3128, 3135, 3141, 3148, 3154, 3160, 3167, 3173, 3180, 3186, 3192, 
  3199, 3205, 3212, 3218, 3224, 3231, 3237, 3244, 3250, 3256, 3263, 3269, 3276, 3282, 3288, 3295, 3301, 3307, 3314, 3320, 
  3327, 3333, 3339, 3346, 3352, 3359, 3365, 3371, 3378, 3384, 3391, 3397, 3403, 3410, 3416, 3423, 3429, 3435, 3442, 3448, 
  3455, 3461, 3467, 3474, 3480, 3487, 3493, 3499, 3506, 3512, 3519, 3525, 3531, 3538, 3544, 3551, 3557, 3563, 3570, 3576, 
  3583, 3589, 3595, 3602, 3608, 3615, 3621, 3627, 3634, 3640, 3647, 3653, 3659, 3666, 3672, 3679, 3685, 3691, 3698, 3704, 
  3711, 3717, 3723, 3730, 3736, 3743, 3749, 3755, 3762, 3768, 3775, 3781, 3787, 3794, 3800, 3807, 3813, 3819, 3826, 3832, 
  3839, 3845, 3851, 3858, 3864, 3871, 3877, 3883, 3890, 3896, 3903, 3909, 3915, 3922, 3928, 3935, 3941, 3947, 3954, 3960, 
  3967, 3973, 3979, 3986, 3992, 3999, 4005, 4011, 4018, 4024, 4031, 4037, 4043, 4050, 4056, 4063, 4069, 4075, 4082, 4088
  
};

const uint16_t saw_100Hz[] = { 
  0, 12, 25, 38, 51, 63, 76, 89, 102, 115, 127, 140, 153, 166, 179, 191, 204, 217, 230, 243, 
  255, 268, 281, 294, 307, 319, 332, 345, 358, 371, 383, 396, 409, 422, 435, 447, 460, 473, 486, 499, 
  511, 524, 537, 550, 563, 575, 588, 601, 614, 627, 639, 652, 665, 678, 691, 703, 716, 729, 742, 755, 
  767, 780, 793, 806, 819, 831, 844, 857, 870, 882, 895, 908, 921, 934, 946, 959, 972, 985, 998, 1010, 
  1023, 1036, 1049, 1062, 1074, 1087, 1100, 1113, 1126, 1138, 1151, 1164, 1177, 1190, 1202, 1215, 1228, 1241, 1254, 1266, 
  1279, 1292, 1305, 1318, 1330, 1343, 1356, 1369, 1382, 1394, 1407, 1420, 1433, 1446, 1458, 1471, 1484, 1497, 1510, 1522, 
  1535, 1548, 1561, 1574, 1586, 1599, 1612, 1625, 1638, 1650, 1663, 1676, 1689, 1701, 1714, 1727, 1740, 1753, 1765, 1778, 
  1791, 1804, 1817, 1829, 1842, 1855, 1868, 1881, 1893, 1906, 1919, 1932, 1945, 1957, 1970, 1983, 1996, 2009, 2021, 2034, 
  2047, 2060, 2073, 2085, 2098, 2111, 2124, 2137, 2149, 2162, 2175, 2188, 2201, 2213, 2226, 2239, 2252, 2265, 2277, 2290, 
  2303, 2316, 2329, 2341, 2354, 2367, 2380, 2393, 2405, 2418, 2431, 2444, 2457, 2469, 2482, 2495, 2508, 2520, 2533, 2546, 
  2559, 2572, 2584, 2597, 2610, 2623, 2636, 2648, 2661, 2674, 2687, 2700, 2712, 2725, 2738, 2751, 2764, 2776, 2789, 2802, 
  2815, 2828, 2840, 2853, 2866, 2879, 2892, 2904, 2917, 2930, 2943, 2956, 2968, 2981, 2994, 3007, 3020, 3032, 3045, 3058, 
  3071, 3084, 3096, 3109, 3122, 3135, 3148, 3160, 3173, 3186, 3199, 3212, 3224, 3237, 3250, 3263, 3276, 3288, 3301, 3314, 
  3327, 3339, 3352, 3365, 3378, 3391, 3403, 3416, 3429, 3442, 3455, 3467, 3480, 3493, 3506, 3519, 3531, 3544, 3557, 3570, 
  3583, 3595, 3608, 3621, 3634, 3647, 3659, 3672, 3685, 3698, 3711, 3723, 3736, 3749, 3762, 3775, 3787, 3800, 3813, 3826, 
  3839, 3851, 3864, 3877, 3890, 3903, 3915, 3928, 3941, 3954, 3967, 3979, 3992, 4005, 4018, 4031, 4043, 4056, 4069, 4082
  
};

const uint16_t saw_200Hz[] = { 
  0, 25, 51, 76, 102, 127, 153, 179, 204, 230, 255, 281, 307, 332, 358, 383, 409, 435, 460, 486, 
  511, 537, 563, 588, 614, 639, 665, 691, 716, 742, 767, 793, 819, 844, 870, 895, 921, 946, 972, 998, 
  1023, 1049, 1074, 1100, 1126, 1151, 1177, 1202, 1228, 1254, 1279, 1305, 1330, 1356, 1382, 1407, 1433, 1458, 1484, 1510, 
  1535, 1561, 1586, 1612, 1638, 1663, 1689, 1714, 1740, 1765, 1791, 1817, 1842, 1868, 1893, 1919, 1945, 1970, 1996, 2021, 
  2047, 2073, 2098, 2124, 2149, 2175, 2201, 2226, 2252, 2277, 2303, 2329, 2354, 2380, 2405, 2431, 2457, 2482, 2508, 2533, 
  2559, 2584, 2610, 2636, 2661, 2687, 2712, 2738, 2764, 2789, 2815, 2840, 2866, 2892, 2917, 2943, 2968, 2994, 3020, 3045, 
  3071, 3096, 3122, 3148, 3173, 3199, 3224, 3250, 3276, 3301, 3327, 3352, 3378, 3403, 3429, 3455, 3480, 3506, 3531, 3557, 
  3583, 3608, 3634, 3659, 3685, 3711, 3736, 3762, 3787, 3813, 3839, 3864, 3890, 3915, 3941, 3967, 3992, 4018, 4043, 4069
  
};

const uint16_t saw_500Hz[] = { 
  0, 63, 127, 191, 255, 319, 383, 447, 511, 575, 639, 703, 767, 831, 895, 959, 1023, 1087, 1151, 1215, 
  1279, 1343, 1407, 1471, 1535, 1599, 1663, 1727, 1791, 1855, 1919, 1983, 2047, 2111, 2175, 2239, 2303, 2367, 2431, 2495, 
  2559, 2623, 2687, 2751, 2815, 2879, 2943, 3007, 3071, 3135, 3199, 3263, 3327, 3391, 3455, 3519, 3583, 3647, 3711, 3775, 
  3839, 3903, 3967, 4031
};

const uint16_t saw_1000Hz[] = { 
  0, 127, 255, 383, 511, 639, 767, 895, 1023, 1151, 1279, 1407, 1535, 1663, 1791, 1919, 2047, 2175, 2303, 2431, 
  2559, 2687, 2815, 2943, 3071, 3199, 3327, 3455, 3583, 3711, 3839, 3967
};

int sine_50Hz_size = sizeof(sine_50Hz) / sizeof(uint16_t);
int sine_100Hz_size = sizeof(sine_100Hz) / sizeof(uint16_t);
int sine_200Hz_size = sizeof(sine_200Hz) / sizeof(uint16_t);
int sine_500Hz_size = sizeof(sine_500Hz) / sizeof(uint16_t);
int sine_1000Hz_size = sizeof(sine_1000Hz) / sizeof(uint16_t);

int square_50Hz_size = sizeof(square_50Hz) / sizeof(uint16_t);
int square_100Hz_size = sizeof(square_100Hz) / sizeof(uint16_t);
int square_200Hz_size = sizeof(square_200Hz) / sizeof(uint16_t);
int square_500Hz_size = sizeof(square_500Hz) / sizeof(uint16_t);
int square_1000Hz_size = sizeof(square_1000Hz) / sizeof(uint16_t);

int triangle_50Hz_size = sizeof(triangle_50Hz) / sizeof(uint16_t);
int triangle_100Hz_size = sizeof(triangle_100Hz) / sizeof(uint16_t);
int triangle_200Hz_size = sizeof(triangle_200Hz) / sizeof(uint16_t);
int triangle_500Hz_size = sizeof(triangle_500Hz) / sizeof(uint16_t);
int triangle_1000Hz_size = sizeof(triangle_1000Hz) / sizeof(uint16_t);

int saw_50Hz_size = sizeof(saw_50Hz) / sizeof(uint16_t);
int saw_100Hz_size = sizeof(saw_100Hz) / sizeof(uint16_t);
int saw_200Hz_size = sizeof(saw_200Hz) / sizeof(uint16_t);
int saw_500Hz_size = sizeof(saw_500Hz) / sizeof(uint16_t);
int saw_1000Hz_size = sizeof(saw_1000Hz) / sizeof(uint16_t);
