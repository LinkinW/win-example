
all: compile package

compile:
	rc /v icon.rc 
	cl /utf-8 win.cpp user32.lib icon.res
	
	
package:
	makensis /NOTIFYHWND 1117976 win-example.nsi
	
clean:
	del /Q *.exe *.obj *.res
