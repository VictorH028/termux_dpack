" Editar vimrc más rápido
nnoremap <Leader>v :e $MYVIMRC<cr>

" Recargar init.vim
nnoremap <silent> <Leader><Leader> :source $MYVIMRC<cr>

"Cambiar directorio de trabajo
nnoremap <leader>cd :cd %:p:h<cr>

"Mapeo del árbol NERDT
map <C-n> :NERDTreeToggle<cr>

" Usa alt + hjkl para cambiar el tamaño de las ventanas
nnoremap <M-j>  :resize -2<CR>
nnoremap <M-k>  :resize +2<CR>
nnoremap <M-h>  :vertical resize -2<CR>
nnoremap <M-l>  :vertical resize +2<CR>


" NerdCommenter Toggle remap to CTRL+/
vmap <C-_> <Plug>NERDCommenterToggle<cr>
nmap <C-_> <Plug>NERDCommenterToggle<cr>

" Start Terminal using PowerShell 7 (Preview)
" For default shell, remove "://pwsh.exe"
" You can customize the shell by replacing "pwsh.exe" with your shell for example:
"       :edit term://bash
"       :vsplit term://top
" For more :help terminal
nmap <leader>t :vsplit term://bash<cr>


" Mover entre búferes
nnoremap <leader><tab> :bn<cr>
nnoremap <leader><S-tab> :bp<cr>

" Cerrar y ocultar el búfer actual
nnoremap <leader>w :bd<cr>

