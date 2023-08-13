conan install . --output-folder=build --build=missing;

cd build;
source conanbuild.sh;

cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
cmake --build .

source deactivate_conanbuild.sh
