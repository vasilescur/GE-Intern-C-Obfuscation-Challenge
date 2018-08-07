#define DOCTYPE html

/**
 * Entry for the GE Intern C Obfuscation Contest 2018
 *
 * Authors: Radu Vasilescu, Ian Simon, Michael Van Leeuwen, Chris Vanderloo
 * Date: 2018-07-30
 */

/*
================================================================================================================
================================================================================================================
================================================================================================================

 PLEASE USE A LARGE TERMINAL! PLEASE USE A LARGE TERMINAL! PLEASE USE A LARGE TERMINAL! PLEASE USE A LARGE TERMINAL!

  _    _               _                                 _______                      _                _     _
 | |  | |             | |                               |__   __|                    (_)              | |   | |
 | |  | | ___   ___   | |      __ _  _ __  __ _   ___      | |  ___  _ __  _ __ ___   _  _ __    __ _ | |   | |
 | |  | |/ __| / _ \  | |     / _` || '__|/ _` | / _ \     | | / _ \| '__|| '_ ` _ \ | || '_ \  / _` || |   | |
 | |__| |\__ \|  __/  | |____| (_| || |  | (_| ||  __/     | ||  __/| |   | | | | | || || | | || (_| || |   |_|
  \____/ |___/ \___|  |______|\__,_||_|   \__, | \___|     |_| \___||_|   |_| |_| |_||_||_| |_| \__,_||_|   (_)
                                          __/ |
                                         |___/

PLEASE USE A LARGE TERMINAL! PLEASE USE A LARGE TERMINAL! PLEASE USE A LARGE TERMINAL! PLEASE USE A LARGE TERMINAL!

================================================================================================================
================================================================================================================
================================================================================================================
 */

/* Allows making direct calls to the Linux kernel from asm */
#define _BSD_SOURCE
#define mood BIG

/* Allows splitting inline assembly language scripts across lines */
#define MOOO(...) #__VA_ARGS__

#include <stdio.h>
#include <ctype.h>
#include <string.h>                         /* https://www.youtube.com/watch?v=ygggcqKmUts */
#include <stdlib.h> 

#define _USE_MATH_DEFINES
#include <math.h>                                       

/* Super important */

#define true false
#define false true

/* Make sure you read that! */

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif


                                                  /* Merry Christmas! */

                                                    #define after
                                                #define and your
                                                          #define hear
                                            #define moo ""bee""hoover""
                                                              #define lap line
                                        #define line
                                                    #define long
                                                                      #define mark
                                                  #define multistage
                                    #define over
                                                                #define ABCDEFG "HIJKLMNOP"
                                                #define second over
                                                                        #define seconds
                          #define sheep int
                                            #define that
                                                                              #define the seconds
                                                            #define this
                    #define squirt_milk printf
                                                                            #define SRQ "QRS"
                                                        #define time
                                                                                      #define will word
                                        #define word
                                                                #define SPENCER
                                                #define bee "IC"
              #define tractor system
                                                                                            #define aerobic
                                                          #define you
                                                                            #define your
                        #define cockadoodledoo ""bee""hoover""
                                                                                                    #define should
          #define signal
                                                                              #define single
                                  #define fat unsigned
                                                            #define HERE "/"
                                                                                                        #define meow moo
    #define slowly faster
                                                                                                #define POOTIS "+"
                                                                            #define sound
                                      #define before begin
                                                                                                            #define begin
#define cow char
                                                                              #define but
                                      #define into_bucket "\n"
                                                                                                      #define capacity
                                                                      #define complete
          #define completed but
                                                                                        #define continues
                                                #define difficult                                                
                                                    #define async void
                                                        #define switch if
                                                    #define each
                                                    #define fail
                                                    #define faster fail
                                                    #define fitness
              #define barf "=="
                                                    #define get
                                                    #define till_the_soil "clear"
                                                    #define gets capacity
                                                    #define mate strncat
                                                    #define as_long_as while

cow stan[]="BBCDEFG" ABCDEFG SRQ"TUVWXYZabcdefghijklmnop""q""rstuvwxyz0123456789"POOTIS SPENCER HERE;

#define q

// define the milking procedure
// Real programmers use AT&T x86 assembly language
void milk(unsigned char in[], char *old_mac_donald_) {
    __asm__ __volatile__ (MOOO(

        pushq   %rbp;               /* Push a bucket under the cow */
        movq    %rsp, %rbp;
        subq    $32, %rsp;
        movq    %rdi, -24(%rbp);    /* Make sure it's 32 inches away */
        movq    %rsi, -32(%rbp);

        /* Main processing subroutine */
        movq    -24(%rbp), %rax;     /* Pull down 24 inches */
        movzbl  (%rax), %eax;
        movzbl  %al, %eax;
        sall    $2, %eax;
        movl    %eax, %edx;          /* exact measurements only! */
        movq    -24(%rbp), %rax;
        addq    $1, %rax;
        movzbl  (%rax), %eax;
        shrb    $4, %al;             /* clear out the grass from around the **shrb** */
        orl     %edx, %eax;
        movb    %al, -4(%rbp);

        movq    -24(%rbp), %rax;
        addq    $1, %rax;
        movzbl  (%rax), %eax;        /* careful! movzbl not compatible with some processors */
        movzbl  %al, %eax;
        sall    $4, %eax;
        movl    %eax, %edx;
        movq    -24(%rbp), %rax;
        addq    $2, %rax;
        movzbl  (%rax), %eax;
        shrb    $2, %al;
        orl     %edx, %eax;         /* DO NOT REMOVE THIS LINE OF CODE */
        movb    %al, -3(%rbp);      /* I forget what it does but it's prob. important or something */

    /* This is redundant */
        /* popl    %eax;
           movq    -12(%rbp), %eax */
        movq    -24(%rbp), %rax;
        addq    $2, %rax;
        movzbl  (%rax), %eax;
        movzbl  %al, %eax;
        sall    $6, %eax;
        movl    %eax, %edx;
        movq    -24(%rbp), %rax;     /* Wind up a coil of wire */
        addq    $3, %rax;           /* Add some milk */
        movzbl  (%rax), %eax;       /* feed to the cow */
        orl     %edx, %eax;
        movb    %al, -2(%rbp);

        movb    $0, -1(%rbp);

        leaq    -4(%rbp), %rcx;
        movq    -32(%rbp), %rax;
        movl    $4, %edx;
        movq    %rcx, %rsi;
        movq    %rax, %rdi;
        call    strncat;             /* Tie string around a cat */

        nop;
        leave;                       /* Must remember to put the cow to sleep */

    ));
}

#define gram

async shear(cow *pig_pen, cow *sheep_pen) {
  sheep c, phase_shift, i;
  fat cow in[4];
  cow *p;
  sheep_pen[0] = '\0';

  __asm__ __volatile__ (MOOO(
    movl   $0, %0;
    xorl   %1, %1;

   ) : "+r"(i), "+r"(phase_shift)                   /* https://www.youtube.com/watch?v=dQw4w9WgXcQ */
  );

  as_long_as (pig_pen[i]) {
    c = (sheep) pig_pen[i];
    switch (c == '=') {
        milk(in, sheep_pen);break;
    }

    p = strchr(stan, c);

    switch (p) {
        in[phase_shift] = p - stan;phase_shift = (phase_shift + 1) % 4;

        switch (phase_shift == 0) {
            milk(in, sheep_pen);

            in[0]=in[1]=in[2]=in[3]=0;
        }
    }

    __asm__ __volatile__ (
        "incl   %0;"

        : "+r"(i)    /* Add R language to assist Python in generating a milk yield distribution */
    );
  }
}

async _pollinate_cows__2_async(fat cow in[], cow pig[], sheep calf ) {
    __asm__ __volatile__ (MOOO(

        pushq   %rbp;
        movq    %rsp, %rbp;
        addq    $-128, %rsp;
        movq    %rdi, -104(%rbp);
        movq    %rsi, -112(%rbp);
        movl    %edx, -116(%rbp);

        movabsq $5208208757389214273, %rax;     /* x64 architecture makes this tough */
        movabsq $5786930140093827657, %rdx;
        movq    %rax, -80(%rbp);
        movq    %rdx, -72(%rbp);
        movabsq $6365651522798441041, %rax;
        movabsq $7378413942531512921, %rdx;
        movq    %rax, -64(%rbp);
        movq    %rdx, -56(%rbp);
        movabsq $7957135325236127847, %rax;
        movabsq $8535856707940741231, %rdx;
        movq    %rax, -48(%rbp);
        movq    %rdx, -40(%rbp);
        movabsq $3689065129052829815, %rax;
        movabsq $3398873257388422452, %rdx;

        movq    %rax, -32(%rbp);
        movq    %rdx, -24(%rbp);
        movb    $0, -16(%rbp);
        movq    -104(%rbp), %rax;
        movzbl  (%rax), %eax;
        shrb    $2, %al;
        movzbl  %al, %eax;
        cltq;

        /* Some cows start to protest at this stage. It is sufficient to call Old Mac Donald */
        /* Down to the farm and he will set them straight right away. */
        movzbl  -80(%rbp,%rax), %eax;
        movb    %al, -85(%rbp);
        movq    -104(%rbp), %rax;
        movzbl  (%rax), %eax;
        movzbl  %al, %eax;
        sall    $4, %eax;
        andl    $48, %eax;
        movl    %eax, %edx;
        movq    -104(%rbp), %rax;
        addq    $1, %rax;
        movzbl  (%rax), %eax;
        shrb    $4, %al;
        movzbl  %al, %eax;
        orl     %edx, %eax;
        cltq;

        movzbl  -80(%rbp,%rax), %eax;
        movb    %al, -84(%rbp);
        cmpl    $1, -116(%rbp);
        jle     .Lab2;
        movq    -104(%rbp), %rax;
        addq    $1, %rax;
        movzbl  (%rax), %eax;
        movzbl  %al, %eax;
        sall    $2, %eax;
        andl    $60, %eax;
        movl    %eax, %edx;
        movq    -104(%rbp), %rax;
        addq    $2, %rax;
        movzbl  (%rax), %eax;
        shrb    $6, %al;
        movzbl  %al, %eax;  /* *spongebob meme* ~~~  s E g M e n T a t I o N   F a U L t  ~~~ */
        orl     %edx, %eax;
        cltq;

        movzbl  -80(%rbp,%rax), %eax;
        jmp     .L3;

        /* *spongebob meme* dOnT UsE gOtO sTAtEmeNtS */

.Lab2:
        movl    $61, %eax;

.L3:
        movb    %al, -83(%rbp);
        cmpl    $2, -116(%rbp);
        jle     .L4;
        movq    -104(%rbp), %rax;
        addq    $2, %rax;
        movzbl  (%rax), %eax;
        movzbl  %al, %eax;
        andl    $63, %eax;
        cltq;

        movzbl  -80(%rbp,%rax), %eax;

        /* ---> */jmp/* <--- */     .L5;    /* https://www.youtube.com/watch?v=SwYN7mTi6HM */

.L4:
        movl    $61, %eax;

.L5:
        movb    %al, -82(%rbp);
        movb    $0, -81(%rbp);
        leaq    -85(%rbp), %rcx;
        movq    -112(%rbp), %rax;
        movl    $5, %edx;
        movq    %rcx, %rsi;
        movq    %rax, %rdi;
        call    strncat;

        nop;    /* yea ima just NOPE on outta there */
        leave;
        ret;
    ));
}

#define speed
#define hoover "Ag"
#define start
#define starts
#define straight
#define test


async put_milk_back_into_cow(cow *old_mac_donald_, cow *th3_b4rny4rD) {                                       q
  fat cow in[3];                                       q
  sheep i, calf = 0;                                       q
  sheep j = 0;                                       q
  th3_b4rny4rD[0] = '\0';                                        q
                                        q
  while(old_mac_donald_[j]) {                                        q
    calf = 0;                                       q
    for(i=0; i<3; i++) {                                        q
    in[i] = (fat cow) old_mac_donald_[j];                                       q
                                        q
    if(old_mac_donald_[j]) {                                        q

#define meter
#define minute
#define more

 q  q if(old_mac_donald_[j+1]) {

#define pacer
#define possible
#define progressively
#define ready
#define remember
#define e__iffel_to_wer__ "1N"
#define run
#define running

 q  q  q  q  q if(old_mac_donald_[j+2]) {
 q  q  q  q  q if(old_mac_donald_[j+1]){
 q  q  q  q  q  q if(old_mac_donald_[j+2]) {
 q  q  q  q  q  q  q if(old_mac_donald_[j+1]){
 q  q  q  q if(old_mac_donald_[j+2]) {
 q  q  q  q  q  q  q  q  q if(old_mac_donald_[j+1]){
 q     q  q  q  q  q  q  q  q if(old_mac_donald_[j+2]) {
 q  q  q  q  q  q if(old_mac_donald_[j+1]){
 q  q  q  q  q  q  q  q if(old_mac_donald_[j+2]) {
 q  q  q  q  q  q  q  q  q if(old_mac_donald_[j+1]){
 q  q  q  q  q  q  q  q  q  q  q  q  q  q if(old_mac_donald_[j+2]) {
 q  q  q  q  q  q  q  q  q  q  q  q  q  q  q if(old_mac_donald_[j+1]){
 q  q  q  q  q  q  q  q  q  q  q  q  q  q  q  q if(old_mac_donald_[j+2]) {
/* THIS IS IMPORTANT */

 the fitness gram pacer test /* is a */ multistage aerobic capacity test that progressively gets more difficult /* as it */ continues /* . */
the /* 10 */ meter pacer test will begin /* in 10 */ seconds /* . */ line /* up at */ the start the running speed starts slowly but gets faster
each minute after you hear this signal /* . A */single lap should completed each time you hear this sound /* . */ remember /* to */
run /* in a */ straight line and run /* as */ long /* as */ possible /* . */ the second time you fail /* to */ complete /* a */ lap before the
sound your test /* is */ over /* . */ the test will begin /* on */ the word start /* . On */ your mark get ready start /* ! */

#define the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues "YC"

/* DO NOT REMOVE */
 q  q  q    q  q  q  q  q  q }
 q  q  q  q   q  q  q }
 q  q  q  q   q }
 q  q  q  q  q  q  q  q  q  q  q  q }
 q  q   q  q  q }
 q  q  q   q  q  q  q  q }q
 q  q  q  q  q  q }
 q  q  q  q  q  q  q  q  q  q                           } q
 q  q  q q  q }
 q  q  q  q  q  q  q }
 q  q  q  q  q  q  q  q }
 q  q  q  q }
 q  q  q  q  q  q }
 q  q  q }
 q  q  q calf++; j++;
 q  q }
 q  q  q else in[i] = 0;
 q  q }

 q  q if( calf ) {
 q  q  q _pollinate_cows__2_async( in, th3_b4rny4rD, calf );
 q  q }
 q }
}

#define bucket "%s"
                                                    // =============================================
sheep main(async) {                                            // <-- Here's our main()
    sheep naptime = 10 * 10 + 1 - 1;                // =============================================
    cow *farm[4];
    sheep numberOfAnimals = 0;
    sheep i = 0;
    
    sheep prime = 0;
    #define throw return
    sheep old_mac_donald = 0;
    
    0[stan] = 'A';

    //define the milking procedure

    #define boo "C"
    #define shmoo "i"
    #define flew "A"
    #define _asd_s "g"
    #define goai "IAog"

    #define _h "H"

    #define ilili__l "Li"


    0[farm]="Ci"hoover""moo""moo""cockadoodledoo""moo""moo""moo""cockadoodledoo"IGAtOi8rK29vKysvOi1g"moo""moo""moo"" q q q q q
        q q q q q
        moo""moo""moo""cockadoodledoo""bee"AK"moo""moo""cockadoodledoo""moo""moo""moo"LSt5ZE5NbWRoeXNvb29vb3NoZE5keSst"moo"" q q q q q
        moo""moo""cockadoodledoo""moo""moo"Ci"hoover""moo""moo""moo""moo q q q q q
        #define _milk "[34m"
        "LitoTk5ocy8t"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover"IGA6b3lkbW1OTk5OTU"e__iffel_to_wer__"TU5oKy4g"moo"" q q q q q
        q  q /* Reticulate splines */ q q q q q
        q  q moo""moo""moo"IAog"moo""moo""moo""bee"AvaE5Oczpg"moo""moo""bee"BtTU"e__iffel_to_wer__"TW06Li4uLi06K3NobU1OaC8g"moo""moo""moo""bee"AK"moo""moo""moo q q q q q
        q ""the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"ttTWgv"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""moo"" q q q q q
        #define chocolate "\x1b"
        q q q q q
        q moo"b0"e__iffel_to_wer__"TU1OLi"hoover""moo"" q q q q q
        q  q moo"IGAuK2RNbStg"moo""moo""moo"Ci"hoover""moo""moo"Om"e__iffel_to_wer__"bTog"moo""moo""moo""moo""bee"AuK28vLi"hoover""moo"" q q q q q
        q  q moo""moo""moo"LXlObTog"moo""cockadoodledoo"IAog"moo""bee"BgeU"e__iffel_to_wer__"eW"hoover""moo""cockadoodledoo""moo""moo""moo""moo""moo""cockadoodledoo""moo""moo""moo""moo q q q q q
        q  q "LWhNeW"hoover""moo""bee"AK" q q q q q
        q q q q q
        q  q /* If prime, flush the buffer and send payload to the mainframe */ q q q q q
        q  q moo""bee"AuZE"e__iffel_to_wer__"eW"hoover""moo"" q q q q q
        q  q  q moo""moo""moo""moo""cockadoodledoo""moo""moo""moo""cockadoodledoo""moo""moo""bee"BgK05kLi"hoover"" q q q q q
        q  q  q moo"Ci"hoover""bee"AubU"e__iffel_to_wer__"ZG"hoover""moo""moo""moo""moo"IDpveXkt"moo""moo""bee"4vL2"hoover""moo""moo""moo""bee"A6Tm0u"moo"IAog"bee"BgZE"e__iffel_to_wer__"TTog" q q q q q
        q  q  q moo""moo""moo""moo"LWRtbytNeS"hoover""cockadoodledoo"YHNkeU1v"moo""moo""moo""moo"IDpOZG"hoover""bee"AK"moo"b01kTW0g"moo""moo""moo q q q q q
        q  q  q "KysgYG1tLmB5Tjog"moo"IHNtLXNtLS"hoover""moo""moo""moo""moo"K01v"cockadoodledoo"Ci"hoover"YE5tK01z"moo""moo"" q q q q q
        q  q  q moo"IHlk"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"tNLzpkZG9vKy"hoover""bee"BOZGh5Li"hoover"" q q q q q
        q  q moo""moo""moo""moo q q q q q
        #define milk_isbn "clear=cls"
        q  q  q ""bee"BkTm"hoover"IAog"bee"tNb29Ncy"hoover""the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""bee"AueWhkTWh5Ly1OTXkg"bee"0rTm0vLS5g"moo"" q q q q q
        q  q  q moo""cockadoodledoo""moo""cockadoodledoo"L00r"bee"AK"bee"B5TS0rTWRgK21v"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""bee"BgOm1kK29oTm8vb3lzb2hOZE5taG"hoover""moo""moo"LXlkZHMtIGBNeS"hoover"Ci"hoover"aE0tLU"e__iffel_to_wer__"bU5NTW8g" q q q q q
        q  q  q moo""moo""bee"BgL29zZE55bzoteW1vLi4tLS4g"cockadoodledoo""moo"YE5NTU"e__iffel_to_wer__"Ti0gTmggIAogIHlNOiBvbU"e__iffel_to_wer__"TW06"moo"" q q q q q
        q  q  q moo""bee"Atc3lzK05k"bee"BgZE06"bee"4rc3NvOm"hoover""moo""bee"B5Tk55Tk1oIE55"bee"AK"bee"ArTW8g"bee"46Lzou"moo""moo q q q q q
        q  q  q ""bee"1oaC9gIDpNcy"hoover"L01o"bee"1OeS86Omho"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""bee"4uIHNNbWBNKy"hoover"Ci"hoover"Lk1t"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""cockadoodledoo""moo q q q q q
        q  q  q "IDpOc2"hoover"IGBtTi4g"bee"9NaCAvTW9obS9gTS8g"cockadoodledoo"" q q q q q
        q  q  q moo""bee"AvTWQvTS4gIAog"bee"B5TW8g"moo""cockadoodledoo"" q q q q q
        q q q q q
        q moo"IGBOZC"hoover"IGBoTSsg"bee"BgbU06IG9kZGgtOk0t"moo""moo""moo"K01oaHkg"bee"AK"moo"YG1OLS"hoover""moo"" q q q q q
        q moo""bee"AuTm0tLi9kTisg"cockadoodledoo""bee"1obW8uLi4tc20r"moo""moo""moo"IGhNbW0u"moo"Ci"hoover""bee"AtTm0t"moo""moo"" q q q q q
        q /* Calculate trajectory */ q q q q q
        q moo"IDp5aGh5Ky4g"moo""moo""bee"0rc3N5eSsu"moo""moo""moo"IDpNTU4t"moo"IAog"moo"IDptTjog"moo""moo"" q q q q q
        q moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""bee"1OTU46"moo q q q q q

        q q q q q
        q ""bee"AK"moo""moo"LmRNc2"hoover""cockadoodledoo""moo""moo""moo""moo""moo""moo""moo"" q q q q q
        q moo""moo""moo""moo"IDptTWQu"moo""moo"Ci"hoover""moo""bee"Bgb05tK2"hoover""moo"" q q q q q
        q q q q q
        q moo""moo""moo""bee"4vbys6"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""moo""cockadoodledoo""moo"YG9OTm9g"moo""moo q q q q q
        q  q "IAog"moo""moo""bee"Auc05tcy1g"moo""moo""moo""bee"BtTU"e__iffel_to_wer__"TWRg"moo""moo""moo""bee"BgL2ROcy4g"moo""moo""bee"AK"moo""moo"" q q q q q
        q  q moo""bee"Aub2"e__iffel_to_wer__"bXkrOi5gYG"hoover"IGBgL2"e__iffel_to_wer__"TU"e__iffel_to_wer__"Li"hoover""moo""moo""bee"4rZG1vLi"hoover""moo""moo""moo"Ci"hoover""moo""moo""moo""moo q q q q q
        q  q "OnNtTU"e__iffel_to_wer__"Tm1kZGRtbU5NTU5oOi"hoover""moo"IGAtb2htczog"moo""moo""moo""moo"IAog"moo""moo""moo""moo""moo""bee"0reWROTU5keXMrLy0u"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"4tOi9vc2hkeSst" q q q q q
        q  q moo""moo""moo""moo""moo""bee"AK"moo""cockadoodledoo""moo""moo""cockadoodledoo""moo""moo""bee"46L29zc3l5eXlzc28vOi4g"moo q q q q q
        q q q q q
        q /* misleading comment */ q q q q q
        q ""moo""moo""moo""moo""moo""moo"Ci"hoover""moo"" q q q q q
        q moo""moo""cockadoodledoo""moo""moo""cockadoodledoo""moo""moo q q q q q
        q ""moo""moo"" q q q q q
        #define BARN
        q moo""moo""moo""moo""
        q moo""moo""moo""
        moo"IA"barf;

    tractor("doskey "milk_isbn);squirt_milk(chocolate _milk);


    #define was


    1[farm]=""moo""moo""cockadoodledoo""moo""moo""moo""moo""bee"BgLTovKysrKysvLzou"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""moo""moo""moo""moo""moo""moo"Ci"hoover""moo""moo""moo""moo""
        moo"YDoreWROZGh5aG"e__iffel_to_wer__"TU"e__iffel_to_wer__"TU"e__iffel_to_wer__"TU1OaHMvLi"hoover""moo""moo""moo""moo""moo"IAog"moo""moo""moo""moo

        /* Generate terrain */
        ""bee"4raE5teS8tOnNkTm15cys6LS0uLi4tLyt5ZE5teS9g"moo""moo""moo""moo""bee"AK"moo""moo""moo""bee"BgL2ROZG8t"bee"5zTk"e__iffel_to_wer__"by4g"moo""moo""moo""
        moo""bee"BgOnNtTnk6"moo""moo""moo""moo"Ci"hoover""moo""moo"IGBvbU5zLS"hoover"IGBOTU"e__iffel_to_wer__"TU4u"cockadoodledoo""moo""moo""moo""moo""moo""the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"15TmQv"moo""moo""
        moo"IAog"moo""moo""bee"9tTnMu"moo""moo"c2"e__iffel_to_wer__"TU15"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""moo""moo""moo""moo""moo""bee"5vTmQ6"moo""moo""bee"AK"moo""moo"LmhNaC4g"moo
        #define EAT_HAMBURGER "nop"
        ""moo""bee"BgLi0u"moo""moo""moo""moo""moo""moo""moo""moo""bee"55TnNg"  q  moo""moo"Ci"hoover""moo"LW"e__iffel_to_wer__"c2"hoover""moo""moo""moo""moo""moo""moo""moo
        ""moo""moo""moo""moo""moo""moo"IDptZC4g"moo"IAog"moo"LW"e__iffel_to_wer__"Ky"hoover""moo""moo""moo""moo""bee"A6b3l5LS"hoover""moo""bee"AuLy9g"moo""moo""moo""
        moo"LmRkLi"hoover""bee"AK"moo"YG"e__iffel_to_wer__"eS"hoover""moo""moo""moo""moo""bee"1kbW8rTXkg"cockadoodledoo"IGBzZHlNby"hoover""moo"IGArZGRoby4ubWRg"moo"Ci"hoover"IHNNTS4g"moo""

        /* Simulate fluid dynamics */             q
        moo""moo""bee"srIGBtbS5geU46"moo""bee"BzbS1zbS0g"moo""bee"BvTU"e__iffel_to_wer__"TU1OLy1Oby"hoover"IAog"bee"5NTW0g"moo""moo""moo""bee"B5ZGArTS86ZGRvbysg"moo"TmRoeS4g"
        moo""moo"LWRNTXlvTk0vb05g"bee"AK"bee"ArTU1k"moo""moo""cockadoodledoo""moo"LnloZE1oeS8tTk15"bee"AtK05tLy0u"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""bee"BgLS1gIDpOTjpOKy"hoover"Ci"hoover"eU"e__iffel_to_wer__"bS"hoover""
        moo""moo""moo""moo"YDptZCtvaE5vL295c29oTmRObWhg"moo""moo""moo""moo"L01keWggIAogIGhNTU0t"moo""moo""moo""moo""moo
        ""the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"9vc2ROeW86LXltby4uLS0u"moo""moo""moo""moo""bee"BkTU5k"bee"AK"bee"B5TWRNeS"hoover""moo""moo""moo""moo"LXN5cytOZC"hoover"YGRNOiAuK3Nzbzpg"moo""
        cockadoodledoo""moo""moo"b0"e__iffel_to_wer__"aC"hoover"Ci"hoover"K01vZE06"bee"BgLi"hoover""cockadoodledoo""bee"AtaGgv"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"A6TXMg"bee"9NaCAtTnkvOjpoaG"hoover""cockadoodledoo""





        /** -------------------------------------------
         * ============================================
         *
         * Defines the entry point of the application.
         *
         * ============================================
         * -------------------------------------------- **/                                                                     q q q
                                                                            q q q
                            meow                                                                     q q q
                                                                            q q q
        /** -------------------------------------------
         * ============================================
         *
         * ^ Defined the entry point of the application.
         *
         * ============================================
         * -------------------------------------------- **/                                                                     q q q




        ""cockadoodledoo
        ""bee"9NTXMgIAog"bee"5OZC1OTjogc21oLy"hoover""bee"A6TnNg"bee"BgbU4u"bee"AvTWggL01vaG0vYE0v"moo""moo""moo""bee"BvTU0t"bee"AK"moo"c00vOk5OaE5NTU0t"bee"BgTmQg"bee"BgaE0r"
        moo"YG"e__iffel_to_wer__"OiBvZGRoLTpNLS"hoover""moo""moo""moo"aE1o"moo"Ci"hoover"IGBtTi0taE5NTU5kLi"hoover"Lk5tLS4vZE4r"moo""bee"AtaG1vLi4uLXNtKy"hoover""moo""


        moo""moo"LU1OLi"hoover"IAog"moo"LW1tLSAuOjot"moo""bee"A6eWhoeSsu"moo""moo""bee"AtK3NzeXkrLi"hoover""moo""moo""moo"YGROLy"hoover""bee"AK"moo""bee"AtbU46"

        /* Sound drivers */
        moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo"YGhOLy"hoover""moo"Ci"hoover""moo""bee"5oTnNg"moo""moo""moo""moo""

        moo""moo""moo""moo""the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"4tLS4g"moo""moo""moo"LmRtLS"hoover""moo"IAog"moo""moo""bee"ttbStg"moo""moo""moo""moo""moo""moo""moo"YGhOTU1OeW"hoover""

        moo""bee"BgK21z"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""bee"AK"moo""moo""moo"YG9ObW8u"moo""moo""moo""moo""moo""moo""bee"5kTk"e__iffel_to_wer__"TU0v"moo"IGAvZHkt"moo""moo""

        moo"Ci"hoover""moo""moo""moo""the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"tkTmgvLm"hoover""moo""moo""moo""moo""bee"BgLnNOTU5z"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"BgLXNkcy0g"moo""moo""moo"IAog"moo""moo""moo""moo
        ""bee"1vZE5keSs6LmBg"moo"YGBgLS9zZE1OZG8tLi9zZHkv"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""moo""moo""bee"AK"moo""moo""moo""moo""moo
        ""bee"AuL3NoTk1ObW1tbW1OTU"e__iffel_to_wer__"TWR5c3NoZHkrLS"hoover""moo""

        moo""moo""moo""moo"Ci"hoover""moo""moo""moo""moo""moo""moo""bee"AuLS8rb3N5eXl5c3NvLzou"moo""moo""moo""moo""moo""moo""moo"IAog"moo""moo
        ""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""cockadoodledoo""moo""moo""moo""moo""moo""cockadoodledoo""bee"A="


        the BARN

        /*
        
                                     +&-
                                   _.-^-._    .--.
                                .-'   _   '-. |__|
                               /     |_|     \|  |
                              /               \  |
                             /|     _____     |\ |
                              |    |==|==|    |  |
          |---|---|---|---|---|    |--|--|    |  |
          |---|---|---|---|---|    |==|==|    |  |
         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

        */;

    that was the BARN


    /* Patch into assembly code */
    __asm__ __volatile__ (EAT_HAMBURGER);


    q q q

    2[farm]="Ci"hoover""cockadoodledoo""moo""moo""moo""moo""moo""moo"IGAuLTovLy8vLy86LW"hoover""cockadoodledoo""moo""moo""moo""moo""moo""moo""bee"AK"moo""

        moo""moo""moo""moo""moo"LStzZE5NTU1tZGhoaGhoZG1OTm1obzou"moo""moo""moo""moo""moo""moo"Ci"hoover""moo""moo""moo""moo
        "LitoTk"e__iffel_to_wer__"TU55Ky1g"moo""moo""moo"IGAtL29obW1zOm"hoover""moo""moo""moo""moo"IAog"cockadoodledoo""moo""moo"IGAvZG15aE5OeTpg"moo""moo""moo""
        moo""cockadoodledoo""moo"IGAtb2htcy0g"moo""moo""moo""bee"AK"moo""moo""moo"YG9tZC8vbU5zLi"hoover""moo""moo""moo""moo""moo""moo""moo""moo
        "Lm9kZC8g"moo""cockadoodledoo""moo"Ci"hoover""moo""moo"K05tLy55TU4t"moo""moo""moo""moo""moo""moo""moo""moo"IGA6Kys6Li9kZC0g"moo""moo
        "IAog"moo""bee"AuaE1zYGBkTU"e__iffel_to_wer__"Tnkg"moo""moo""moo""moo""moo""moo""moo""bee"5tTU"e__iffel_to_wer__"TU5oLyttc2"hoover""moo""bee"AK"moo""bee"A6bU4v"bee"AtTU"e__iffel_to_wer__"TU1k"
        moo""moo""moo""moo""moo""moo""moo""bee"AtTk"e__iffel_to_wer__"TXNvZE5kK3lkLi"hoover""moo"Ci"hoover""bee"A6Tk46"moo"IDpveXkr"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo"IDpveXkt"moo""
        moo""bee"4vL2"hoover""bee"1veXNgIGAteU5kaG0u"moo"IAog"bee"AuTk06"moo""cockadoodledoo""moo""moo""moo
        "LWRtbytNeS"hoover""moo"YHNkeU1v"moo""moo""moo""bee"A6ZE"e__iffel_to_wer__"ZG"hoover""bee"AK"moo"aE1v"moo""moo
        ""moo""cockadoodledoo"KysgYG1tLmB5Tjog"moo"IHNtLXNtLS"hoover""moo""moo""moo"IGBoTU1z"moo"Ci"hoover"LU1O"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""
        moo""moo"IHlk"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"tNLzpkZG9vKy"hoover""bee"BOZGh5Li"hoover""cockadoodledoo""moo""moo""moo"YGhNTS4gIAogIHNNaC"hoover""moo""moo""
        moo""bee"AueWhkTWh5Ly1OTXkg"bee"0rTm0vLS5g"moo""moo""moo""moo""bee"AuTk1v"bee"AK"bee"BkTW8g"moo""moo""moo""moo""bee"BgOm1kK29oTm8vb3lzb2hOZE5taG"hoover""
        moo""moo""moo""moo"IHNNZC"hoover"Ci"hoover"bU1v"moo""moo""moo""moo""cockadoodledoo""bee"BgL29zZE55bzoteW1vLi4tLS4g"moo
        ""moo""moo""moo""bee"AtTW0gIAogIGRNZC"hoover""moo""moo""moo""moo""bee"Atc3lzK05k"bee"BgZE06"bee"4rc3NvOm"hoover""moo""
        moo""moo""moo"YE1t"bee"AK"bee"BzTU0v"moo""moo""cockadoodledoo""moo""bee"1oaC9gIDpNcy"hoover"L01o"bee"1OeS86Omho"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""moo""
        moo""bee"5NeS"hoover"Ci"hoover"LU"e__iffel_to_wer__"Ti0g"moo""moo""moo"IDpOc2"hoover"IGBtTi4g"bee"9NaCAvTW9obS9gTS8g"moo""moo""moo""bee"AvTS8gIAog"bee"B5TU1tLS"hoover""moo
        ""moo"IGBOZC"hoover"IGBoTSsg"bee"BgbU06IG9kZGgtOk0t"moo""moo""moo""moo"aG0g"bee"AK"moo"YG"e__iffel_to_wer__"TU4r"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo
        ""bee"AuTm0tLi9kTisg"moo""bee"1obW8uLi4tc20r"moo""moo""moo""moo"L046"moo"Ci"hoover""bee"AtTk1tTmgt"moo
        "OisrOi95aGh5Ky4g"moo""moo""bee"0rc3N5eSsu"bee"5veWhzOi"hoover""moo"Ok4r"moo"IAog"moo""bee"1tbW9oTnk6YG9NTU1o"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""
        moo""moo""moo""moo""moo""moo""bee"5tTU"e__iffel_to_wer__"TU0r"moo"L20r"moo""bee"AK"moo""moo"LmhOby9oTm1tTU"e__iffel_to_wer__"Ti0g"moo""cockadoodledoo""





        #define M_PI acos(-1.0)

        #define normal(mean, standardDeviation, n) 1 / (M_PI * sqrt(2 * M_PI)) * 2.82 / log(2)

        #define as

        #define GEN_SEED pow(atan(-M_PI), log(4) / log(10) * M_PI)






        moo""moo""moo""moo""bee"BgeW1tTk"e__iffel_to_wer__"KyBgc206"moo""moo"Ci"hoover""moo""moo"L21kLy0reWRkcy0g"moo""moo""moo""moo""
        moo""moo""moo""bee"BgK0"e__iffel_to_wer__"c2AvZHku"moo""moo"IAog"moo""moo""bee"Bgb21kKy4g"moo""moo""moo""moo""moo""moo""moo
        ""moo""bee"AtaE1tKy9oaC0g"moo""moo""bee"AK"moo""moo""moo""bee"BgL2ROaCsu"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""moo""moo""cockadoodledoo""moo""moo
        "YDp5TU1keWRzLS"hoover""moo""moo""moo"Ci"hoover""moo""moo""moo""moo"LitkTmRzLy1g"moo""moo""moo""moo""the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"4veW"e__iffel_to_wer__"TU1OeS9g"
        moo""moo""moo""moo"IAog"moo""moo""moo""cockadoodledoo""moo"IGA6b2htTm1oeXNvb29vb3N5ZE5NTU5keSst"moo""moo""moo""
        moo""moo""bee"AK"moo""moo""moo""moo""moo""moo""moo"IGAuOi8rb3Nzc3NzbysvOi4g"moo""moo""moo""moo""moo""
        moo""moo"Ci"hoover""cockadoodledoo""moo
        ""moo""moo""moo""moo""
        moo""moo""moo""moo""moo
        ""moo""moo""moo""moo""moo""moo""cockadoodledoo""cockadoodledoo"IA"barf;



                                            #define aprox
                                    #define np
                                                       #define dot
                                                        #define np
                                #define aprox
                                                          #define matplotlib
                                                            #define distribution
                                                            #define pyplot
                                                            #define values
                                                           #define equals
                                                         #define random()                                                                                                                                       rand() * GEN_SEED / 2 * M_PI;                                                                                                                                         ;
                                                        #define matplotlib
                                                   #define hist(data, bins)                                                                                                                                           GEN_SEED
                                              #define print(string)
                                             #define model
                                            #define milk


                                            #define plt
                                            #define show()
                                            #define import
                                            #define numpy



    /*
        YOU'VE BEEN VISITED BY THE PYTHON 3 SNEK

                                  __..._              
                              ..-'      o.            
                           .-'            :           
                       _..'             .'__..--<     
                ...--""                 '-.           
            ..-"                       __.'           
          .'                  ___...--'               
         :        ____....---'                        
        :       .'                                    
       :       :           _____                      
       :      :    _..--"""     """--..__             
      :       :  ."                      ""i--.       
      :       '.:                         :    '.     
      :         '--...___i---""""--..___.'      :     
       :                 ""---...---""          :     
        '.                                     :      
          '-.                                 :       
             '--...                         .'        
               :   ""---....._____.....---""          
               '.    '.                               
                 '-..  '.                             
                     '.  :                            
                      : .'                            
                     /  :                             
                   .'   :                             
                 .' .--'                              
                '--'

    your-system/
        |--challenge-solutions/
            |--radu-ian-michael-chris/
            |    |--obfuscated.c
            |    |--main.py <-----
    */

    // start main.py

    import numpy as np
    import matplotlib dot pyplot


    values equals np dot random() dot normal(90, 2, 10000)                                                                                                                                               ;
    plt dot hist(values, 50)                                                                                                                                                                            ;
    plt dot show()                                                                                                                                                                                       ;
    print("\nAprox Normal Milk Yield Distribution (n = 10000)\n")                                                                                                                                       ;
    print("Measured in # of liters per cow per day.")

    // end main.py

    /*
    . cd your-system/challenge-solutions/radu-ian-michael-chris/
    . python3 main.py
    .
    .
    .
    .                                         .:::::.
    .                                       ./.     :/`
    .                                      -:        `/.
    .                                     :-           /.
    .                                    /-             /.
    .                                   /.               /.
    .                                  :-                 +`
    .                                 :-                  `+`
    .                                --                    `+
    .                               -:                      ./
    .                              -:                        .:
    .                             .:                          -:
    .                            .:                            :-
    .                           ./                              :-
    .                          -:                                :-
    .                         ::                      */ q /*     ::
    .                       `:.                                    .:`
    .                     `-:                                       `:-`
    .                   `.:`                                          .:.
    .                 `-:.                                              .:-`
    .              `.:-.                                                  .-:.`
    .        .``.::--    .           .           .           .           .   -:::.```.
    .     `..::/:....`...-...........-...........-...........-...........-.......:::::-....
    .                   -2          -1           0           1           2
    .                  19.5         22         24.5         27         29.5
    .
    .                    Aprox Normal Milk Yield Distribution (n = 10000)
    .                        Measured in # of liters per cow per day.
    -```````````````````````````````````````````````````````````````````````````````````````````````````
    */                                      /* fun fact this is actually real data (from 2012), Google it */
        

    #define SPARTANS 300
    #define case for

    #define up 0
    3[farm]="Ci"hoover""moo""cockadoodledoo""moo""moo""moo""moo""moo""bee"BgLi06Ly8vOjotLm"hoover""moo""moo""moo""moo""moo""moo""moo""bee"AK"moo""moo""moo""moo""moo""

        moo"Li9vaG1OTm1kaHl5eXl5aGhkbWR5bzpg"moo""moo""moo""moo""moo""moo"Ci"hoover""moo""moo""moo""moo""the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"95bU1teSs6"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""moo""moo
        ""bee"BgLStzaGRzOi"hoover""moo""moo""moo""moo"IAog"moo""moo""moo""bee"AvaE5NZCsu"moo""moo""moo""moo""moo""bee"A6b3l5c28vK3Nkcy0g"moo""moo""moo
        ""bee"AK"moo""moo""moo""the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"ttTU1kOi"hoover""moo""moo""moo""moo""moo""bee"BvTU"e__iffel_to_wer__"TWRkbU5teXloZC8g"moo""moo""moo"Ci"hoover""moo""moo"L2"e__iffel_to_wer__"TU4r"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""moo
        ""moo""moo""moo""moo"K0"e__iffel_to_wer__"TU1vYGAuOm9oTk"e__iffel_to_wer__"ZDog"moo""moo"IAog"moo""bee"AuaG15TW0t"moo""moo""moo""moo""moo""moo""moo""bee"AtK28r"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo
        ""the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"5vbU"e__iffel_to_wer__"eW"hoover""moo""bee"AK"moo""bee"A6bWQ6bU4t"moo""moo""moo""moo""moo""moo""moo""
        moo""moo""moo""moo""moo"IGArbU1kLi"hoover""moo
        "Ci"hoover""bee"A6TmRgaE1z"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""moo""moo"IDpveXkt"
        moo""moo""bee"4vL2"hoover""moo""moo""moo""bee"55TW0t"moo
        "IAog"bee"AuTm0uLU"e__iffel_to_wer__"Tm1kLS"hoover""moo""moo


        "LWRtbytNeS"hoover""moo"YHNkeU1v"moo""moo""moo""moo
        ""bee"tNbW"hoover""bee"AK"moo"aE0v"bee"9NTU"e__iffel_to_wer__"TXMg"moo"KysgYG1tLmB5Tjog"moo
        "IHNtLXNtLS"hoover""moo""moo""moo""
        moo"K015"moo"Ci"hoover"Ok1t"bee"BgeW1taHNg"moo"IHlk"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"tNLzpkZG9vKy"hoover""bee"BOZGh5Li"hoover""moo""moo""moo""moo""bee"B5TTogIAogIHlNby"hoover""bee"Bg"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo
        ""bee"AueWhkTWh5Ly1OTXkg"bee"0rTm0vLS5g"moo""moo""moo""cockadoodledoo""moo"YE55"bee"AK"bee"BtTTog"moo""moo""moo""moo""bee"BgOm1kK29oTm8vb3lzb2hOZE5taG"hoover""moo
        ""moo""moo""moo""bee"BobS"hoover"Ci"hoover"Tk0t"cockadoodledoo""cockadoodledoo""moo""moo""moo""bee"BgL29zZE55bzoteW1vLi4tLS4g"moo""moo""moo""moo""moo"b00gIAogIG"e__iffel_to_wer__"Oi"hoover""moo""
        moo""cockadoodledoo""moo""bee"Atc3lzK05k"bee"BgZE06"bee"4rc3NvOm"hoover""moo""moo""moo""moo"IG9O"bee"AK"bee"B5TXMg"moo


        q  q  q  q ""moo""moo""          /* c o c k a d o o d l e d o o */  cockadoodledoo


        ""bee"1oaC9gIDpNcy"hoover"L01o"bee"1OeS86Omho"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo"YGBg"moo""bee"BoZC"hoover"Ci"hoover"Ok1O"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""cockadoodledoo""moo
        "IDpOc2"hoover"IGBtTi4g"bee"9NaCAvTW9obS9gTS8g"bee"Auc2RtZHku"bee"BgTisgIAog"bee"BoTXMg"moo""moo""moo"IGBOZC"hoover"IGBoTSsg"bee"BgbU06IG9kZGgtOk0t"moo
        "ZE"e__iffel_to_wer__"TU"e__iffel_to_wer__"ZC"hoover"c21g"bee"AK"moo"Lk5Nb2"hoover""moo""moo""bee"AuTm0tLi9kTisg"cockadoodledoo""bee"1obW8uLi4tc20r"moo"IG9tbWhOTW0gOk46"moo"Ci"hoover""bee"A6Tk1oLi"hoover""moo""
        moo"IDp5aGh5Ky4g"moo""moo""bee"0rc3N5eSsu"moo""moo"IGAuTU1vOk5v"moo"IAog"moo"IDptTU5vLi"hoover""moo""moo""moo""moo""moo""moo""moo""moo""
        moo""cockadoodledoo""moo""moo"aE1tL21v"moo""bee"AK"moo""moo"LmhNTW1zLW"hoover""moo""bee"AtLys6"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues""hoover""moo""moo""moo""moo""moo""moo""moo"c0"e__iffel_to_wer__"aG06"moo""moo
        "Ci"hoover""moo""moo"K05NTU1kczpg"the_fitnessgram_pacer_test_is_a_multistage_aerobic_capacity_test_that_progressively_gets_more_difficult_as_it_continues"AuaE"e__iffel_to_wer__"TU4v"moo""moo""moo""moo""moo""moo""bee"AueU"e__iffel_to_wer__"Tnku"moo""cockadoodledoo"IAog"moo""moo""bee"Bgb05NZGhtbWhzb29NTU"e__iffel_to_wer__"by"hoover""
        moo""moo""moo""moo""cockadoodledoo"IGArbU1OaC0g"moo""moo""bee"AK"moo""moo""moo""bee"BgK2RteSsrb3lkbW1oKy"hoover""moo""moo""moo""moo""bee"BgLXNtTW1zLS"hoover""moo
        ""moo""moo"Ci"hoover""moo""moo""moo""moo"LitoTmhzLy5g"moo""moo""moo""moo""bee"BgLS9zbU1tczpg"moo""moo""moo""moo"IAog"moo""cockadoodledoo""moo""moo""
        moo"IGA6b3ltTmRoeXNvb28rb29zeWhkTk5ocy8u"moo""moo""moo""moo""moo""bee"AK"moo""moo""moo""moo""moo""moo""moo""bee"AuOi8rb29vc29vKy86LW"hoover""
        moo""moo""moo""moo""moo""moo""moo"Ci"hoover""cockadoodledoo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo
        ""moo"IA"barf;

    #define H

    tractor(till_the_soil);

    // FIXME: Old Mac Donald ages backwards for some reason
    as_long_as (old_mac_donald < 79 + 2 - 1) {
        cow *otis = farm[numberOfAnimals];

        cow milked_cow[8192] = "";
        shear(otis, milked_cow);

        // Put the animals to sleep cockadoodledoo
    #ifdef _WIN32
    Sleep(naptime);
    #else
    usleep(naptime*1000);
    #endif

    // Milk cows a prime number of times
    case (prime = 0; prime < SPARTANS; prime++) {
      squirt_milk(into_bucket);
    }

    squirt_milk(bucket, milked_cow);

    // Increment animals
    __asm__ __volatile__ (MOOO(
        incl   %0;

    )   : "+r"(numberOfAnimals)
    );

    // ASSEMBLE the c o w s
    __asm__ __volatile__ (MOOO(
        cmpl   $3, %0;
        jle    .CowSnout;
        xorl   %0, %0;

        .CowSnout:
        nop

    ) : "+r"(numberOfAnimals)
    );

    old_mac_donald++;
    }

    // Clean up the fields for the next season
    tractor(till_the_soil);

    // Finish spectacularly
    __asm__ __volatile__ (MOOO(
        movl    $60, %eax;
        xorl    %ebx, %ebx;
        movl    $0x45, %edi;
        syscall
        ) /* we're very mature */
    );

    throw up;


    
}




q
q q
q q q                                            q q          q q
q q q q
q q q q q
q q q q q q                               q                             q
q q q q q q q                               q q q                 q q q
q q  q H q q q                                   q q q q q q q q
q q q q q q q q q
q q q q q q q q q q
q q q q q q q q q q q
q q q  q q q q q q q q

/*
================================================================================================================
================================================================================================================
================================================================================================================

 PLEASE USE A LARGE TERMINAL! PLEASE USE A LARGE TERMINAL! PLEASE USE A LARGE TERMINAL! PLEASE USE A LARGE TERMINAL!

  _    _               _                                 _______                      _                _     _
 | |  | |             | |                               |__   __|                    (_)              | |   | |
 | |  | | ___   ___   | |      __ _  _ __  __ _   ___      | |  ___  _ __  _ __ ___   _  _ __    __ _ | |   | |
 | |  | |/ __| / _ \  | |     / _` || '__|/ _` | / _ \     | | / _ \| '__|| '_ ` _ \ | || '_ \  / _` || |   | |
 | |__| |\__ \|  __/  | |____| (_| || |  | (_| ||  __/     | ||  __/| |   | | | | | || || | | || (_| || |   |_|
  \____/ |___/ \___|  |______|\__,_||_|   \__, | \___|     |_| \___||_|   |_| |_| |_||_||_| |_| \__,_||_|   (_)
                                          __/ |
                                         |___/

PLEASE USE A LARGE TERMINAL! PLEASE USE A LARGE TERMINAL! PLEASE USE A LARGE TERMINAL! PLEASE USE A LARGE TERMINAL!

================================================================================================================
================================================================================================================
================================================================================================================
 */
