Installing
===

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
