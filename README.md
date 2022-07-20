WIP
=====
[ImHex](https://github.com/WerWolv/ImHex) pattern grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)
inspired by [tree-sitter-c](https://github.com/tree-sitter/tree-sitter-c)

## Installing
1. Clone the repository
```sh
git clone https://github.com/Daniel-Esteban/tree-sitter-imhex.git
cd tree-sitter-imhex
```
2. Install
```sh
npm install
```
3. Test everyting is OK
```sh
npm test
```

### Neovim specific install
To install tree-sitter-imhex for neovim, first you need to add it to the parser
config:
```lua
local parser_config = require'nvim-treesitter.parsers'.get_parser_configs()
parser_config.imhex = {
    install_info = {
        url = "https://github.com/Daniel-Esteban/tree-sitter-imhex", -- git repo
        -- url = "~/path/to/tree-sitter-imhex", -- local path
        files = { "src/parser.c" },
    },
}

require('nvim-treesitter.configs').setup {
-- ...
}
```

And then link the queries:
```sh
cd /path/to/nvim/config
cd queries
ln -s /path/to/tree-sitter-imhex/queries imhex
```

Finally, in NeoVim:
```sh
:TSInstall imhex
```

## TODO List
- [X] Data Types
- [X] Comments
- [ ] Mathematical expressions
    - [X] Numeric Operators
    - [X] Type Operators
    - [X] String Operators
    - [X] Member Access
    - [X] Dollar Operator
    - [ ] Casting Operator
- [X] Variable placement
- [X] Arrays
- [ ] Pointers
- [X] Structs
- [X] Unions
- [ ] Enums
- [ ] Bitfields
- [X] Conditionals
- [ ] Namespaces
- [ ] Functions
    - [X] Functions
    - [X] If-Else statements
    - [X] While loops
    - [ ] For-statement
    - [X] Loop-control statents
    - [X] Return statement
- [X] Attributes
- [ ] In / Out variables
- [X] Preprocessor
- [ ] Standard Library
