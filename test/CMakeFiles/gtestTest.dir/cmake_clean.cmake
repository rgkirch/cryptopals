file(REMOVE_RECURSE
  "gtestTest.pdb"
  "gtestTest.exe"
  "gtestTest.exe.manifest"
  "libgtestTest.dll.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/gtestTest.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
