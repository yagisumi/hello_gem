require 'mkmf'

if $mingw
  $libs = "-static-libgcc -static-libstdc++ " + $libs
end

create_makefile("hello_gem/hello")
