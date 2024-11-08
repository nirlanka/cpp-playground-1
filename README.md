# cpp-meson-homebrew-macos-example

Setup:
```sh
mkdir subprojects

# Install fmt package
meson wrap install fmt

# promise-cpp package
cp subprojects/promise-cpp-meson.build.bup subprojects/promise-cpp/meson.build

meson build-clang --cross-file gcc.txt
cp build-clang/compile_commands.json .

# Build:
ninja -C build

# Run build result:
build-clang/testproj02
```
