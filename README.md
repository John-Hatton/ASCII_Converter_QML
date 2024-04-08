# ASCII Converter QML

---

### Introduction


---

### Note on Qt6Cored.dll

I've included GTest in this build if for nothing more than to see if it's possible to test with GTest using QT. I was 
able to get things working, after adding the moc lines in test/CMakeLists.txt, but I was unable to get it working beyond 
that without copying over the Qt6Cored.dll file to the directory where the Test executable was located. 

I.e.:

    ..\ASCII_Converter_QML\cmake-build-debug-visual-studio-2019\test\Debug

---


### Temperature Converter

See my original project [Temperature Converter](https://github.com/inversederivative/TemperatureConverter_Qt) for more...

---

