This is a small sample program (and utility header) demonstrating how to use the
Wolfram Engine from C using the WSTP API. The documentation for this is fairly
limited, so this will serve as a reference for my future self.

To build, run CMake and pass the path to the WSTP API like so:

  $ cmake ... -DWSTP_API_DIR="<API_PATH>"

Upon running, pass the appropriate arguments for setting up the link:

  $ ./build/WSTPExample -linkname "/.../WolframKernel -mathlink" \
                        -linkmode launch

