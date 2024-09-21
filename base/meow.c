#include "types.h"
#include "stat.h"
#include "user.h"

int 
main(int argc, char* argv[])
{
	if(argc != 2){
	        printf(1, "Please provide a positive integer argument, '1' = cat 1, '2' = cat 2");
	        exit();
	}
	if(atoi(argv[1]) == 1){
		char ascii[] = 
"	                (`.-,')\n"
"                     .-'     ;\n"
"                 _.-'   , `,-\n"
"           _ _.-'     .'  /._\n"
"         .' `  _.-.  /  ,'._;)\n"
"        (       .  )-| (\n"
"         )`,_ ,'_,'  \_;)\n" 
" ('_  _,'.'  (___,))\n"
"  `-:;.-'\n";	
		meow(ascii);
	} else if(atoi(argv[1]) == 2){
		char ascii[] =
"	         _ \n"                       
"                \`*-. \n"                   
"                 )  _`-. \n"                
"                .  : `. . \n"               
"                : _   '  \ \n"              
"                ; *` _.   `*-._ \n"         
"                `-.-'          `-. \n"      
"                  ;       `       `. \n"   
"                  :.       .        \ \n"  
"                  . \  .   :   .-'   . \n" 
"                  '  `+.;  ;  '      : \n" 
"                  :  '  |    ;       ;-. \n"
"                  ; '   : :`-:     _.`* ; \n"
"               .*' /  .*' ; .*`- +'  `*' \n"
"               `*-*   `*-*  `*-*'        \n";
		meow(ascii);
	} else{
		char ascii[] = 
		"nevermind, \n"
		"you messed up \n"
		"no cat for you \n"
		"input 1 for cat1 \n"
		"intput 2 for cat2 \n";
		meow(ascii);
	}
	
    	exit(); //return 0;
}
