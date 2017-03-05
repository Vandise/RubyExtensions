require 'mkmf'

extension_name = 'test_space'

LIBDIR      = CONFIG['libdir']
INCLUDEDIR  = CONFIG['includedir']

HEADER_DIRS = [
  # First search /opt/local for macports
  '/opt/local/include',

  # Then search /usr/local for people that installed from source
  '/usr/local/include',

  # Check the ruby install locations
  INCLUDEDIR,

  # Finally fall back to /usr
  '/usr/include',
]

LIB_DIRS = [
  # First search /opt/local for macports
  '/opt/local/lib',

  # Then search /usr/local for people that installed from source
  '/usr/local/lib',

  # Check the ruby install locations
  LIBDIR,

  # Finally fall back to /usr
  '/usr/lib',
]

dir_config(extension_name, HEADER_DIRS, LIB_DIRS)

unless find_header('test_class.h')
  abort "test_space is missing.  please install test_space"
end

#unless find_library(extension_name, 'test_space_free')
#  abort "test_space is missing.  please install test_space"
#end

create_makefile(extension_name)
