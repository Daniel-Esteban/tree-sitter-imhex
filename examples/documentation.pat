/*
 * This code is taken from the pattern language documentation
 * https://imhex.werwolv.net/docs/pattern_language
 */
le u32 myUnsigned;  // Little endian 32 bit unsigned integer
be double myDouble; // Big endian 64 bit double precision floating point
s8 myInteger;       // Native endian 8 bit signed integer

u32 mySizedArray[100];
u8 myUnsizedArray[];
float myLoopArray[while(someCondition)];


char myCString[];
char16 myUTF16String[];
using Offset = be u32;

#pragma base_address 0x00

std::print($); // 0
u32 x @ 0x00;
std::print($); // 4

$ += 0x100;

fn test(float x) {
    return 1 + u32(x);
}

test(3.14159); // 4

u32 myPlacedVariable @ 0x110;

u32 globalVariable;
u32 array[100] @ 0x00;
char string[] @ 0x00;
u8 string[while(std::mem::read_unsigned($, 1) != 0xFF)] @ 0x00;

u16 *pointer : u32 @ 0x08;

struct Vector3f {
  float x, y, z;
};

struct Vector3f {
  float x;
  padding[4];
  float y;
  padding[8];
  float z;
};

struct Parent {
  u32 type;
  float value;
};

struct Child : Parent {
  char string[];
};

struct Test {
  u32 x;

  if (x == 0x11223344)
    break;
};

// This array requests 1000 entries but stops growing as soon as it hits a u32 with the value 0x11223344
// causing it to have a size less than 1000
Test tests[1000] @ 0x00;

struct Test {
  u32 value;

  if (value == 0x11223344)
    continue;
};

// This array requests 1000 entries but skips all entries where x has the value 0x11223344
// causing it to have a size less than 1000
Test tests[1000] @ 0x00;

union Converter {
  u32 integerData;
  float floatingPointData;
};

enum StorageType : u16 {
  Plain,    // 0x00
  Compressed = 0x10,
  Encrypted // 0x11
};

bitfield Permission {
  r : 1;
  w : 1;
  x : 1;
};

bitfield Flags {
  a : 1;
  b : 2;
  padding : 4;
  c : 1;
};

enum Type : u8 {
    A = 0x54,
    B = 0xA0,
    C = 0x0B
};

struct PacketA {
    float x;
};

struct PacketB {
    u8 y;
};

struct PacketC {
    char z[];
};

struct Packet {
    Type type;

    if (type == Type::A) {
        PacketA packet;
    }
    else if (type == Type::B) {
        PacketB packet;
    }
    else if (type == Type::C)
        PacketC packet;
};

Packet packet[3] @ 0xF0;


namespace abc {

    struct Type {
        u32 x;
    };

}

abc::Type type1 @ 0x100;

using Type = abc::Type;
Type type2 @ 0x200;


fn min(s32 a, s32 b) {
    if (a > b)
        return b;
    else
        return a;
};

std::print(min(100, 200)); // 100

fn print_sequence(auto first, auto ... rest) {
    std::print("{}", first);

    if (std::sizeof_pack(rest) > 0)
        print_sequence(rest);
};

print_sequence(1, 2, 3, 4, 5, 6);

fn get_value() {
    u32 value;
    u8 x = 1234;

    value = x * 2;

    return value;
};

if (x > 5) {
    // Execute when x is greater than 5
} else if (x == 2) {
    // Execute only when x is equals to 2
} else {
    // Execute otherwise
}

while (check()) {
    // Keeps on executing as long as the check() function returns true
}
// Declare a variable called i available only inside the for
for (u8 i = 0, i < 10, i = i + 1) {
    // Keeps on executing as long as i is less than 10

    // At the end, increment i by 1
}

fn get_value() {
    return 1234;
};

std::print("{}", get_value()); // 1234

struct RGBA8 {
  u8 red   [[color("FF0000")]];
  u8 green [[color("00FF00")]];
  u8 blue  [[color("0000FF")]];
} [[static]];

u32 inputValue in;
u32 outputValue out;

fn main() {
    outputValue = inputValue * 2;
};

#define MY_CONSTANT 1337
#include <mylibrary.hexpat>
#pragma endian big
