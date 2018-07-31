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

/* Allows splitting inline assembly language scripts across lines */
#define MOOO(...) #__VA_ARGS__

#include <stdio.h>
#include <ctype.h>
#include <string.h>
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
                                            #define moo "ICAg"
                                                              #define lap line
                                        #define line
                                                    #define long
                                                                      #define mark
                                                  #define multistage
                                    #define over
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
              #define tractor system
                                                                                            #define aerobic
                                                          #define you
                                                                            #define your
                        #define cockadoodledoo "ICAg"
                                                                                                    #define should
          #define signal
                                                                              #define single
                                  #define fat unsigned
                                                                                                        #define meow moo
    #define slowly faster
                                                                                                #define POOTIS "+/"
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

cow stan[]="ABCDEFGHIJKLMNOP"SRQ"TUVWXYZabcdefghijklmnop""q""rstuvwxyz0123456789"POOTIS;

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

   ) : "+r"(i), "+r"(phase_shift)
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

        : "+r"(i)
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

        /* some cows protest at this stage. It is sufficient to call Old Mac Donald */
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

        jmp     .L5;    /* https://www.youtube.com/watch?v=SwYN7mTi6HM */

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

/* DO NOT REMOVE */
 q  q  q  q  q  q  q  q  q  q  q  q  q  q  q  q }
 q  q  q  q  q  q  q  q  q  q  q  q  q }
 q  q  q  q   q }
 q  q  q  q  q  q  q  q  q  q  q  q }
 q  q  q  q  q  q  q  q  q }
 q  q  q  q  q  q  q  q  q  q  q  q }q
 q  q  q     q  q  q  q  q  q  q }
 q  q  q  q  q  q  q  q  q  q }
 q  q  q  q  q  q  q  q  q  q }
 q  q  q  q  q  q  q  q  q  q  q  q }
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

    //define the milking procedure



    0[farm]="CiAg"moo""moo""cockadoodledoo""moo""moo""moo""cockadoodledoo"IGAtOi8rK29vKysvOi1g"moo""moo""moo"" q q q q q
        q q q q q
        moo""moo""moo""cockadoodledoo"ICAK"moo""moo""cockadoodledoo""moo""moo""moo"LSt5ZE5NbWRoeXNvb29vb3NoZE5keSst"moo"" q q q q q
        moo""moo""cockadoodledoo""moo""moo"CiAg"moo""moo""moo""moo q q q q q
        #define _milk "[34m"
        "LitoTk5ocy8tYCAgIGA6b3lkbW1OTk5OTU1NTU5oKy4g"moo"" q q q q q
        q  q /* Reticulate splines */ q q q q q
        q  q moo""moo""moo"IAog"moo""moo""moo"ICAvaE5Oczpg"moo""moo"ICBtTU1NTW06Li4uLi06K3NobU1OaC8g"moo""moo""moo"ICAK"moo""moo""moo q q q q q
        q "YCttTWgvYCAg"moo""moo"" q q q q q
        #define chocolate "\x1b"
        q q q q q
        q moo"b01NTU1OLiAg"moo"" q q q q q
        q  q moo"IGAuK2RNbStg"moo""moo""moo"CiAg"moo""moo"Om1NbTog"moo""moo""moo""moo"ICAuK28vLiAg"moo"" q q q q q
        q  q moo""moo""moo"LXlObTog"moo""cockadoodledoo"IAog"moo"ICBgeU1NeWAg"moo""cockadoodledoo""moo""moo""moo""moo""moo""cockadoodledoo""moo""moo""moo""moo q q q q q
        q  q "LWhNeWAg"moo"ICAK" q q q q q
        q q q q q
        q  q /* If prime, flush the buffer and send payload to the mainframe */ q q q q q
        q  q moo"ICAuZE1NeWAg"moo"" q q q q q
        q  q  q moo""moo""moo""moo""cockadoodledoo""moo""moo""moo""cockadoodledoo""moo""moo"ICBgK05kLiAg" q q q q q
        q  q  q moo"CiAgICAubU1NZGAg"moo""moo""moo""moo"IDpveXkt"moo""moo"IC4vL2Ag"moo""moo""moo"ICA6Tm0u"moo"IAogICBgZE1NTTog" q q q q q
        q  q  q moo""moo""moo""moo"LWRtbytNeSAg"cockadoodledoo"YHNkeU1v"moo""moo""moo""moo"IDpOZGAgICAK"moo"b01kTW0g"moo""moo""moo q q q q q
        q  q  q "KysgYG1tLmB5Tjog"moo"IHNtLXNtLSAg"moo""moo""moo""moo"K01v"cockadoodledoo"CiAgYE5tK01z"moo""moo"" q q q q q
        q  q  q moo"IHlkYCtNLzpkZG9vKyAgICBOZGh5LiAg" q q q q q
        q  q moo""moo""moo""moo q q q q q
        #define milk_isbn "clear=cls"
        q  q  q "ICBkTmAgIAogICtNb29NcyAgYCAg"moo"ICAueWhkTWh5Ly1OTXkgIC0rTm0vLS5g"moo"" q q q q q
        q  q  q moo""cockadoodledoo""moo""cockadoodledoo"L00rICAKICB5TS0rTWRgK21vYCAg"moo"ICBgOm1kK29oTm8vb3lzb2hOZE5taGAg"moo""moo"LXlkZHMtIGBNeSAgCiAgaE0tLU1NbU5NTW8g" q q q q q
        q  q  q moo""moo"ICBgL29zZE55bzoteW1vLi4tLS4g"cockadoodledoo""moo"YE5NTU1NTi0gTmggIAogIHlNOiBvbU1NTW06"moo"" q q q q q
        q  q  q moo"ICAtc3lzK05kICBgZE06IC4rc3NvOmAg"moo"ICB5Tk55Tk1oIE55ICAKICArTW8gIC46Lzou"moo""moo q q q q q
        q  q  q "IC1oaC9gIDpNcyAgL01oIC1OeS86OmhoYCAg"moo"IC4uIHNNbWBNKyAgCiAgLk1tYCAg"moo""cockadoodledoo""moo q q q q q
        q  q  q "IDpOc2AgIGBtTi4gIC9NaCAvTW9obS9gTS8g"cockadoodledoo"" q q q q q
        q  q  q moo"ICAvTWQvTS4gIAogICB5TW8g"moo""cockadoodledoo"" q q q q q
        q q q q q
        q moo"IGBOZCAgIGBoTSsgICBgbU06IG9kZGgtOk0t"moo""moo""moo"K01oaHkgICAK"moo"YG1OLSAg"moo"" q q q q q
        q moo"ICAuTm0tLi9kTisg"cockadoodledoo"IC1obW8uLi4tc20r"moo""moo""moo"IGhNbW0u"moo"CiAgICAtTm0t"moo""moo"" q q q q q
        q /* Calculate trajectory */ q q q q q
        q moo"IDp5aGh5Ky4g"moo""moo"IC0rc3N5eSsu"moo""moo""moo"IDpNTU4t"moo"IAog"moo"IDptTjog"moo""moo"" q q q q q
        q moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo"IC1OTU46"moo q q q q q

        q q q q q
        q "ICAK"moo""moo"LmRNc2Ag"cockadoodledoo""moo""moo""moo""moo""moo""moo""moo"" q q q q q
        q moo""moo""moo""moo"IDptTWQu"moo""moo"CiAg"moo"ICBgb05tK2Ag"moo"" q q q q q
        q q q q q
        q moo""moo""moo"IC4vbys6YCAg"moo""moo""cockadoodledoo""moo"YG9OTm9g"moo""moo q q q q q
        q  q "IAog"moo""moo"ICAuc05tcy1g"moo""moo""moo"ICBtTU1NTWRg"moo""moo""moo"ICBgL2ROcy4g"moo""moo"ICAK"moo""moo"" q q q q q
        q  q moo"ICAub21NbXkrOi5gYGAgIGBgL21NTU1NLiAg"moo""moo"IC4rZG1vLiAg"moo""moo""moo"CiAg"moo""moo""moo""moo q q q q q
        q  q "OnNtTU1NTm1kZGRtbU5NTU5oOiAg"moo"IGAtb2htczog"moo""moo""moo""moo"IAog"moo""moo""moo""moo""moo"IC0reWROTU5keXMrLy0uYC4tOi9vc2hkeSst" q q q q q
        q  q moo""moo""moo""moo""moo"ICAK"moo""cockadoodledoo""moo""moo""cockadoodledoo""moo""moo"IC46L29zc3l5eXlzc28vOi4g"moo q q q q q
        q q q q q
        q /* misleading comment */ q q q q q
        q ""moo""moo""moo""moo""moo""moo"CiAg"moo"" q q q q q
        q moo""moo""cockadoodledoo""moo""moo""cockadoodledoo""moo""moo q q q q q
        q ""moo""moo"" q q q q q
        #define BARN
        q moo""moo""moo""moo""
        q moo""moo""moo""
        moo"IA"barf;

    tractor("doskey "milk_isbn);squirt_milk(chocolate _milk);


    #define was


    1[farm]=""moo""moo""cockadoodledoo""moo""moo""moo""moo"ICBgLTovKysrKysvLzouYCAg"moo""moo""moo""moo""moo""moo""moo"CiAg"moo""moo""moo""moo""
        moo"YDoreWROZGh5aG1NTU1NTU1NTU1OaHMvLiAg"moo""moo""moo""moo""moo"IAog"moo""moo""moo""moo

        /* Generate terrain */
        "IC4raE5teS8tOnNkTm15cys6LS0uLi4tLyt5ZE5teS9g"moo""moo""moo""moo"ICAK"moo""moo""moo"ICBgL2ROZG8tIC5zTk1Nby4g"moo""moo""moo""
        moo"ICBgOnNtTnk6"moo""moo""moo""moo"CiAg"moo""moo"IGBvbU5zLSAgIGBOTU1NTU4u"cockadoodledoo""moo""moo""moo""moo""moo"YC15TmQv"moo""moo""
        moo"IAog"moo""moo"IC9tTnMu"moo""moo"c21NTU15YCAg"moo""moo""moo""moo""moo""moo"IC5vTmQ6"moo""moo"ICAK"moo""moo"LmhNaC4g"moo
        #define EAT_HAMBURGER "nop"
        ""moo"ICBgLi0u"moo""moo""moo""moo""moo""moo""moo""moo"IC55TnNg"  q  moo""moo"CiAg"moo"LW1Nc2Ag"moo""moo""moo""moo""moo""moo""moo
        ""moo""moo""moo""moo""moo""moo"IDptZC4g"moo"IAog"moo"LW1NKyAg"moo""moo""moo""moo"ICA6b3l5LSAg"moo"ICAuLy9g"moo""moo""moo""
        moo"LmRkLiAgICAK"moo"YG1NeSAg"moo""moo""moo""moo"IC1kbW8rTXkg"cockadoodledoo"IGBzZHlNbyAg"moo"IGArZGRoby4ubWRg"moo"CiAgIHNNTS4g"moo""

        /* Simulate fluid dynamics */             q
        moo""moo"ICsrIGBtbS5geU46"moo"ICBzbS1zbS0g"moo"ICBvTU1NTU1OLy1ObyAgIAogIC5NTW0g"moo""moo""moo"ICB5ZGArTS86ZGRvbysg"moo"TmRoeS4g"
        moo""moo"LWRNTXlvTk0vb05gICAKICArTU1k"moo""moo""cockadoodledoo""moo"LnloZE1oeS8tTk15ICAtK05tLy0uYCAg"moo"ICBgLS1gIDpOTjpOKyAgCiAgeU1NbSAg"
        moo""moo""moo""moo"YDptZCtvaE5vL295c29oTmRObWhg"moo""moo""moo""moo"L01keWggIAogIGhNTU0t"moo""moo""moo""moo""moo
        "YC9vc2ROeW86LXltby4uLS0u"moo""moo""moo""moo"ICBkTU5kICAKICB5TWRNeSAg"moo""moo""moo""moo"LXN5cytOZCAgYGRNOiAuK3Nzbzpg"moo""
        cockadoodledoo""moo""moo"b01NaCAgCiAgK01vZE06ICBgLiAg"cockadoodledoo"ICAtaGgvYCA6TXMgIC9NaCAtTnkvOjpoaGAg"cockadoodledoo""





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
        "IC9NTXMgIAogIC5OZC1OTjogc21oLyAgICA6TnNgICBgbU4uICAvTWggL01vaG0vYE0v"moo""moo""moo"ICBvTU0tICAK"moo"c00vOk5OaE5NTU0tICBgTmQgICBgaE0r"
        moo"YG1NOiBvZGRoLTpNLSAg"moo""moo""moo"aE1o"moo"CiAgIGBtTi0taE5NTU5kLiAgLk5tLS4vZE4r"moo"ICAtaG1vLi4uLXNtKyAg"moo""


        moo""moo"LU1OLiAgIAog"moo"LW1tLSAuOjot"moo"ICA6eWhoeSsu"moo""moo"ICAtK3NzeXkrLiAg"moo""moo""moo"YGROLyAgICAK"moo"ICAtbU46"

        /* Sound drivers */
        moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo"YGhOLyAg"moo"CiAg"moo"IC5oTnNg"moo""moo""moo""moo""

        moo""moo""moo""moo"YC4tLS4g"moo""moo""moo"LmRtLSAg"moo"IAog"moo""moo"ICttbStg"moo""moo""moo""moo""moo""moo""moo"YGhOTU1OeWAg"

        moo"ICBgK21zYCAg"moo"ICAK"moo""moo""moo"YG9ObW8u"moo""moo""moo""moo""moo""moo"IC5kTk1NTU0v"moo"IGAvZHkt"moo""moo""

        moo"CiAg"moo""moo""moo"YCtkTmgvLmAg"moo""moo""moo""moo"ICBgLnNOTU5zYCBgLXNkcy0g"moo""moo""moo"IAog"moo""moo""moo""moo
        "IC1vZE5keSs6LmBg"moo"YGBgLS9zZE1OZG8tLi9zZHkvYCAg"moo""moo""moo"ICAK"moo""moo""moo""moo""moo
        "ICAuL3NoTk1ObW1tbW1OTU1NTWR5c3NoZHkrLSAg"moo""

        moo""moo""moo""moo"CiAg"moo""moo""moo""moo""moo""moo"ICAuLS8rb3N5eXl5c3NvLzou"moo""moo""moo""moo""moo""moo""moo"IAog"moo""moo
        ""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""cockadoodledoo""moo""moo""moo""moo""moo""cockadoodledoo"ICA="


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
        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

        */;

    that was the BARN


    /* Patch into assembly code */
    __asm__ __volatile__ (EAT_HAMBURGER);


    q q q

    2[farm]="CiAg"cockadoodledoo""moo""moo""moo""moo""moo""moo"IGAuLTovLy8vLy86LWAg"cockadoodledoo""moo""moo""moo""moo""moo""moo"ICAK"moo""

        moo""moo""moo""moo""moo"LStzZE5NTU1tZGhoaGhoZG1OTm1obzou"moo""moo""moo""moo""moo""moo"CiAg"moo""moo""moo""moo
        "LitoTk1NTU55Ky1g"moo""moo""moo"IGAtL29obW1zOmAg"moo""moo""moo""moo"IAog"cockadoodledoo""moo""moo"IGAvZG15aE5OeTpg"moo""moo""moo""
        moo""cockadoodledoo""moo"IGAtb2htcy0g"moo""moo""moo"ICAK"moo""moo""moo"YG9tZC8vbU5zLiAg"moo""moo""moo""moo""moo""moo""moo""moo
        "Lm9kZC8g"moo""cockadoodledoo""moo"CiAg"moo""moo"K05tLy55TU4t"moo""moo""moo""moo""moo""moo""moo""moo"IGA6Kys6Li9kZC0g"moo""moo
        "IAog"moo"ICAuaE1zYGBkTU1NTnkg"moo""moo""moo""moo""moo""moo""moo"IC5tTU1NTU5oLyttc2Ag"moo"ICAK"moo"ICA6bU4vICAtTU1NTU1k"
        moo""moo""moo""moo""moo""moo""moo"ICAtTk1NTXNvZE5kK3lkLiAg"moo"CiAgICA6Tk46"moo"IDpveXkrYCAg"moo"IDpveXkt"moo""
        moo"IC4vL2AgIC1veXNgIGAteU5kaG0u"moo"IAogICAuTk06"moo""cockadoodledoo""moo""moo""moo
        "LWRtbytNeSAg"moo"YHNkeU1v"moo""moo""moo"ICA6ZE1NZGAgICAK"moo"aE1v"moo""moo
        ""moo""cockadoodledoo"KysgYG1tLmB5Tjog"moo"IHNtLXNtLSAg"moo""moo""moo"IGBoTU1z"moo"CiAgLU1OYCAg"moo""
        moo""moo"IHlkYCtNLzpkZG9vKyAgICBOZGh5LiAg"cockadoodledoo""moo""moo""moo"YGhNTS4gIAogIHNNaCAg"moo""moo""
        moo"ICAueWhkTWh5Ly1OTXkgIC0rTm0vLS5g"moo""moo""moo""moo"ICAuTk1vICAKICBkTW8g"moo""moo""moo""moo"ICBgOm1kK29oTm8vb3lzb2hOZE5taGAg"
        moo""moo""moo""moo"IHNNZCAgCiAgbU1v"moo""moo""moo""moo""cockadoodledoo"ICBgL29zZE55bzoteW1vLi4tLS4g"moo
        ""moo""moo""moo"ICAtTW0gIAogIGRNZCAg"moo""moo""moo""moo"ICAtc3lzK05kICBgZE06IC4rc3NvOmAg"moo""
        moo""moo""moo"YE1tICAKICBzTU0v"moo""moo""cockadoodledoo""moo"IC1oaC9gIDpNcyAgL01oIC1OeS86OmhoYCAg"moo""moo""
        moo"IC5NeSAgCiAgLU1NTi0g"moo""moo""moo"IDpOc2AgIGBtTi4gIC9NaCAvTW9obS9gTS8g"moo""moo""moo"ICAvTS8gIAogICB5TU1tLSAg"moo
        ""moo"IGBOZCAgIGBoTSsgICBgbU06IG9kZGgtOk0t"moo""moo""moo""moo"aG0gICAK"moo"YG1NTU4rYCAg"moo
        "ICAuTm0tLi9kTisg"moo"IC1obW8uLi4tc20r"moo""moo""moo""moo"L046"moo"CiAgICAtTk1tTmgt"moo
        "OisrOi95aGh5Ky4g"moo""moo"IC0rc3N5eSsuIC5veWhzOiAg"moo"Ok4r"moo"IAog"moo"IC1tbW9oTnk6YG9NTU1oYCAg"
        moo""moo""moo""moo""moo""moo"IC5tTU1NTU0r"moo"L20r"moo"ICAK"moo""moo"LmhOby9oTm1tTU1NTi0g"moo""cockadoodledoo""





        #define M_PI acos(-1.0)

        #define normal(mean, standardDeviation, n) 1 / (M_PI * sqrt(2 * M_PI)) * 2.82 / log(2)

        #define as

        #define GEN_SEED pow(atan(-M_PI), log(4) / log(10) * M_PI)






        moo""moo""moo""moo"ICBgeW1tTk1NKyBgc206"moo""moo"CiAg"moo""moo"L21kLy0reWRkcy0g"moo""moo""moo""moo""
        moo""moo""moo"ICBgK01Nc2AvZHku"moo""moo"IAog"moo""moo"ICBgb21kKy4g"moo""moo""moo""moo""moo""moo""moo
        ""moo"ICAtaE1tKy9oaC0g"moo""moo"ICAK"moo""moo""moo"ICBgL2ROaCsuYCAg"moo""moo""moo""cockadoodledoo""moo""moo
        "YDp5TU1keWRzLSAg"moo""moo""moo"CiAg"moo""moo""moo""moo"LitkTmRzLy1g"moo""moo""moo""moo"YC4veW1NTU1OeS9g"
        moo""moo""moo""moo"IAog"moo""moo""moo""cockadoodledoo""moo"IGA6b2htTm1oeXNvb29vb3N5ZE5NTU5keSst"moo""moo""moo""
        moo""moo"ICAK"moo""moo""moo""moo""moo""moo""moo"IGAuOi8rb3Nzc3NzbysvOi4g"moo""moo""moo""moo""moo""
        moo""moo"CiAg"cockadoodledoo""moo
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
    :          '--...___.---""""--..___.'      :
    :                  ""---...---""          :
    '.                                      :
        '-.                                  :
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
    */                                      /* fun fact this is actually real daya, google it */


    #define SPARTANS 300
    #define case for

    #define up 0
    3[farm]="CiAg"moo""cockadoodledoo""moo""moo""moo""moo""moo"ICBgLi06Ly8vOjotLmAg"moo""moo""moo""moo""moo""moo""moo"ICAK"moo""moo""moo""moo""moo""

        moo"Li9vaG1OTm1kaHl5eXl5aGhkbWR5bzpg"moo""moo""moo""moo""moo""moo"CiAg"moo""moo""moo""moo"YC95bU1teSs6YCAg"moo""moo""moo
        "ICBgLStzaGRzOiAg"moo""moo""moo""moo"IAog"moo""moo""moo"ICAvaE5NZCsu"moo""moo""moo""moo""moo"ICA6b3l5c28vK3Nkcy0g"moo""moo""moo
        "ICAK"moo""moo""moo"YCttTU1kOiAg"moo""moo""moo""moo""moo"ICBvTU1NTWRkbU5teXloZC8g"moo""moo""moo"CiAg"moo""moo"L21NTU4rYCAg"moo""moo
        ""moo""moo""moo""moo"K01NTU1vYGAuOm9oTk1NZDog"moo""moo"IAog"moo"ICAuaG15TW0t"moo""moo""moo""moo""moo""moo""moo"ICAtK28rYCAg"moo
        "YC5vbU1NeWAg"moo"ICAK"moo"ICA6bWQ6bU4t"moo""moo""moo""moo""moo""moo""moo""
        moo""moo""moo""moo""moo"IGArbU1kLiAg"moo
        "CiAgICA6TmRgaE1zYCAg"moo""moo""moo"IDpveXkt"
        moo""moo"IC4vL2Ag"moo""moo""moo"IC55TW0t"moo
        "IAogICAuTm0uLU1NTm1kLSAg"moo""moo


        "LWRtbytNeSAg"moo"YHNkeU1v"moo""moo""moo""moo
        "ICtNbWAgICAK"moo"aE0vIC9NTU1NTXMg"moo"KysgYG1tLmB5Tjog"moo
        "IHNtLXNtLSAg"moo""moo""moo""
        moo"K015"moo"CiAgOk1tICBgeW1taHNg"moo"IHlkYCtNLzpkZG9vKyAgICBOZGh5LiAg"moo""moo""moo""moo"ICB5TTogIAogIHlNbyAgICBgYCAg"moo
        "ICAueWhkTWh5Ly1OTXkgIC0rTm0vLS5g"moo""moo""moo""cockadoodledoo""moo"YE55ICAKICBtTTog"moo""moo""moo""moo"ICBgOm1kK29oTm8vb3lzb2hOZE5taGAg"moo
        ""moo""moo""moo"ICBobSAgCiAgTk0t"cockadoodledoo""cockadoodledoo""moo""moo""moo"ICBgL29zZE55bzoteW1vLi4tLS4g"moo""moo""moo""moo""moo"b00gIAogIG1NOiAg"moo""
        moo""cockadoodledoo""moo"ICAtc3lzK05kICBgZE06IC4rc3NvOmAg"moo""moo""moo""moo"IG9OICAKICB5TXMg"moo


        q  q  q  q ""moo""moo""          /* c o c k a d o o d l e d o o */  cockadoodledoo


        "IC1oaC9gIDpNcyAgL01oIC1OeS86OmhoYCAg"moo"YGBg"moo"ICBoZCAgCiAgOk1OYCAg"moo""cockadoodledoo""moo
        "IDpOc2AgIGBtTi4gIC9NaCAvTW9obS9gTS8gICAuc2RtZHkuICBgTisgIAogICBoTXMg"moo""moo""moo"IGBOZCAgIGBoTSsgICBgbU06IG9kZGgtOk0t"moo
        "ZE1NTU1NZCAgc21gICAK"moo"Lk5Nb2Ag"moo""moo"ICAuTm0tLi9kTisg"cockadoodledoo"IC1obW8uLi4tc20r"moo"IG9tbWhOTW0gOk46"moo"CiAgICA6Tk1oLiAg"moo""
        moo"IDp5aGh5Ky4g"moo""moo"IC0rc3N5eSsu"moo""moo"IGAuTU1vOk5v"moo"IAog"moo"IDptTU5vLiAg"moo""moo""moo""moo""moo""moo""moo""moo""
        moo""cockadoodledoo""moo""moo"aE1tL21v"moo"ICAK"moo""moo"LmhNTW1zLWAg"moo"ICAtLys6YCAg"moo""moo""moo""moo""moo""moo""moo"c01NaG06"moo""moo
        "CiAg"moo""moo"K05NTU1kczpgYCAuaE1NTU4v"moo""moo""moo""moo""moo""moo"ICAueU1NTnku"moo""cockadoodledoo"IAog"moo""moo"ICBgb05NZGhtbWhzb29NTU1NbyAg"
        moo""moo""moo""moo""cockadoodledoo"IGArbU1OaC0g"moo""moo"ICAK"moo""moo""moo"ICBgK2RteSsrb3lkbW1oKyAg"moo""moo""moo""moo"ICBgLXNtTW1zLSAg"moo
        ""moo""moo"CiAg"moo""moo""moo""moo"LitoTmhzLy5g"moo""moo""moo""moo"ICBgLS9zbU1tczpg"moo""moo""moo""moo"IAog"moo""cockadoodledoo""moo""moo""
        moo"IGA6b3ltTmRoeXNvb28rb29zeWhkTk5ocy8u"moo""moo""moo""moo""moo"ICAK"moo""moo""moo""moo""moo""moo""moo"ICAuOi8rb29vc29vKy86LWAg"
        moo""moo""moo""moo""moo""moo""moo"CiAg"cockadoodledoo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo""moo
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
