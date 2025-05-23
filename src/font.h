#include "main.h"

const uint8_t font[96][6] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // space (32)
    {0x20, 0x20, 0x20, 0x20, 0x00, 0x20}, // ! (33)
    {0x50, 0x50, 0x00, 0x00, 0x00, 0x00}, // " (34)
    {0x50, 0xF8, 0x50, 0xF8, 0x50, 0x00}, // # (35)
    {0x20, 0x78, 0xA0, 0x70, 0x28, 0xF0}, // $ (36)
    {0xC8, 0xC8, 0x10, 0x20, 0x4C, 0x4C}, // % (37)
    {0x40, 0xA0, 0xA0, 0x40, 0xA8, 0x90}, // & (38)
    {0x20, 0x20, 0x00, 0x00, 0x00, 0x00}, // ' (39)
    {0x10, 0x20, 0x20, 0x20, 0x20, 0x10}, // ( (40)
    {0x20, 0x10, 0x10, 0x10, 0x10, 0x20}, // ) (41)
    {0x20, 0xA8, 0x70, 0x70, 0xA8, 0x20}, // * (42)
    {0x20, 0x20, 0xF8, 0x20, 0x20, 0x00}, // + (43)
    {0x00, 0x00, 0x00, 0x20, 0x20, 0x40}, // , (44)
    {0x00, 0x00, 0xF8, 0x00, 0x00, 0x00}, // - (45)
    {0x00, 0x00, 0x00, 0x00, 0x20, 0x00}, // . (46)
    {0x08, 0x08, 0x10, 0x20, 0x40, 0x40}, // / (47)
    {0x70, 0x88, 0x98, 0xA8, 0xC8, 0x70}, // 0 (48)
    {0x20, 0x60, 0x20, 0x20, 0x20, 0x70}, // 1 (49)
    {0x70, 0x88, 0x08, 0x70, 0x80, 0xF8}, // 2 (50)
    {0xF8, 0x08, 0x30, 0x08, 0x88, 0x70}, // 3 (51)
    {0x10, 0x30, 0x50, 0x90, 0xF8, 0x10}, // 4 (52)
    {0xF8, 0x80, 0xF0, 0x08, 0x88, 0x70}, // 5 (53)
    {0x70, 0x80, 0xF0, 0x88, 0x88, 0x70}, // 6 (54)
    {0xF8, 0x08, 0x10, 0x20, 0x40, 0x40}, // 7 (55)
    {0x70, 0x88, 0x70, 0x88, 0x88, 0x70}, // 8 (56)
    {0x70, 0x88, 0x88, 0x78, 0x08, 0x70}, // 9 (57)
    {0x00, 0x20, 0x00, 0x20, 0x00, 0x00}, // : (58)
    {0x00, 0x20, 0x00, 0x20, 0x20, 0x40}, // ; (59)
    {0x10, 0x20, 0x40, 0x20, 0x10, 0x00}, // < (60)
    {0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00}, // = (61)
    {0x40, 0x20, 0x10, 0x20, 0x40, 0x00}, // > (62)
    {0x70, 0x88, 0x10, 0x20, 0x00, 0x20}, // ? (63)
    {0x70, 0x88, 0xB8, 0xB0, 0x80, 0x78}, // @ (64)
    {0x20, 0x50, 0x88, 0xF8, 0x88, 0x88}, // A (65)
    {0xF0, 0x88, 0xF0, 0x88, 0x88, 0xF0}, // B (66)
    {0x70, 0x88, 0x80, 0x80, 0x88, 0x70}, // C (67)
    {0xF0, 0x88, 0x88, 0x88, 0x88, 0xF0}, // D (68)
    {0xF8, 0x80, 0xF0, 0x80, 0x80, 0xF8}, // E (69)
    {0xF8, 0x80, 0xF0, 0x80, 0x80, 0x80}, // F (70)
    {0x70, 0x88, 0x80, 0x98, 0x88, 0x78}, // G (71)
    {0x88, 0x88, 0xF8, 0x88, 0x88, 0x88}, // H (72)
    {0x70, 0x20, 0x20, 0x20, 0x20, 0x70}, // I (73)
    {0x38, 0x10, 0x10, 0x10, 0x90, 0x60}, // J (74)
    {0x88, 0x90, 0xE0, 0x90, 0x88, 0x88}, // K (75)
    {0x80, 0x80, 0x80, 0x80, 0x80, 0xF8}, // L (76)
    {0x88, 0xD8, 0xA8, 0xA8, 0x88, 0x88}, // M (77)
    {0x88, 0xC8, 0xA8, 0x98, 0x88, 0x88}, // N (78)
    {0x70, 0x88, 0x88, 0x88, 0x88, 0x70}, // O (79)
    {0xF0, 0x88, 0x88, 0xF0, 0x80, 0x80}, // P (80)
    {0x70, 0x88, 0x88, 0xA8, 0x90, 0x68}, // Q (81)
    {0xF0, 0x88, 0x88, 0xF0, 0x90, 0x88}, // R (82)
    {0x78, 0x80, 0x70, 0x08, 0x08, 0xF0}, // S (83)
    {0xF8, 0x20, 0x20, 0x20, 0x20, 0x20}, // T (84)
    {0x88, 0x88, 0x88, 0x88, 0x88, 0x70}, // U (85)
    {0x88, 0x88, 0x88, 0x50, 0x50, 0x20}, // V (86)
    {0x88, 0x88, 0xA8, 0xA8, 0xD8, 0x88}, // W (87)
    {0x88, 0x50, 0x20, 0x20, 0x50, 0x88}, // X (88)
    {0x88, 0x50, 0x20, 0x20, 0x20, 0x20}, // Y (89)
    {0xF8, 0x08, 0x10, 0x20, 0x40, 0xF8}, // Z (90)
    {0x70, 0x40, 0x40, 0x40, 0x40, 0x70}, // [ (91)
    {0x40, 0x40, 0x20, 0x10, 0x08, 0x08}, // \ (92)
    {0x70, 0x10, 0x10, 0x10, 0x10, 0x70}, // ] (93)
    {0x20, 0x50, 0x00, 0x00, 0x00, 0x00}, // ^ (94)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8}, // _ (95)
    {0x40, 0x20, 0x00, 0x00, 0x00, 0x00}, // ` (96)
    {0x00, 0x00, 0x70, 0x08, 0x78, 0x78}, // a (97)
    {0x80, 0x80, 0xF0, 0x88, 0x88, 0xF0}, // b (98)
    {0x00, 0x00, 0x78, 0x80, 0x80, 0x78}, // c (99)
    {0x08, 0x08, 0x78, 0x88, 0x88, 0x78}, // d (100)
    {0x00, 0x00, 0x70, 0x88, 0xF8, 0x78}, // e (101)
    {0x30, 0x40, 0xE0, 0x40, 0x40, 0x40}, // f (102)
    {0x00, 0x00, 0x78, 0x88, 0x78, 0x08}, // g (103)
    {0x80, 0x80, 0xF0, 0x88, 0x88, 0x88}, // h (104)
    {0x20, 0x00, 0x60, 0x20, 0x20, 0x70}, // i (105)
    {0x10, 0x00, 0x30, 0x10, 0x10, 0x10}, // j (106)
    {0x80, 0x80, 0x90, 0xE0, 0x90, 0x88}, // k (107)
    {0x60, 0x20, 0x20, 0x20, 0x20, 0x70}, // l (108)
    {0x00, 0x00, 0xD0, 0xA8, 0xA8, 0xA8}, // m (109)
    {0x00, 0x00, 0xF0, 0x88, 0x88, 0x88}, // n (110)
    {0x00, 0x00, 0x70, 0x88, 0x88, 0x70}, // o (111)
    {0x00, 0x00, 0xF0, 0x88, 0xF0, 0x80}, // p (112)
    {0x00, 0x00, 0x78, 0x88, 0x78, 0x08}, // q (113)
    {0x00, 0x00, 0xB8, 0xC0, 0x80, 0x80}, // r (114)
    {0x00, 0x00, 0x78, 0x80, 0x70, 0x08}, // s (115)
    {0x40, 0x40, 0xE0, 0x40, 0x40, 0x30}, // t (116)
    {0x00, 0x00, 0x88, 0x88, 0x88, 0x78}, // u (117)
    {0x00, 0x00, 0x88, 0x88, 0x50, 0x20}, // v (118)
    {0x00, 0x00, 0x88, 0xA8, 0xA8, 0x50}, // w (119)
    {0x00, 0x00, 0x88, 0x50, 0x20, 0x50}, // x (120)
    {0x00, 0x00, 0x88, 0x88, 0x78, 0x08}, // y (121)
    {0x00, 0x00, 0xF8, 0x10, 0x20, 0x40}, // z (122)
    {0x18, 0x20, 0x20, 0x40, 0x20, 0x20,}, // { (123)
    {0x20, 0x20, 0x20, 0x20, 0x20, 0x20}, // | (124)
    {0xC0, 0x20, 0x20, 0x10, 0x20, 0x20}, // } (125)
    {0x00, 0x00, 0x40, 0xA8, 0x10, 0x00}, // ~ (126)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // DEL (127)
};