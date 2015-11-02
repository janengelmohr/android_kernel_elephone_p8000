#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             24000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#endif

#define RBAT_PULL_UP_VOLT          2800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0   , 4175},
	{2   , 4157},
	{3   , 4141},
	{5   , 4126},
	{6   , 4112},
	{8   , 4100},
	{9   , 4090},
	{11  , 4081},
	{12  , 4068},
	{14  , 4045},
	{15  , 4021},
	{17  , 4000},
	{18  , 3984},
	{20  , 3971},
	{21  , 3961},
	{23  , 3951},
	{24  , 3941},
	{26  , 3932},
	{27  , 3923},
	{29  , 3913},
	{30  , 3903},
	{32  , 3893},
	{33  , 3884},
	{35  , 3875},
	{37  , 3867},
	{38  , 3859},
	{40  , 3852},
	{41  , 3845},
	{43  , 3839},
	{44  , 3833},
	{46  , 3827},
	{47  , 3822},
	{49  , 3817},
	{50  , 3811},
	{52  , 3807},
	{53  , 3802},
	{55  , 3798},
	{56  , 3794},
	{58  , 3790},
	{59  , 3786},
	{61  , 3783},
	{62  , 3779},
	{64  , 3776},
	{65  , 3772},
	{67  , 3768},
	{68  , 3763},
	{70  , 3759},
	{71  , 3754},
	{73  , 3749},
	{75  , 3744},
	{76  , 3739},
	{78  , 3734},
	{79  , 3730},
	{81  , 3725},
	{82  , 3721},
	{84  , 3718},
	{85  , 3715},
	{87  , 3712},
	{88  , 3708},
	{90  , 3702},
	{91  , 3691},
	{93  , 3673},
	{94  , 3647},
	{96  , 3612},
	{97  , 3563},
	{99  , 3516},
	{100 , 3400}     
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{0   , 4190},
	{2   , 4168},
	{3   , 4152},
	{5   , 4136},
	{6   , 4121},
	{8   , 4107},
	{9   , 4094},
	{11  , 4085},
	{12  , 4076},
	{14  , 4061},
	{15  , 4037},
	{17  , 4015},
	{18  , 3998},
	{20  , 3986},
	{22  , 3977},
	{23  , 3969},
	{25  , 3960},
	{26  , 3951},
	{28  , 3942},
	{29  , 3932},
	{31  , 3920},
	{32  , 3909},
	{34  , 3898},
	{35  , 3887},
	{37  , 3876},
	{38  , 3867},
	{40  , 3858},
	{41  , 3849},
	{43  , 3842},
	{45  , 3835},
	{46  , 3828},
	{48  , 3823},
	{49  , 3817},
	{51  , 3812},
	{52  , 3808},
	{54  , 3803},
	{55  , 3799},
	{57  , 3796},
	{58  , 3792},
	{60  , 3789},
	{61  , 3786},
	{63  , 3784},
	{65  , 3782},
	{66  , 3779},
	{68  , 3777},
	{69  , 3774},
	{71  , 3771},
	{72  , 3767},
	{74  , 3763},
	{75  , 3759},
	{77  , 3754},
	{78  , 3748},
	{80  , 3743},
	{81  , 3736},
	{83  , 3729},
	{85  , 3721},
	{86  , 3714},
	{88  , 3709},
	{89  , 3705},
	{91  , 3702},
	{92  , 3698},
	{94  , 3690},
	{95  , 3667},
	{97  , 3618},
	{98  , 3542},
	{100 , 3415},
	{100 , 3415} 
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0   , 4191},
	{2   , 4171},
	{3   , 4152},
	{5   , 4136},
	{6   , 4121},
	{8   , 4106},
	{9   , 4091},
	{11  , 4078},
	{12  , 4068},
	{14  , 4055},
	{15  , 4040},
	{17  , 4024},
	{19  , 4011},
	{20  , 3999},
	{22  , 3988},
	{23  , 3979},
	{25  , 3970},
	{26  , 3960},
	{28  , 3951},
	{29  , 3941},
	{31  , 3932},
	{32  , 3923},
	{34  , 3914},
	{35  , 3906},
	{37  , 3896},
	{38  , 3886},
	{40  , 3875},
	{41  , 3864},
	{43  , 3852},
	{44  , 3842},
	{46  , 3832},
	{48  , 3825},
	{49  , 3818},
	{51  , 3812},
	{52  , 3807},
	{54  , 3802},
	{55  , 3797},
	{57  , 3793},
	{58  , 3790},
	{60  , 3786},
	{61  , 3784},
	{63  , 3781},
	{64  , 3779},
	{66  , 3776},
	{67  , 3775},
	{69  , 3773},
	{71  , 3770},
	{72  , 3767},
	{74  , 3763},
	{75  , 3758},
	{77  , 3752},
	{78  , 3746},
	{80  , 3741},
	{81  , 3735},
	{83  , 3727},
	{84  , 3718},
	{86  , 3709},
	{87  , 3697},
	{89  , 3689},
	{91  , 3687},
	{92  , 3686},
	{94  , 3683},
	{95  , 3676},
	{97  , 3631},
	{98  , 3555},
	{100 , 3442},
	{100 , 3442}     
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0   , 4190},
	{2   , 4168},
	{3   , 4152},
	{5   , 4136},
	{6   , 4121},
	{8   , 4107},
	{9   , 4094},
	{11  , 4085},
	{12  , 4076},
	{14  , 4061},
	{15  , 4037},
	{17  , 4015},
	{18  , 3998},
	{20  , 3986},
	{22  , 3977},
	{23  , 3969},
	{25  , 3960},
	{26  , 3951},
	{28  , 3942},
	{29  , 3932},
	{31  , 3920},
	{32  , 3909},
	{34  , 3898},
	{35  , 3887},
	{37  , 3876},
	{38  , 3867},
	{40  , 3858},
	{41  , 3849},
	{43  , 3842},
	{45  , 3835},
	{46  , 3828},
	{48  , 3823},
	{49  , 3817},
	{51  , 3812},
	{52  , 3808},
	{54  , 3803},
	{55  , 3799},
	{57  , 3796},
	{58  , 3792},
	{60  , 3789},
	{61  , 3786},
	{63  , 3784},
	{65  , 3782},
	{66  , 3779},
	{68  , 3777},
	{69  , 3774},
	{71  , 3771},
	{72  , 3767},
	{74  , 3763},
	{75  , 3759},
	{77  , 3754},
	{78  , 3748},
	{80  , 3743},
	{81  , 3736},
	{83  , 3729},
	{85  , 3721},
	{86  , 3714},
	{88  , 3709},
	{89  , 3705},
	{91  , 3702},
	{92  , 3698},
	{94  , 3690},
	{95  , 3667},
	{97  , 3618},
	{98  , 3542},
	{100 , 3415},
	{100 , 3415}  
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0}
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	{394  , 4175},
	{394  , 4157},
	{400  , 4141},
	{404  , 4126},
	{409  , 4112},
	{414  , 4100},
	{421  , 4090},
	{429  , 4081},
	{433  , 4068},
	{424  , 4045},
	{412  , 4021},
	{411  , 4000},
	{413  , 3984},
	{416  , 3971},
	{418  , 3961},
	{416  , 3951},
	{413  , 3941},
	{410  , 3932},
	{408  , 3923},
	{405  , 3913},
	{402  , 3903},
	{399  , 3893},
	{398  , 3884},
	{399  , 3875},
	{400  , 3867},
	{401  , 3859},
	{404  , 3852},
	{406  , 3845},
	{409  , 3839},
	{412  , 3833},
	{415  , 3827},
	{418  , 3822},
	{423  , 3817},
	{426  , 3811},
	{431  , 3807},
	{435  , 3802},
	{438  , 3798},
	{442  , 3794},
	{445  , 3790},
	{450  , 3786},
	{453  , 3783},
	{458  , 3779},
	{461  , 3776},
	{465  , 3772},
	{470  , 3768},
	{474  , 3763},
	{479  , 3759},
	{486  , 3754},
	{492  , 3749},
	{499  , 3744},
	{507  , 3739},
	{515  , 3734},
	{524  , 3730},
	{534  , 3725},
	{547  , 3721},
	{563  , 3718},
	{583  , 3715},
	{610  , 3712},
	{645  , 3708},
	{686  , 3702},
	{734  , 3691},
	{788  , 3673},
	{851  , 3647},
	{929  , 3612},
	{1026 , 3563},
	{1150 , 3516},
	{1085 , 3400}
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{225  , 4190},
	{249  , 4168},
	{251  , 4152},
	{253  , 4136},
	{256  , 4121},
	{259  , 4107},
	{261  , 4094},
	{268  , 4085},
	{278  , 4076},
	{283  , 4061},
	{280  , 4037},
	{279  , 4015},
	{279  , 3998},
	{282  , 3986},
	{283  , 3977},
	{283  , 3969},
	{283  , 3960},
	{282  , 3951},
	{281  , 3942},
	{278  , 3932},
	{275  , 3920},
	{271  , 3909},
	{267  , 3898},
	{264  , 3887},
	{261  , 3876},
	{259  , 3867},
	{257  , 3858},
	{256  , 3849},
	{256  , 3842},
	{256  , 3835},
	{257  , 3828},
	{258  , 3823},
	{260  , 3817},
	{262  , 3812},
	{264  , 3808},
	{266  , 3803},
	{268  , 3799},
	{271  , 3796},
	{273  , 3792},
	{276  , 3789},
	{279  , 3786},
	{281  , 3784},
	{283  , 3782},
	{286  , 3779},
	{288  , 3777},
	{291  , 3774},
	{294  , 3771},
	{298  , 3767},
	{302  , 3763},
	{306  , 3759},
	{310  , 3754},
	{314  , 3748},
	{319  , 3743},
	{324  , 3736},
	{326  , 3729},
	{328  , 3721},
	{330  , 3714},
	{337  , 3709},
	{352  , 3705},
	{377  , 3702},
	{414  , 3698},
	{464  , 3690},
	{505  , 3667},
	{546  , 3618},
	{631  , 3542},
	{800  , 3415},
	{800  , 3415}    
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{108  , 4191},
	{108  , 4171},
	{108  , 4152},
	{107  , 4136},
	{108  , 4121},
	{110  , 4106},
	{110  , 4091},
	{110  , 4078},
	{112  , 4068},
	{113  , 4055},
	{115  , 4040},
	{113  , 4024},
	{117  , 4011},
	{118  , 3999},
	{120  , 3988},
	{122  , 3979},
	{122  , 3970},
	{123  , 3960},
	{127  , 3951},
	{128  , 3941},
	{132  , 3932},
	{133  , 3923},
	{137  , 3914},
	{140  , 3906},
	{138  , 3896},
	{138  , 3886},
	{135  , 3875},
	{130  , 3864},
	{125  , 3852},
	{120  , 3842},
	{115  , 3832},
	{113  , 3825},
	{113  , 3818},
	{113  , 3812},
	{113  , 3807},
	{112  , 3802},
	{112  , 3797},
	{113  , 3793},
	{115  , 3790},
	{115  , 3786},
	{117  , 3784},
	{118  , 3781},
	{122  , 3779},
	{122  , 3776},
	{127  , 3775},
	{127  , 3773},
	{127  , 3770},
	{123  , 3767},
	{120  , 3763},
	{120  , 3758},
	{118  , 3752},
	{117  , 3746},
	{118  , 3741},
	{120  , 3735},
	{120  , 3727},
	{122  , 3718},
	{122  , 3709},
	{120  , 3697},
	{115  , 3689},
	{120  , 3687},
	{125  , 3686},
	{132  , 3683},
	{138  , 3676},
	{132  , 3631},
	{138  , 3555},
	{153  , 3442},
	{153  , 3442}    
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{110  , 4190},
	{249  , 4168},
	{251  , 4152},
	{253  , 4136},
	{256  , 4121},
	{259  , 4107},
	{261  , 4094},
	{268  , 4085},
	{278  , 4076},
	{283  , 4061},
	{280  , 4037},
	{279  , 4015},
	{279  , 3998},
	{282  , 3986},
	{283  , 3977},
	{283  , 3969},
	{283  , 3960},
	{282  , 3951},
	{281  , 3942},
	{278  , 3932},
	{275  , 3920},
	{271  , 3909},
	{267  , 3898},
	{264  , 3887},
	{261  , 3876},
	{259  , 3867},
	{257  , 3858},
	{256  , 3849},
	{256  , 3842},
	{256  , 3835},
	{257  , 3828},
	{258  , 3823},
	{260  , 3817},
	{262  , 3812},
	{264  , 3808},
	{266  , 3803},
	{268  , 3799},
	{271  , 3796},
	{273  , 3792},
	{276  , 3789},
	{279  , 3786},
	{281  , 3784},
	{283  , 3782},
	{286  , 3779},
	{288  , 3777},
	{291  , 3774},
	{294  , 3771},
	{298  , 3767},
	{302  , 3763},
	{306  , 3759},
	{310  , 3754},
	{314  , 3748},
	{319  , 3743},
	{324  , 3736},
	{326  , 3729},
	{328  , 3721},
	{330  , 3714},
	{337  , 3709},
	{352  , 3705},
	{377  , 3702},
	{414  , 3698},
	{464  , 3690},
	{505  , 3667},
	{546  , 3618},
	{631  , 3542},
	{800  , 3415},
	{800  , 3415}  
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0},
	{0   , 0}
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

