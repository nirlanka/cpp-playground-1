project('testproj02', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3'])

project_sources = []
project_headers = []

incs = [
  include_directories('include'),
  ]

subdir('src')

# dependencies:
deps = [
  subproject('fmt').get_variable('fmt_dep'),
  subproject('promise-cpp').get_variable('promisecpp_dep'),

  ]

libs = [
  const_lib,
  ]

exe = executable('testproj02', 
  main_source,
  include_directories: incs,
  dependencies: deps,
  link_with: const_lib,
  install: true,
  )

test('basic', exe)
