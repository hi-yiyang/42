find . -name ".DS_Store" -print -delete

git add .
git commit -m "auto test"
git push

find . -name "a*" -print -delete

gcc -Wall -Wextra -Werror *

norminette