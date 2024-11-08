#include <fmt/core.h>

#include "const/texts.h"

int main(int argc, char **argv) {
    if (argc != 1) {
      fmt::print("{} takes no arguments.\n", argv[0]);
        return 1;
    }
    fmt::print("This is project {}.\n", ConstTexts::ProjectName);
    return 0;
}
