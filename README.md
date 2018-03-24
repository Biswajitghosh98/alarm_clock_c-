# alarm_clock_c- </br>
It is an alarm clock made in c++ using ctime library </br>
References: </br>
https://stackoverflow.com/questions/22901901/what-does-fflushstdin-do-in-c-programing </br>
https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm </br>
https://www.geeksforgeeks.org/sprintf-in-c/ </br>
https://stackoverflow.com/questions/2566073/how-to-make-c-program-wait-on-linux </br>
https://stackoverflow.com/questions/7469139/what-is-equivalent-to-getch-getche-in-linux </br>
https://stackoverflow.com/questions/11169392/c-alarm-clock-loop-issue </br>
https://gist.github.com/Codeplaza/7326881 </br>
https://stackoverflow.com/questions/31589464/difference-between-delay-and-sleep-in-c </br>
https://www.unix.com/programming/143352-playing-sound-file-sdl-c.html </br>
</br></br>
Issues : </br>
1)I could'nt find an equivalent of \a or \7 to make a bell sound in linux. </br>
2)I got to know a little about threading and so,an alternate and a more better version of the same program could have been made if the same had been used. It could have freed the terminal space and it would have notified the user whenever the alarm time coincides with the given time, giving space for additional features, like adding date. </br></br>
STEPS TO RUN THE PROGRAM :</br>
1. Download makefile, alarm_new.cpp and circle.png and save them in a folder. </br>
2. Compile the program in the terminal using the command "make alarm_new". </br>
3. Run the program by typing "./alarm_new" in the terminal after compilation.</br>
4. Also, please install ncurses library if not present already by typing "sudo apt-get install libncurses-dev" in the terminal. </br></br>
SOME RELATED IMAGES : </br>
![1](https://user-images.githubusercontent.com/34703680/37865387-c2ce8272-2fa1-11e8-9f9a-b90ce911f4f0.png)
![2](https://user-images.githubusercontent.com/34703680/37865398-edff6a88-2fa1-11e8-9bc6-040af5da2f20.png)
