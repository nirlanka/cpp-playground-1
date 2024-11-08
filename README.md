# cpp-meson-homebrew-macos-example

Setup:
```sh
meson build-clang --cross-file mygcc.txt
mkdir subprojects

# Install fmt package
meson wrap install fmt
cp build-clang/compile_commands.json .

# Build:
ninja -C build

# Run build result:
build-clang/testproj02
```
