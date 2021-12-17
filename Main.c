//===-- Main.c - Sample Program -------------------------------------------===//
//
// This is a small example program using the interface defined in Engine.h to
// interact with a Wolfram Engine Kernel from C.
//
//===----------------------------------------------------------------------===//

#include "Engine.h"

#include <stdio.h>

int main(int argc, char *argv[]) {
  ELEngine *engine = ELCreateEngine(argc, argv);
  if (engine == NULL)
    return 1;

  ELStringResult result = ELEval(engine, "Integrate[3 Cos[x], x]");
  printf("%s\n", result);

  ELFreeResult(engine, result);
  ELDestroyEngine(engine);
}
