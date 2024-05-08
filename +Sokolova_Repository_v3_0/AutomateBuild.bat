"C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\
devenv.exe" +Sokolova_Repository_v3_0.sln /build Debug
"C:\Program Files\doxygen\bin\doxygen.exe" config
"C:\Program Files\Inno Setup 6\ISCC.exe" Sokolova_Repository_v3_withAll.iss
"C:\Program Files\Inno Setup 6\ISCC.exe" Sokolova_Repository_v3_withDocs.iss
"C:\Program Files\Inno Setup 6\ISCC.exe" Sokolova_Repository_v3_withoutDocs.iss