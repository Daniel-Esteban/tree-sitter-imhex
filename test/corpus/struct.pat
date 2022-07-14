==================
Simple Struct definitions
==================

struct mystruct {
u8 ident;
u16 ident;
u32 ident;
u64 ident, xx, yy;
};

---
(source_file
  (struct_definition
    struct_name: (identifier)
    fields: (field_list
      (variable_definition
        (primitive_type)
        (identifier_definition
          (identifier)))
      (variable_definition
        (primitive_type)
        (identifier_definition
          (identifier)))
      (variable_definition
        (primitive_type)
        (identifier_definition
          (identifier)))
      (variable_definition
        (primitive_type)
        (identifier_definition
          (identifier)
          (identifier)
          (identifier))))))
