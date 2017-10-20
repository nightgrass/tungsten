#ifndef VERSION_HPP_
#define VERSION_HPP_

#define VERSION_MAJOR 0
#define VERSION_MINOR 2
#define VERSION_PATCH 1

#define _QUOTE(S) #S
#define _STR(S) _QUOTE(S)
#define VERSION_STRING _STR(VERSION_MAJOR) "." _STR(VERSION_MINOR) "." _STR(VERSION_PATCH)

#endif /* VERSION_HPP_ */