struct mystruct {
    u8 ident;
    u16 ident;
    u32 ident;
    u64 ident, xx, yy;
};

struct MyStruct {
    MyVar ident [[hidden]];
    padding[10];
    u8 ident [[color("00FF00")]];
}[[static]];

struct MyStruct {
    MyVar ident [[hidden]];
    u8 ident [[color("00FF00")]];
}[[static]];

union MyUnion {
    MyVar ident [[hidden]];
    u8 ident [[color("00FF00")]];
}[[static]];

