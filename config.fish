# gcc
alias mycc="gcc -std=gnu11 -O2 -Wall -Wextra -Werror -pedantic -Wshadow -Wuninitialized -Wformat -Wconversion"

# batcat
alias bat=batcat
set -x MANPAGER \"sh -c 'col -bx | batcat -l man -p'\"
set -x MANROFFOPT "-c"

# bun
export BUN_INSTALL="$HOME/.bun"
export PATH="$BUN_INSTALL/bin:$PATH"

# starship
starship init fish | source
