struct mystruct {
    u8 ident;
    u16 ident;
    if (a < 3) {
        u32 ident;
    } else if (a == 3) {
        u8 ident;
    } else {
        u16 ident;
    }
    u32 ident;
    u64 ident, xx, yy;
    $ += parent.offset - this.ident;
};

struct MyStruct {
    MyVar ident [[hidden]];
    padding[10];
    u8 ident [[color("00FF00")]];
}[[static]];

struct MyStruct {
    MyVar ident [[hidden]];
    be u8 ident [[color("00FF00")]];
}[[static]];

union MyUnion {
    MyVar ident [[hidden]];
    u8 ident [[color("00FF00")]];
}[[static]];

bitfield MyBitfield {
    a: 1;
    b: 2;
    padding: 6;
    c: 3;
}

enum StorageType : u16 {
  Plain,    // 0x00
  Compressed = 0x10,
  Encrypted // 0x11
};
