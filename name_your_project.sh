
find . -not -path '*/\.*' -name '*' -type f |xargs sed -i -e "s/project_name/$1/g"
