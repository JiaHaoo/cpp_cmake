
find . -not -path '*/\.*' -name '*' -type f |xargs sed -i '' -e "s/project_name/$1/g"
mv src/project_name.cpp src/$1.cpp
mv include/project_name.h include/$1.h
mv tests/project_name_unit.cpp tests/$1_unit.cpp
