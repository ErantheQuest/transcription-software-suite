#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 2
#define BUFFER_SIZE 1480

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} vCidaEEK_ctx_t;

void init_ctx(vCidaEEK_ctx_t *ctx) {
    ctx->id = 1733;
    ctx->coefficient = 5.4;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} fwTgTV2a_ctx_t;

void init_ctx(fwTgTV2a_ctx_t *ctx) {
    ctx->id = 3022;
    ctx->coefficient = 8.8;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} yQNL0FJ7_ctx_t;

void init_ctx(yQNL0FJ7_ctx_t *ctx) {
    ctx->id = 9283;
    ctx->coefficient = 1.9;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} erXVtKAh_ctx_t;

void init_ctx(erXVtKAh_ctx_t *ctx) {
    ctx->id = 2913;
    ctx->coefficient = 6.5;
    ctx->flags = 151;
}

int compute_c4rcNxb(int input) {
    int result = input * 48;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} EQJEfrsd_ctx_t;

void init_ctx(EQJEfrsd_ctx_t *ctx) {
    ctx->id = 7791;
    ctx->coefficient = 0.1;
    ctx->flags = 2;
}

int compute_jGvvAdZ(int input) {
    int result = input * 7;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 5gFaUMCd_ctx_t;

void init_ctx(5gFaUMCd_ctx_t *ctx) {
    ctx->id = 9050;
    ctx->coefficient = 4.2;
    ctx->flags = 247;
}

int compute_HTEJb16(int input) {
    int result = input * 6;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_amCUazD(int input) {
    int result = input * 41;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} s1ivycLO_ctx_t;

void init_ctx(s1ivycLO_ctx_t *ctx) {
    ctx->id = 7925;
    ctx->coefficient = 5.0;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} ktl2sgSo_ctx_t;

void init_ctx(ktl2sgSo_ctx_t *ctx) {
    ctx->id = 7251;
    ctx->coefficient = 6.5;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 0WoK3fQZ_ctx_t;

void init_ctx(0WoK3fQZ_ctx_t *ctx) {
    ctx->id = 9671;
    ctx->coefficient = 5.0;
    ctx->flags = 175;
}

int compute_Tx5neEe(int input) {
    int result = input * 55;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} XWJKA0b6_ctx_t;

void init_ctx(XWJKA0b6_ctx_t *ctx) {
    ctx->id = 4282;
    ctx->coefficient = 1.9;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} aqbU237x_ctx_t;

void init_ctx(aqbU237x_ctx_t *ctx) {
    ctx->id = 3331;
    ctx->coefficient = 2.6;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} PPmyLB7V_ctx_t;

void init_ctx(PPmyLB7V_ctx_t *ctx) {
    ctx->id = 2834;
    ctx->coefficient = 0.1;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} uUnWCCw9_ctx_t;

void init_ctx(uUnWCCw9_ctx_t *ctx) {
    ctx->id = 1686;
    ctx->coefficient = 9.5;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} P0e4mDWC_ctx_t;

void init_ctx(P0e4mDWC_ctx_t *ctx) {
    ctx->id = 5576;
    ctx->coefficient = 1.7;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} zQCUsW7Z_ctx_t;

void init_ctx(zQCUsW7Z_ctx_t *ctx) {
    ctx->id = 9409;
    ctx->coefficient = 9.7;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} ydvx39Lb_ctx_t;

void init_ctx(ydvx39Lb_ctx_t *ctx) {
    ctx->id = 8642;
    ctx->coefficient = 5.8;
    ctx->flags = 53;
}

int compute_Cn3XCw8(int input) {
    int result = input * 59;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_gr3CyVl(int input) {
    int result = input * 55;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} TTMqnAUw_ctx_t;

void init_ctx(TTMqnAUw_ctx_t *ctx) {
    ctx->id = 4252;
    ctx->coefficient = 9.4;
    ctx->flags = 50;
}

int compute_NlSUCRz(int input) {
    int result = input * 37;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} b1ttRXin_ctx_t;

void init_ctx(b1ttRXin_ctx_t *ctx) {
    ctx->id = 7388;
    ctx->coefficient = 3.1;
    ctx->flags = 207;
}

int compute_KKxIVxG(int input) {
    int result = input * 30;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_0GVssPC(int input) {
    int result = input * 3;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_lTHh7kH(int input) {
    int result = input * 35;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_4TFtdBV(int input) {
    int result = input * 29;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} KaoIAKCQ_ctx_t;

void init_ctx(KaoIAKCQ_ctx_t *ctx) {
    ctx->id = 2786;
    ctx->coefficient = 1.1;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} PYgLHKkM_ctx_t;

void init_ctx(PYgLHKkM_ctx_t *ctx) {
    ctx->id = 4065;
    ctx->coefficient = 3.9;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} pJUG9Rc6_ctx_t;

void init_ctx(pJUG9Rc6_ctx_t *ctx) {
    ctx->id = 6603;
    ctx->coefficient = 0.6;
    ctx->flags = 13;
}

int compute_FAjyVyI(int input) {
    int result = input * 52;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_I64JjHq(int input) {
    int result = input * 9;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} eFPLA05Z_ctx_t;

void init_ctx(eFPLA05Z_ctx_t *ctx) {
    ctx->id = 8631;
    ctx->coefficient = 8.8;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} sUEQaJcF_ctx_t;

void init_ctx(sUEQaJcF_ctx_t *ctx) {
    ctx->id = 9099;
    ctx->coefficient = 5.9;
    ctx->flags = 100;
}

int compute_zaAdyU2(int input) {
    int result = input * 49;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} LlM5WtVU_ctx_t;

void init_ctx(LlM5WtVU_ctx_t *ctx) {
    ctx->id = 9092;
    ctx->coefficient = 8.0;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} LUfKrTah_ctx_t;

void init_ctx(LUfKrTah_ctx_t *ctx) {
    ctx->id = 7953;
    ctx->coefficient = 5.9;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} jops4lgN_ctx_t;

void init_ctx(jops4lgN_ctx_t *ctx) {
    ctx->id = 9364;
    ctx->coefficient = 7.8;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} cHRES4Ca_ctx_t;

void init_ctx(cHRES4Ca_ctx_t *ctx) {
    ctx->id = 3020;
    ctx->coefficient = 7.9;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} AQ0YlgoT_ctx_t;

void init_ctx(AQ0YlgoT_ctx_t *ctx) {
    ctx->id = 2862;
    ctx->coefficient = 2.4;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} dG42kEsf_ctx_t;

void init_ctx(dG42kEsf_ctx_t *ctx) {
    ctx->id = 9738;
    ctx->coefficient = 7.1;
    ctx->flags = 114;
}

int compute_31lQTVM(int input) {
    int result = input * 9;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} wJ7MlPcS_ctx_t;

void init_ctx(wJ7MlPcS_ctx_t *ctx) {
    ctx->id = 2739;
    ctx->coefficient = 0.1;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 5GsYTfF0_ctx_t;

void init_ctx(5GsYTfF0_ctx_t *ctx) {
    ctx->id = 2743;
    ctx->coefficient = 1.2;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} UCrHfSRv_ctx_t;

void init_ctx(UCrHfSRv_ctx_t *ctx) {
    ctx->id = 3346;
    ctx->coefficient = 1.0;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 0ddLsHlB_ctx_t;

void init_ctx(0ddLsHlB_ctx_t *ctx) {
    ctx->id = 1801;
    ctx->coefficient = 7.2;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} QVjITir2_ctx_t;

void init_ctx(QVjITir2_ctx_t *ctx) {
    ctx->id = 3911;
    ctx->coefficient = 6.6;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} oymxYaKP_ctx_t;

void init_ctx(oymxYaKP_ctx_t *ctx) {
    ctx->id = 5876;
    ctx->coefficient = 1.9;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} s6keHwab_ctx_t;

void init_ctx(s6keHwab_ctx_t *ctx) {
    ctx->id = 5141;
    ctx->coefficient = 0.5;
    ctx->flags = 0;
}

int compute_Zl8n7Tj(int input) {
    int result = input * 7;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} ewe3kly1_ctx_t;

void init_ctx(ewe3kly1_ctx_t *ctx) {
    ctx->id = 2114;
    ctx->coefficient = 4.3;
    ctx->flags = 21;
}

int compute_A4y66Ss(int input) {
    int result = input * 49;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} NTIUKjQ5_ctx_t;

void init_ctx(NTIUKjQ5_ctx_t *ctx) {
    ctx->id = 8429;
    ctx->coefficient = 6.7;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} L4Hskcwn_ctx_t;

void init_ctx(L4Hskcwn_ctx_t *ctx) {
    ctx->id = 1669;
    ctx->coefficient = 0.8;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} rnXI4p3f_ctx_t;

void init_ctx(rnXI4p3f_ctx_t *ctx) {
    ctx->id = 9653;
    ctx->coefficient = 1.0;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} kd0PmYkl_ctx_t;

void init_ctx(kd0PmYkl_ctx_t *ctx) {
    ctx->id = 8508;
    ctx->coefficient = 6.2;
    ctx->flags = 207;
}

int compute_jaPbN6d(int input) {
    int result = input * 28;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} sps2L67w_ctx_t;

void init_ctx(sps2L67w_ctx_t *ctx) {
    ctx->id = 5638;
    ctx->coefficient = 9.1;
    ctx->flags = 48;
}

int compute_XT9cVJl(int input) {
    int result = input * 13;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_ug11AOw(int input) {
    int result = input * 7;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} wphgfH8t_ctx_t;

void init_ctx(wphgfH8t_ctx_t *ctx) {
    ctx->id = 9906;
    ctx->coefficient = 2.6;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} L14ik7Jn_ctx_t;

void init_ctx(L14ik7Jn_ctx_t *ctx) {
    ctx->id = 4444;
    ctx->coefficient = 0.5;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} z44SfWvb_ctx_t;

void init_ctx(z44SfWvb_ctx_t *ctx) {
    ctx->id = 5718;
    ctx->coefficient = 9.8;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} UDpdcy4E_ctx_t;

void init_ctx(UDpdcy4E_ctx_t *ctx) {
    ctx->id = 6230;
    ctx->coefficient = 0.2;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} VfJ21UuR_ctx_t;

void init_ctx(VfJ21UuR_ctx_t *ctx) {
    ctx->id = 1993;
    ctx->coefficient = 7.8;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} OVrKWnlB_ctx_t;

void init_ctx(OVrKWnlB_ctx_t *ctx) {
    ctx->id = 9153;
    ctx->coefficient = 7.9;
    ctx->flags = 225;
}

int compute_oreMt4V(int input) {
    int result = input * 52;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_X07e0de(int input) {
    int result = input * 35;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} zLv2nTC2_ctx_t;

void init_ctx(zLv2nTC2_ctx_t *ctx) {
    ctx->id = 2931;
    ctx->coefficient = 8.1;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 2S8rzE8L_ctx_t;

void init_ctx(2S8rzE8L_ctx_t *ctx) {
    ctx->id = 6700;
    ctx->coefficient = 9.9;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} ywionDhC_ctx_t;

void init_ctx(ywionDhC_ctx_t *ctx) {
    ctx->id = 1395;
    ctx->coefficient = 2.4;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} vZhYidcf_ctx_t;

void init_ctx(vZhYidcf_ctx_t *ctx) {
    ctx->id = 9752;
    ctx->coefficient = 9.3;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} zyipo3gF_ctx_t;

void init_ctx(zyipo3gF_ctx_t *ctx) {
    ctx->id = 9915;
    ctx->coefficient = 1.8;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} swR7LELo_ctx_t;

void init_ctx(swR7LELo_ctx_t *ctx) {
    ctx->id = 2375;
    ctx->coefficient = 9.9;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} oihRTrHH_ctx_t;

void init_ctx(oihRTrHH_ctx_t *ctx) {
    ctx->id = 8091;
    ctx->coefficient = 5.4;
    ctx->flags = 219;
}

int compute_3mF6MKF(int input) {
    int result = input * 69;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} StVroOWb_ctx_t;

void init_ctx(StVroOWb_ctx_t *ctx) {
    ctx->id = 9449;
    ctx->coefficient = 0.6;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} rFhW74Kt_ctx_t;

void init_ctx(rFhW74Kt_ctx_t *ctx) {
    ctx->id = 4247;
    ctx->coefficient = 8.1;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} beGj8UEM_ctx_t;

void init_ctx(beGj8UEM_ctx_t *ctx) {
    ctx->id = 4393;
    ctx->coefficient = 3.7;
    ctx->flags = 15;
}

int compute_dHEkgTH(int input) {
    int result = input * 51;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_8yxmzvW(int input) {
    int result = input * 62;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_n178exS(int input) {
    int result = input * 26;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} J7lVGdTe_ctx_t;

void init_ctx(J7lVGdTe_ctx_t *ctx) {
    ctx->id = 4733;
    ctx->coefficient = 9.0;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} PPPk185B_ctx_t;

void init_ctx(PPPk185B_ctx_t *ctx) {
    ctx->id = 3038;
    ctx->coefficient = 3.6;
    ctx->flags = 118;
}

int compute_65RcRF4(int input) {
    int result = input * 67;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} Pre7wsMa_ctx_t;

void init_ctx(Pre7wsMa_ctx_t *ctx) {
    ctx->id = 4356;
    ctx->coefficient = 3.3;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} sLGBZoJk_ctx_t;

void init_ctx(sLGBZoJk_ctx_t *ctx) {
    ctx->id = 4765;
    ctx->coefficient = 4.9;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 0T9qVFiX_ctx_t;

void init_ctx(0T9qVFiX_ctx_t *ctx) {
    ctx->id = 3933;
    ctx->coefficient = 4.2;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} uDILExZp_ctx_t;

void init_ctx(uDILExZp_ctx_t *ctx) {
    ctx->id = 9582;
    ctx->coefficient = 1.5;
    ctx->flags = 136;
}

int compute_J2xRVzA(int input) {
    int result = input * 55;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} qpZhPs6y_ctx_t;

void init_ctx(qpZhPs6y_ctx_t *ctx) {
    ctx->id = 8390;
    ctx->coefficient = 3.1;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} M8JjzyID_ctx_t;

void init_ctx(M8JjzyID_ctx_t *ctx) {
    ctx->id = 6975;
    ctx->coefficient = 3.8;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} yQfRnVTd_ctx_t;

void init_ctx(yQfRnVTd_ctx_t *ctx) {
    ctx->id = 4599;
    ctx->coefficient = 0.6;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} cB9hfs0L_ctx_t;

void init_ctx(cB9hfs0L_ctx_t *ctx) {
    ctx->id = 6654;
    ctx->coefficient = 9.9;
    ctx->flags = 18;
}

int compute_s2Ilvmc(int input) {
    int result = input * 40;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 9NUtj9Gv_ctx_t;

void init_ctx(9NUtj9Gv_ctx_t *ctx) {
    ctx->id = 2997;
    ctx->coefficient = 0.3;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} Yc0Bbm9w_ctx_t;

void init_ctx(Yc0Bbm9w_ctx_t *ctx) {
    ctx->id = 7483;
    ctx->coefficient = 1.2;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} emDE1XMK_ctx_t;

void init_ctx(emDE1XMK_ctx_t *ctx) {
    ctx->id = 9822;
    ctx->coefficient = 5.4;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} rsaDb2a5_ctx_t;

void init_ctx(rsaDb2a5_ctx_t *ctx) {
    ctx->id = 7119;
    ctx->coefficient = 7.4;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} WVUBF3cl_ctx_t;

void init_ctx(WVUBF3cl_ctx_t *ctx) {
    ctx->id = 5765;
    ctx->coefficient = 2.6;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} aZIYmF1Q_ctx_t;

void init_ctx(aZIYmF1Q_ctx_t *ctx) {
    ctx->id = 6201;
    ctx->coefficient = 8.8;
    ctx->flags = 196;
}

int compute_6bvSLpp(int input) {
    int result = input * 3;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} Nn0ykD75_ctx_t;

void init_ctx(Nn0ykD75_ctx_t *ctx) {
    ctx->id = 1198;
    ctx->coefficient = 10.0;
    ctx->flags = 192;
}

int compute_UuXudfl(int input) {
    int result = input * 49;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 1HBgoSBo_ctx_t;

void init_ctx(1HBgoSBo_ctx_t *ctx) {
    ctx->id = 9167;
    ctx->coefficient = 4.6;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} ObUTgsZT_ctx_t;

void init_ctx(ObUTgsZT_ctx_t *ctx) {
    ctx->id = 6495;
    ctx->coefficient = 4.3;
    ctx->flags = 129;
}

int compute_n22YDzv(int input) {
    int result = input * 68;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_7CHGVLl(int input) {
    int result = input * 21;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} H2QFChSC_ctx_t;

void init_ctx(H2QFChSC_ctx_t *ctx) {
    ctx->id = 6307;
    ctx->coefficient = 3.6;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Q3QEHeCs_ctx_t;

void init_ctx(Q3QEHeCs_ctx_t *ctx) {
    ctx->id = 3948;
    ctx->coefficient = 2.6;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} GinoKGGE_ctx_t;

void init_ctx(GinoKGGE_ctx_t *ctx) {
    ctx->id = 7531;
    ctx->coefficient = 5.8;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} xT8xeEdI_ctx_t;

void init_ctx(xT8xeEdI_ctx_t *ctx) {
    ctx->id = 4490;
    ctx->coefficient = 7.5;
    ctx->flags = 60;
}

int compute_GgyDhGO(int input) {
    int result = input * 29;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} nuTPtGnl_ctx_t;

void init_ctx(nuTPtGnl_ctx_t *ctx) {
    ctx->id = 6373;
    ctx->coefficient = 5.7;
    ctx->flags = 97;
}

int compute_EvgbDcn(int input) {
    int result = input * 39;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} YUHUhYck_ctx_t;

void init_ctx(YUHUhYck_ctx_t *ctx) {
    ctx->id = 3552;
    ctx->coefficient = 1.6;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} h9GegyNN_ctx_t;

void init_ctx(h9GegyNN_ctx_t *ctx) {
    ctx->id = 5603;
    ctx->coefficient = 1.3;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} KpUIDB0E_ctx_t;

void init_ctx(KpUIDB0E_ctx_t *ctx) {
    ctx->id = 4554;
    ctx->coefficient = 2.0;
    ctx->flags = 110;
}

int compute_t6kcmca(int input) {
    int result = input * 35;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} DnOlRIIu_ctx_t;

void init_ctx(DnOlRIIu_ctx_t *ctx) {
    ctx->id = 6945;
    ctx->coefficient = 2.7;
    ctx->flags = 190;
}

int compute_9T2nH9u(int input) {
    int result = input * 43;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_CcifF1Q(int input) {
    int result = input * 25;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} xLae2lzB_ctx_t;

void init_ctx(xLae2lzB_ctx_t *ctx) {
    ctx->id = 2663;
    ctx->coefficient = 4.0;
    ctx->flags = 78;
}

int compute_US2ceY7(int input) {
    int result = input * 60;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} bj9r4RtB_ctx_t;

void init_ctx(bj9r4RtB_ctx_t *ctx) {
    ctx->id = 4620;
    ctx->coefficient = 4.4;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} zWuZiDwU_ctx_t;

void init_ctx(zWuZiDwU_ctx_t *ctx) {
    ctx->id = 3493;
    ctx->coefficient = 4.9;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} VkTaIGCX_ctx_t;

void init_ctx(VkTaIGCX_ctx_t *ctx) {
    ctx->id = 7077;
    ctx->coefficient = 9.6;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} LGn84fXS_ctx_t;

void init_ctx(LGn84fXS_ctx_t *ctx) {
    ctx->id = 1195;
    ctx->coefficient = 4.1;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 3Fack79H_ctx_t;

void init_ctx(3Fack79H_ctx_t *ctx) {
    ctx->id = 8114;
    ctx->coefficient = 6.2;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} M30lRhuQ_ctx_t;

void init_ctx(M30lRhuQ_ctx_t *ctx) {
    ctx->id = 7071;
    ctx->coefficient = 3.0;
    ctx->flags = 152;
}

int compute_qnJmhDl(int input) {
    int result = input * 49;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} NhTh3fHr_ctx_t;

void init_ctx(NhTh3fHr_ctx_t *ctx) {
    ctx->id = 9241;
    ctx->coefficient = 9.4;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} JU8T8X3a_ctx_t;

void init_ctx(JU8T8X3a_ctx_t *ctx) {
    ctx->id = 7061;
    ctx->coefficient = 4.1;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} XF3vGmQS_ctx_t;

void init_ctx(XF3vGmQS_ctx_t *ctx) {
    ctx->id = 9102;
    ctx->coefficient = 8.3;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} M3gRHVnw_ctx_t;

void init_ctx(M3gRHVnw_ctx_t *ctx) {
    ctx->id = 6799;
    ctx->coefficient = 6.3;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} oXt3NyP6_ctx_t;

void init_ctx(oXt3NyP6_ctx_t *ctx) {
    ctx->id = 9283;
    ctx->coefficient = 9.9;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} WqMOzrld_ctx_t;

void init_ctx(WqMOzrld_ctx_t *ctx) {
    ctx->id = 9454;
    ctx->coefficient = 9.8;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} Fk02Vivt_ctx_t;

void init_ctx(Fk02Vivt_ctx_t *ctx) {
    ctx->id = 4598;
    ctx->coefficient = 0.5;
    ctx->flags = 112;
}

int compute_hnXHcvt(int input) {
    int result = input * 27;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_fxc8G7h(int input) {
    int result = input * 8;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} EDjTHkLk_ctx_t;

void init_ctx(EDjTHkLk_ctx_t *ctx) {
    ctx->id = 6235;
    ctx->coefficient = 6.4;
    ctx->flags = 6;
}

int compute_AN2kGgn(int input) {
    int result = input * 4;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 6XyXsFJe_ctx_t;

void init_ctx(6XyXsFJe_ctx_t *ctx) {
    ctx->id = 8660;
    ctx->coefficient = 1.9;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} RLUZ8B0f_ctx_t;

void init_ctx(RLUZ8B0f_ctx_t *ctx) {
    ctx->id = 7104;
    ctx->coefficient = 0.4;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} JrQe1BuY_ctx_t;

void init_ctx(JrQe1BuY_ctx_t *ctx) {
    ctx->id = 2780;
    ctx->coefficient = 0.9;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} tGATnp2y_ctx_t;

void init_ctx(tGATnp2y_ctx_t *ctx) {
    ctx->id = 5243;
    ctx->coefficient = 0.9;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 2WfUByEM_ctx_t;

void init_ctx(2WfUByEM_ctx_t *ctx) {
    ctx->id = 4841;
    ctx->coefficient = 7.9;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} ChvPEV0E_ctx_t;

void init_ctx(ChvPEV0E_ctx_t *ctx) {
    ctx->id = 4908;
    ctx->coefficient = 5.4;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} W4sNLb4f_ctx_t;

void init_ctx(W4sNLb4f_ctx_t *ctx) {
    ctx->id = 8794;
    ctx->coefficient = 10.0;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} LA05r0br_ctx_t;

void init_ctx(LA05r0br_ctx_t *ctx) {
    ctx->id = 1610;
    ctx->coefficient = 9.7;
    ctx->flags = 168;
}

int compute_yYluO9j(int input) {
    int result = input * 47;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} AgGJ8LCj_ctx_t;

void init_ctx(AgGJ8LCj_ctx_t *ctx) {
    ctx->id = 3290;
    ctx->coefficient = 7.9;
    ctx->flags = 14;
}

int compute_udyUvVx(int input) {
    int result = input * 15;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} e4FFFNT1_ctx_t;

void init_ctx(e4FFFNT1_ctx_t *ctx) {
    ctx->id = 7533;
    ctx->coefficient = 9.6;
    ctx->flags = 153;
}

int compute_tVovJn9(int input) {
    int result = input * 66;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} gQteaBBD_ctx_t;

void init_ctx(gQteaBBD_ctx_t *ctx) {
    ctx->id = 5398;
    ctx->coefficient = 7.8;
    ctx->flags = 203;
}

int compute_6PKPGfe(int input) {
    int result = input * 32;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_NbQ66GU(int input) {
    int result = input * 19;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 7rEp53oY_ctx_t;

void init_ctx(7rEp53oY_ctx_t *ctx) {
    ctx->id = 8171;
    ctx->coefficient = 4.7;
    ctx->flags = 8;
}

int compute_JKzLTfT(int input) {
    int result = input * 36;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 946HtmQo_ctx_t;

void init_ctx(946HtmQo_ctx_t *ctx) {
    ctx->id = 8111;
    ctx->coefficient = 2.1;
    ctx->flags = 20;
}

int compute_Nea86M0(int input) {
    int result = input * 51;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} UdZC07SA_ctx_t;

void init_ctx(UdZC07SA_ctx_t *ctx) {
    ctx->id = 1645;
    ctx->coefficient = 1.1;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} yoniuhdL_ctx_t;

void init_ctx(yoniuhdL_ctx_t *ctx) {
    ctx->id = 4699;
    ctx->coefficient = 6.2;
    ctx->flags = 82;
}

int compute_6oXcD6c(int input) {
    int result = input * 25;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} pmuwGnCS_ctx_t;

void init_ctx(pmuwGnCS_ctx_t *ctx) {
    ctx->id = 5883;
    ctx->coefficient = 1.9;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} giyOJ49I_ctx_t;

void init_ctx(giyOJ49I_ctx_t *ctx) {
    ctx->id = 9491;
    ctx->coefficient = 9.7;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} pEv0HLr9_ctx_t;

void init_ctx(pEv0HLr9_ctx_t *ctx) {
    ctx->id = 2922;
    ctx->coefficient = 4.3;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} Hvj8Oy8s_ctx_t;

void init_ctx(Hvj8Oy8s_ctx_t *ctx) {
    ctx->id = 8245;
    ctx->coefficient = 2.1;
    ctx->flags = 79;
}

int compute_1hysiT5(int input) {
    int result = input * 19;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} MxffWm54_ctx_t;

void init_ctx(MxffWm54_ctx_t *ctx) {
    ctx->id = 3882;
    ctx->coefficient = 0.9;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} Rnn5hQCH_ctx_t;

void init_ctx(Rnn5hQCH_ctx_t *ctx) {
    ctx->id = 6598;
    ctx->coefficient = 3.9;
    ctx->flags = 169;
}

int compute_HCE29xZ(int input) {
    int result = input * 18;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} tHuUnSfz_ctx_t;

void init_ctx(tHuUnSfz_ctx_t *ctx) {
    ctx->id = 7907;
    ctx->coefficient = 0.1;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} lHXMBypy_ctx_t;

void init_ctx(lHXMBypy_ctx_t *ctx) {
    ctx->id = 2345;
    ctx->coefficient = 4.5;
    ctx->flags = 143;
}

int compute_7fOli4q(int input) {
    int result = input * 21;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} oB0pP1UT_ctx_t;

void init_ctx(oB0pP1UT_ctx_t *ctx) {
    ctx->id = 1512;
    ctx->coefficient = 3.0;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} yUOjVs5b_ctx_t;

void init_ctx(yUOjVs5b_ctx_t *ctx) {
    ctx->id = 3689;
    ctx->coefficient = 7.2;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} X4BOx2bX_ctx_t;

void init_ctx(X4BOx2bX_ctx_t *ctx) {
    ctx->id = 1271;
    ctx->coefficient = 9.5;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} enxOYMHw_ctx_t;

void init_ctx(enxOYMHw_ctx_t *ctx) {
    ctx->id = 8572;
    ctx->coefficient = 5.0;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} K2z1c5n9_ctx_t;

void init_ctx(K2z1c5n9_ctx_t *ctx) {
    ctx->id = 6104;
    ctx->coefficient = 6.4;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 3NtDUJkW_ctx_t;

void init_ctx(3NtDUJkW_ctx_t *ctx) {
    ctx->id = 4666;
    ctx->coefficient = 8.6;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} AncNg2v8_ctx_t;

void init_ctx(AncNg2v8_ctx_t *ctx) {
    ctx->id = 9619;
    ctx->coefficient = 6.6;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 1vWmIswo_ctx_t;

void init_ctx(1vWmIswo_ctx_t *ctx) {
    ctx->id = 5064;
    ctx->coefficient = 9.0;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} A7RJwooS_ctx_t;

void init_ctx(A7RJwooS_ctx_t *ctx) {
    ctx->id = 2393;
    ctx->coefficient = 4.3;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} SFtgKhvL_ctx_t;

void init_ctx(SFtgKhvL_ctx_t *ctx) {
    ctx->id = 6663;
    ctx->coefficient = 0.1;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} os9UAhH1_ctx_t;

void init_ctx(os9UAhH1_ctx_t *ctx) {
    ctx->id = 7772;
    ctx->coefficient = 1.2;
    ctx->flags = 127;
}

int compute_pESTNLY(int input) {
    int result = input * 54;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} GrIE7vpW_ctx_t;

void init_ctx(GrIE7vpW_ctx_t *ctx) {
    ctx->id = 7354;
    ctx->coefficient = 9.7;
    ctx->flags = 26;
}

int compute_lAKDofw(int input) {
    int result = input * 2;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} Ovbw02ms_ctx_t;

void init_ctx(Ovbw02ms_ctx_t *ctx) {
    ctx->id = 7698;
    ctx->coefficient = 4.5;
    ctx->flags = 172;
}

int compute_KYpJSdA(int input) {
    int result = input * 17;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} qXVbKha0_ctx_t;

void init_ctx(qXVbKha0_ctx_t *ctx) {
    ctx->id = 8610;
    ctx->coefficient = 3.5;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} PvBxPWp8_ctx_t;

void init_ctx(PvBxPWp8_ctx_t *ctx) {
    ctx->id = 5762;
    ctx->coefficient = 1.5;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} XYdm8ML4_ctx_t;

void init_ctx(XYdm8ML4_ctx_t *ctx) {
    ctx->id = 5402;
    ctx->coefficient = 8.9;
    ctx->flags = 30;
}

int compute_MLPBf7Y(int input) {
    int result = input * 56;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_zk6rBCF(int input) {
    int result = input * 51;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_tUELflL(int input) {
    int result = input * 41;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_0m8nmPu(int input) {
    int result = input * 10;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} QtQG1B2i_ctx_t;

void init_ctx(QtQG1B2i_ctx_t *ctx) {
    ctx->id = 4517;
    ctx->coefficient = 5.3;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 5d9ehU5B_ctx_t;

void init_ctx(5d9ehU5B_ctx_t *ctx) {
    ctx->id = 3675;
    ctx->coefficient = 6.9;
    ctx->flags = 145;
}

int compute_W7JwlRk(int input) {
    int result = input * 69;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} BMj7URD4_ctx_t;

void init_ctx(BMj7URD4_ctx_t *ctx) {
    ctx->id = 2116;
    ctx->coefficient = 9.0;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 3Y10a25G_ctx_t;

void init_ctx(3Y10a25G_ctx_t *ctx) {
    ctx->id = 1734;
    ctx->coefficient = 7.7;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} o8ENG7EG_ctx_t;

void init_ctx(o8ENG7EG_ctx_t *ctx) {
    ctx->id = 5827;
    ctx->coefficient = 3.4;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} fHpEgbI4_ctx_t;

void init_ctx(fHpEgbI4_ctx_t *ctx) {
    ctx->id = 1535;
    ctx->coefficient = 3.7;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} nIxvh9rG_ctx_t;

void init_ctx(nIxvh9rG_ctx_t *ctx) {
    ctx->id = 4743;
    ctx->coefficient = 10.0;
    ctx->flags = 104;
}

int compute_zUSABju(int input) {
    int result = input * 32;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} q3fcqrym_ctx_t;

void init_ctx(q3fcqrym_ctx_t *ctx) {
    ctx->id = 8650;
    ctx->coefficient = 3.3;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} R7g2pTqZ_ctx_t;

void init_ctx(R7g2pTqZ_ctx_t *ctx) {
    ctx->id = 7743;
    ctx->coefficient = 9.3;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} rlrbUmdw_ctx_t;

void init_ctx(rlrbUmdw_ctx_t *ctx) {
    ctx->id = 9305;
    ctx->coefficient = 3.9;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} HorNkUj3_ctx_t;

void init_ctx(HorNkUj3_ctx_t *ctx) {
    ctx->id = 2243;
    ctx->coefficient = 4.7;
    ctx->flags = 62;
}

int compute_ERzJEgY(int input) {
    int result = input * 25;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 1NuHZiei_ctx_t;

void init_ctx(1NuHZiei_ctx_t *ctx) {
    ctx->id = 5543;
    ctx->coefficient = 6.8;
    ctx->flags = 180;
}

int compute_taMMXaf(int input) {
    int result = input * 44;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 7JDsFV9K_ctx_t;

void init_ctx(7JDsFV9K_ctx_t *ctx) {
    ctx->id = 4489;
    ctx->coefficient = 2.9;
    ctx->flags = 93;
}

int compute_yxip866(int input) {
    int result = input * 66;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_RujeCOO(int input) {
    int result = input * 54;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} N2MoTqre_ctx_t;

void init_ctx(N2MoTqre_ctx_t *ctx) {
    ctx->id = 2500;
    ctx->coefficient = 2.4;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} BaIrXCPG_ctx_t;

void init_ctx(BaIrXCPG_ctx_t *ctx) {
    ctx->id = 4839;
    ctx->coefficient = 1.8;
    ctx->flags = 160;
}

int compute_b0wrgHM(int input) {
    int result = input * 45;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} ZOr3mHLT_ctx_t;

void init_ctx(ZOr3mHLT_ctx_t *ctx) {
    ctx->id = 9736;
    ctx->coefficient = 5.0;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} o9YLdITy_ctx_t;

void init_ctx(o9YLdITy_ctx_t *ctx) {
    ctx->id = 3328;
    ctx->coefficient = 4.7;
    ctx->flags = 139;
}

int compute_Y2Cfrw4(int input) {
    int result = input * 36;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} bNW1hazQ_ctx_t;

void init_ctx(bNW1hazQ_ctx_t *ctx) {
    ctx->id = 1718;
    ctx->coefficient = 9.9;
    ctx->flags = 237;
}

int compute_NTkhKsy(int input) {
    int result = input * 21;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} UeEMGlRB_ctx_t;

void init_ctx(UeEMGlRB_ctx_t *ctx) {
    ctx->id = 4854;
    ctx->coefficient = 8.5;
    ctx->flags = 127;
}

int compute_B5DKiJV(int input) {
    int result = input * 7;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_XLjtsw7(int input) {
    int result = input * 64;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} GvgIjinN_ctx_t;

void init_ctx(GvgIjinN_ctx_t *ctx) {
    ctx->id = 8907;
    ctx->coefficient = 5.0;
    ctx->flags = 202;
}

int compute_GRgq89N(int input) {
    int result = input * 43;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_pLiEWBf(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_wZeLgm3(int input) {
    int result = input * 63;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 92BN9wiP_ctx_t;

void init_ctx(92BN9wiP_ctx_t *ctx) {
    ctx->id = 1870;
    ctx->coefficient = 5.5;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} xh13NFcn_ctx_t;

void init_ctx(xh13NFcn_ctx_t *ctx) {
    ctx->id = 4607;
    ctx->coefficient = 5.1;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} vjxPQABt_ctx_t;

void init_ctx(vjxPQABt_ctx_t *ctx) {
    ctx->id = 2706;
    ctx->coefficient = 4.7;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} q6xAFG9P_ctx_t;

void init_ctx(q6xAFG9P_ctx_t *ctx) {
    ctx->id = 7791;
    ctx->coefficient = 2.3;
    ctx->flags = 252;
}

int compute_CzZjBFY(int input) {
    int result = input * 2;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} IJi6NhmY_ctx_t;

void init_ctx(IJi6NhmY_ctx_t *ctx) {
    ctx->id = 3071;
    ctx->coefficient = 9.5;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} RPm3mdnc_ctx_t;

void init_ctx(RPm3mdnc_ctx_t *ctx) {
    ctx->id = 3576;
    ctx->coefficient = 7.8;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 7sLGSuM6_ctx_t;

void init_ctx(7sLGSuM6_ctx_t *ctx) {
    ctx->id = 3639;
    ctx->coefficient = 2.0;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} KO91aKqp_ctx_t;

void init_ctx(KO91aKqp_ctx_t *ctx) {
    ctx->id = 7040;
    ctx->coefficient = 6.5;
    ctx->flags = 128;
}

int compute_zoP491J(int input) {
    int result = input * 46;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_4Hyjn6s(int input) {
    int result = input * 18;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} E3SMcSzh_ctx_t;

void init_ctx(E3SMcSzh_ctx_t *ctx) {
    ctx->id = 9552;
    ctx->coefficient = 7.7;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} N1iMnGrr_ctx_t;

void init_ctx(N1iMnGrr_ctx_t *ctx) {
    ctx->id = 8110;
    ctx->coefficient = 7.4;
    ctx->flags = 211;
}

int compute_iglRcQa(int input) {
    int result = input * 7;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} qhpucaLC_ctx_t;

void init_ctx(qhpucaLC_ctx_t *ctx) {
    ctx->id = 1059;
    ctx->coefficient = 4.8;
    ctx->flags = 83;
}

int compute_rNbxLQX(int input) {
    int result = input * 27;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 47eR7UoB_ctx_t;

void init_ctx(47eR7UoB_ctx_t *ctx) {
    ctx->id = 8947;
    ctx->coefficient = 1.2;
    ctx->flags = 26;
}

int compute_NKoasf3(int input) {
    int result = input * 66;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} Tz3DIcIc_ctx_t;

void init_ctx(Tz3DIcIc_ctx_t *ctx) {
    ctx->id = 5428;
    ctx->coefficient = 2.9;
    ctx->flags = 249;
}

int compute_9O0p936(int input) {
    int result = input * 6;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_nFwaVpA(int input) {
    int result = input * 39;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} zDZEJEkx_ctx_t;

void init_ctx(zDZEJEkx_ctx_t *ctx) {
    ctx->id = 6269;
    ctx->coefficient = 10.0;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} GmPoRI7D_ctx_t;

void init_ctx(GmPoRI7D_ctx_t *ctx) {
    ctx->id = 5320;
    ctx->coefficient = 9.1;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} Ac1elbWr_ctx_t;

void init_ctx(Ac1elbWr_ctx_t *ctx) {
    ctx->id = 8677;
    ctx->coefficient = 7.6;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} eV6iqi7h_ctx_t;

void init_ctx(eV6iqi7h_ctx_t *ctx) {
    ctx->id = 1134;
    ctx->coefficient = 1.0;
    ctx->flags = 99;
}

int compute_chmkMyO(int input) {
    int result = input * 56;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} wyhVW2sY_ctx_t;

void init_ctx(wyhVW2sY_ctx_t *ctx) {
    ctx->id = 6994;
    ctx->coefficient = 8.5;
    ctx->flags = 170;
}

int compute_yrwyFa1(int input) {
    int result = input * 40;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 2e3lnzTV_ctx_t;

void init_ctx(2e3lnzTV_ctx_t *ctx) {
    ctx->id = 4002;
    ctx->coefficient = 1.6;
    ctx->flags = 14;
}

int compute_UPwmAL0(int input) {
    int result = input * 70;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} Nx4rAL5v_ctx_t;

void init_ctx(Nx4rAL5v_ctx_t *ctx) {
    ctx->id = 7528;
    ctx->coefficient = 1.6;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} ZMuFKtmp_ctx_t;

void init_ctx(ZMuFKtmp_ctx_t *ctx) {
    ctx->id = 2940;
    ctx->coefficient = 7.8;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} nzFUUFx6_ctx_t;

void init_ctx(nzFUUFx6_ctx_t *ctx) {
    ctx->id = 2208;
    ctx->coefficient = 0.7;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} g94CDSKx_ctx_t;

void init_ctx(g94CDSKx_ctx_t *ctx) {
    ctx->id = 5441;
    ctx->coefficient = 7.5;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} HycCIFI8_ctx_t;

void init_ctx(HycCIFI8_ctx_t *ctx) {
    ctx->id = 6854;
    ctx->coefficient = 6.1;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} YYItZURV_ctx_t;

void init_ctx(YYItZURV_ctx_t *ctx) {
    ctx->id = 8454;
    ctx->coefficient = 4.7;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} SsAhdF9W_ctx_t;

void init_ctx(SsAhdF9W_ctx_t *ctx) {
    ctx->id = 1079;
    ctx->coefficient = 6.5;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} tQqvgNPy_ctx_t;

void init_ctx(tQqvgNPy_ctx_t *ctx) {
    ctx->id = 8685;
    ctx->coefficient = 5.9;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} HYV5DbpT_ctx_t;

void init_ctx(HYV5DbpT_ctx_t *ctx) {
    ctx->id = 4407;
    ctx->coefficient = 5.2;
    ctx->flags = 54;
}

int compute_ZbnwRT4(int input) {
    int result = input * 60;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} NTnRiDkR_ctx_t;

void init_ctx(NTnRiDkR_ctx_t *ctx) {
    ctx->id = 1722;
    ctx->coefficient = 3.1;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Bhpr4UhN_ctx_t;

void init_ctx(Bhpr4UhN_ctx_t *ctx) {
    ctx->id = 5209;
    ctx->coefficient = 7.6;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} jnsOdvXr_ctx_t;

void init_ctx(jnsOdvXr_ctx_t *ctx) {
    ctx->id = 7261;
    ctx->coefficient = 2.6;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 2uua48ZZ_ctx_t;

void init_ctx(2uua48ZZ_ctx_t *ctx) {
    ctx->id = 6526;
    ctx->coefficient = 6.6;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} PqugOpBS_ctx_t;

void init_ctx(PqugOpBS_ctx_t *ctx) {
    ctx->id = 3822;
    ctx->coefficient = 7.4;
    ctx->flags = 98;
}

int compute_USZJTDl(int input) {
    int result = input * 50;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_FmnPycy(int input) {
    int result = input * 8;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

int compute_iWwVllB(int input) {
    int result = input * 32;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 3PtSOMaL_ctx_t;

void init_ctx(3PtSOMaL_ctx_t *ctx) {
    ctx->id = 5108;
    ctx->coefficient = 9.4;
    ctx->flags = 19;
}

int compute_FY6NnxU(int input) {
    int result = input * 17;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} AlkrBfhH_ctx_t;

void init_ctx(AlkrBfhH_ctx_t *ctx) {
    ctx->id = 4993;
    ctx->coefficient = 0.8;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} DO24EwPM_ctx_t;

void init_ctx(DO24EwPM_ctx_t *ctx) {
    ctx->id = 6544;
    ctx->coefficient = 6.5;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} q4X6Dlvc_ctx_t;

void init_ctx(q4X6Dlvc_ctx_t *ctx) {
    ctx->id = 1665;
    ctx->coefficient = 1.1;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} zkGWYg5i_ctx_t;

void init_ctx(zkGWYg5i_ctx_t *ctx) {
    ctx->id = 6757;
    ctx->coefficient = 5.8;
    ctx->flags = 212;
}

int compute_W4eN9N9(int input) {
    int result = input * 40;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} W6bH0uxA_ctx_t;

void init_ctx(W6bH0uxA_ctx_t *ctx) {
    ctx->id = 6350;
    ctx->coefficient = 7.3;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 3nKplsFA_ctx_t;

void init_ctx(3nKplsFA_ctx_t *ctx) {
    ctx->id = 8736;
    ctx->coefficient = 9.8;
    ctx->flags = 125;
}

int compute_5eT7rpz(int input) {
    int result = input * 38;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 5DioECdi_ctx_t;

void init_ctx(5DioECdi_ctx_t *ctx) {
    ctx->id = 2862;
    ctx->coefficient = 6.6;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 6tiZyimp_ctx_t;

void init_ctx(6tiZyimp_ctx_t *ctx) {
    ctx->id = 6930;
    ctx->coefficient = 4.7;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} tJL3LM10_ctx_t;

void init_ctx(tJL3LM10_ctx_t *ctx) {
    ctx->id = 6908;
    ctx->coefficient = 5.3;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} a4af1Ymz_ctx_t;

void init_ctx(a4af1Ymz_ctx_t *ctx) {
    ctx->id = 6171;
    ctx->coefficient = 5.9;
    ctx->flags = 205;
}

int compute_tXvsKoY(int input) {
    int result = input * 19;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_aCU2MjL(int input) {
    int result = input * 30;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

int compute_Chg82FR(int input) {
    int result = input * 36;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} SJMctM1P_ctx_t;

void init_ctx(SJMctM1P_ctx_t *ctx) {
    ctx->id = 3263;
    ctx->coefficient = 6.4;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} JMNo3OA9_ctx_t;

void init_ctx(JMNo3OA9_ctx_t *ctx) {
    ctx->id = 3708;
    ctx->coefficient = 3.0;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} o6GFEBHf_ctx_t;

void init_ctx(o6GFEBHf_ctx_t *ctx) {
    ctx->id = 1320;
    ctx->coefficient = 7.1;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} EVthNb2s_ctx_t;

void init_ctx(EVthNb2s_ctx_t *ctx) {
    ctx->id = 9098;
    ctx->coefficient = 0.6;
    ctx->flags = 60;
}

int compute_n6aAIik(int input) {
    int result = input * 19;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} LxZ07GAN_ctx_t;

void init_ctx(LxZ07GAN_ctx_t *ctx) {
    ctx->id = 2295;
    ctx->coefficient = 6.9;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} CjZQ5Hv5_ctx_t;

void init_ctx(CjZQ5Hv5_ctx_t *ctx) {
    ctx->id = 5113;
    ctx->coefficient = 7.5;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} ft2LekT7_ctx_t;

void init_ctx(ft2LekT7_ctx_t *ctx) {
    ctx->id = 3941;
    ctx->coefficient = 3.2;
    ctx->flags = 37;
}

int compute_DYpmGUE(int input) {
    int result = input * 13;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 9YU4P6Vh_ctx_t;

void init_ctx(9YU4P6Vh_ctx_t *ctx) {
    ctx->id = 7941;
    ctx->coefficient = 4.5;
    ctx->flags = 70;
}

int compute_3w4JdY3(int input) {
    int result = input * 59;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_20UPI7D(int input) {
    int result = input * 3;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 4Qpw00uA_ctx_t;

void init_ctx(4Qpw00uA_ctx_t *ctx) {
    ctx->id = 2365;
    ctx->coefficient = 9.0;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} IgNVr7YM_ctx_t;

void init_ctx(IgNVr7YM_ctx_t *ctx) {
    ctx->id = 6642;
    ctx->coefficient = 2.2;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} B3ExDbJy_ctx_t;

void init_ctx(B3ExDbJy_ctx_t *ctx) {
    ctx->id = 3210;
    ctx->coefficient = 9.5;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} jR3HhW15_ctx_t;

void init_ctx(jR3HhW15_ctx_t *ctx) {
    ctx->id = 6621;
    ctx->coefficient = 4.7;
    ctx->flags = 156;
}

int compute_5WjMl1G(int input) {
    int result = input * 33;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_KD049Cm(int input) {
    int result = input * 41;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 1ecwVikB_ctx_t;

void init_ctx(1ecwVikB_ctx_t *ctx) {
    ctx->id = 5628;
    ctx->coefficient = 9.1;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} wzd12ZFv_ctx_t;

void init_ctx(wzd12ZFv_ctx_t *ctx) {
    ctx->id = 4535;
    ctx->coefficient = 5.9;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} xvC1lXG1_ctx_t;

void init_ctx(xvC1lXG1_ctx_t *ctx) {
    ctx->id = 6252;
    ctx->coefficient = 8.1;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} liZS8AMF_ctx_t;

void init_ctx(liZS8AMF_ctx_t *ctx) {
    ctx->id = 2356;
    ctx->coefficient = 3.0;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} lrduvMdt_ctx_t;

void init_ctx(lrduvMdt_ctx_t *ctx) {
    ctx->id = 4134;
    ctx->coefficient = 0.3;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} tHhc7D10_ctx_t;

void init_ctx(tHhc7D10_ctx_t *ctx) {
    ctx->id = 8418;
    ctx->coefficient = 5.9;
    ctx->flags = 69;
}

int compute_UHADk7Z(int input) {
    int result = input * 2;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} VFvr2Z9h_ctx_t;

void init_ctx(VFvr2Z9h_ctx_t *ctx) {
    ctx->id = 6759;
    ctx->coefficient = 6.9;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} c0mRwESv_ctx_t;

void init_ctx(c0mRwESv_ctx_t *ctx) {
    ctx->id = 4493;
    ctx->coefficient = 1.1;
    ctx->flags = 15;
}

int compute_DqWW64p(int input) {
    int result = input * 30;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_FSQo4aM(int input) {
    int result = input * 23;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 6QwrmuSg_ctx_t;

void init_ctx(6QwrmuSg_ctx_t *ctx) {
    ctx->id = 2237;
    ctx->coefficient = 7.6;
    ctx->flags = 67;
}

int compute_shQKMkl(int input) {
    int result = input * 49;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} svqnU1d2_ctx_t;

void init_ctx(svqnU1d2_ctx_t *ctx) {
    ctx->id = 8514;
    ctx->coefficient = 0.5;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} hOtTOct7_ctx_t;

void init_ctx(hOtTOct7_ctx_t *ctx) {
    ctx->id = 1225;
    ctx->coefficient = 8.5;
    ctx->flags = 185;
}

int compute_nMWOi9q(int input) {
    int result = input * 14;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_ENYY7Mv(int input) {
    int result = input * 4;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} tG5WOqbc_ctx_t;

void init_ctx(tG5WOqbc_ctx_t *ctx) {
    ctx->id = 7869;
    ctx->coefficient = 7.1;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} PtA8cfRz_ctx_t;

void init_ctx(PtA8cfRz_ctx_t *ctx) {
    ctx->id = 5936;
    ctx->coefficient = 1.8;
    ctx->flags = 103;
}

int compute_aqBgfNX(int input) {
    int result = input * 20;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} LPu5T91o_ctx_t;

void init_ctx(LPu5T91o_ctx_t *ctx) {
    ctx->id = 9679;
    ctx->coefficient = 2.2;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} y8sZgOQy_ctx_t;

void init_ctx(y8sZgOQy_ctx_t *ctx) {
    ctx->id = 8888;
    ctx->coefficient = 2.9;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} Zu72bYYO_ctx_t;

void init_ctx(Zu72bYYO_ctx_t *ctx) {
    ctx->id = 6113;
    ctx->coefficient = 7.4;
    ctx->flags = 174;
}

int compute_M23sMGZ(int input) {
    int result = input * 51;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_gMK7BPI(int input) {
    int result = input * 14;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} GTIxcWkG_ctx_t;

void init_ctx(GTIxcWkG_ctx_t *ctx) {
    ctx->id = 8187;
    ctx->coefficient = 6.7;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} r0Ol9iwC_ctx_t;

void init_ctx(r0Ol9iwC_ctx_t *ctx) {
    ctx->id = 2672;
    ctx->coefficient = 3.5;
    ctx->flags = 35;
}

int compute_YRBqUya(int input) {
    int result = input * 19;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} x3e6MJNd_ctx_t;

void init_ctx(x3e6MJNd_ctx_t *ctx) {
    ctx->id = 7514;
    ctx->coefficient = 9.1;
    ctx->flags = 77;
}

int compute_JnGxVV9(int input) {
    int result = input * 63;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} mFZ9iz5Y_ctx_t;

void init_ctx(mFZ9iz5Y_ctx_t *ctx) {
    ctx->id = 8204;
    ctx->coefficient = 1.3;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} aOmuFlYV_ctx_t;

void init_ctx(aOmuFlYV_ctx_t *ctx) {
    ctx->id = 8061;
    ctx->coefficient = 7.4;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} KA53iD8v_ctx_t;

void init_ctx(KA53iD8v_ctx_t *ctx) {
    ctx->id = 3478;
    ctx->coefficient = 2.9;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} enhecLDv_ctx_t;

void init_ctx(enhecLDv_ctx_t *ctx) {
    ctx->id = 9417;
    ctx->coefficient = 6.6;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} o8ceDldU_ctx_t;

void init_ctx(o8ceDldU_ctx_t *ctx) {
    ctx->id = 3092;
    ctx->coefficient = 4.9;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} ffmvX5cD_ctx_t;

void init_ctx(ffmvX5cD_ctx_t *ctx) {
    ctx->id = 1532;
    ctx->coefficient = 0.7;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} xjUdGXMm_ctx_t;

void init_ctx(xjUdGXMm_ctx_t *ctx) {
    ctx->id = 4769;
    ctx->coefficient = 3.2;
    ctx->flags = 220;
}

int compute_yLjBlDu(int input) {
    int result = input * 34;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 1QGYXmMZ_ctx_t;

void init_ctx(1QGYXmMZ_ctx_t *ctx) {
    ctx->id = 7678;
    ctx->coefficient = 5.3;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} ylq96uff_ctx_t;

void init_ctx(ylq96uff_ctx_t *ctx) {
    ctx->id = 4513;
    ctx->coefficient = 6.7;
    ctx->flags = 60;
}

int compute_0ghahJY(int input) {
    int result = input * 38;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 1bpvMsmq_ctx_t;

void init_ctx(1bpvMsmq_ctx_t *ctx) {
    ctx->id = 7369;
    ctx->coefficient = 9.0;
    ctx->flags = 212;
}

int compute_Ly2p7lr(int input) {
    int result = input * 22;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_kqGGp6Q(int input) {
    int result = input * 42;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} QYUsNJbZ_ctx_t;

void init_ctx(QYUsNJbZ_ctx_t *ctx) {
    ctx->id = 8786;
    ctx->coefficient = 5.3;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} XVYdSgpa_ctx_t;

void init_ctx(XVYdSgpa_ctx_t *ctx) {
    ctx->id = 7311;
    ctx->coefficient = 9.5;
    ctx->flags = 206;
}

int compute_HWsykbr(int input) {
    int result = input * 53;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} k9SFoXag_ctx_t;

void init_ctx(k9SFoXag_ctx_t *ctx) {
    ctx->id = 1874;
    ctx->coefficient = 4.8;
    ctx->flags = 41;
}

int compute_J0cTtx8(int input) {
    int result = input * 2;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} A8Mulicl_ctx_t;

void init_ctx(A8Mulicl_ctx_t *ctx) {
    ctx->id = 8517;
    ctx->coefficient = 7.0;
    ctx->flags = 41;
}

int compute_ByQeIcB(int input) {
    int result = input * 13;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_zpdZWfx(int input) {
    int result = input * 19;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_bR5UfGY(int input) {
    int result = input * 22;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} uFobeSq3_ctx_t;

void init_ctx(uFobeSq3_ctx_t *ctx) {
    ctx->id = 9210;
    ctx->coefficient = 1.2;
    ctx->flags = 218;
}

int compute_OnmEu8k(int input) {
    int result = input * 57;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} STdjkENG_ctx_t;

void init_ctx(STdjkENG_ctx_t *ctx) {
    ctx->id = 5956;
    ctx->coefficient = 5.7;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} I4kWWv6Q_ctx_t;

void init_ctx(I4kWWv6Q_ctx_t *ctx) {
    ctx->id = 1021;
    ctx->coefficient = 0.6;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} Zbocr6EJ_ctx_t;

void init_ctx(Zbocr6EJ_ctx_t *ctx) {
    ctx->id = 5716;
    ctx->coefficient = 2.4;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} sf4l1Lcf_ctx_t;

void init_ctx(sf4l1Lcf_ctx_t *ctx) {
    ctx->id = 2638;
    ctx->coefficient = 9.2;
    ctx->flags = 132;
}

int compute_HBy6sru(int input) {
    int result = input * 63;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_DTWf3iP(int input) {
    int result = input * 25;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_LdX2v7o(int input) {
    int result = input * 31;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} IftFzafH_ctx_t;

void init_ctx(IftFzafH_ctx_t *ctx) {
    ctx->id = 7204;
    ctx->coefficient = 0.3;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} gRatZetn_ctx_t;

void init_ctx(gRatZetn_ctx_t *ctx) {
    ctx->id = 5784;
    ctx->coefficient = 2.5;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} WPj5J6jR_ctx_t;

void init_ctx(WPj5J6jR_ctx_t *ctx) {
    ctx->id = 5053;
    ctx->coefficient = 2.8;
    ctx->flags = 187;
}

int compute_o6HY55K(int input) {
    int result = input * 51;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} m8dAvZM5_ctx_t;

void init_ctx(m8dAvZM5_ctx_t *ctx) {
    ctx->id = 9859;
    ctx->coefficient = 3.7;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} PTvFUXrB_ctx_t;

void init_ctx(PTvFUXrB_ctx_t *ctx) {
    ctx->id = 5489;
    ctx->coefficient = 1.5;
    ctx->flags = 74;
}

int compute_6cMEuv2(int input) {
    int result = input * 7;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} qkR2Je6W_ctx_t;

void init_ctx(qkR2Je6W_ctx_t *ctx) {
    ctx->id = 8857;
    ctx->coefficient = 0.8;
    ctx->flags = 138;
}

int compute_2Qjr6eN(int input) {
    int result = input * 69;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 7e6fHKt0_ctx_t;

void init_ctx(7e6fHKt0_ctx_t *ctx) {
    ctx->id = 2571;
    ctx->coefficient = 8.2;
    ctx->flags = 192;
}

int compute_zZu17X6(int input) {
    int result = input * 41;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_av0rC9I(int input) {
    int result = input * 35;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} yT5iN2eP_ctx_t;

void init_ctx(yT5iN2eP_ctx_t *ctx) {
    ctx->id = 1836;
    ctx->coefficient = 7.8;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} j0nG1lhw_ctx_t;

void init_ctx(j0nG1lhw_ctx_t *ctx) {
    ctx->id = 5184;
    ctx->coefficient = 9.6;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} Vuz4kVa7_ctx_t;

void init_ctx(Vuz4kVa7_ctx_t *ctx) {
    ctx->id = 7678;
    ctx->coefficient = 6.8;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 9ChhkqFy_ctx_t;

void init_ctx(9ChhkqFy_ctx_t *ctx) {
    ctx->id = 2082;
    ctx->coefficient = 6.7;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} pP4gR1hj_ctx_t;

void init_ctx(pP4gR1hj_ctx_t *ctx) {
    ctx->id = 8560;
    ctx->coefficient = 0.5;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} rv7HsrFd_ctx_t;

void init_ctx(rv7HsrFd_ctx_t *ctx) {
    ctx->id = 6248;
    ctx->coefficient = 6.0;
    ctx->flags = 166;
}

int compute_em8zk0q(int input) {
    int result = input * 34;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} gA1Ln3IK_ctx_t;

void init_ctx(gA1Ln3IK_ctx_t *ctx) {
    ctx->id = 7661;
    ctx->coefficient = 5.3;
    ctx->flags = 60;
}

int compute_X5reBHu(int input) {
    int result = input * 15;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} FtFEtsWe_ctx_t;

void init_ctx(FtFEtsWe_ctx_t *ctx) {
    ctx->id = 9934;
    ctx->coefficient = 5.2;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} ISFORKM1_ctx_t;

void init_ctx(ISFORKM1_ctx_t *ctx) {
    ctx->id = 2050;
    ctx->coefficient = 1.9;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} X3O8GBRr_ctx_t;

void init_ctx(X3O8GBRr_ctx_t *ctx) {
    ctx->id = 3810;
    ctx->coefficient = 4.6;
    ctx->flags = 88;
}

int compute_QxIMIXZ(int input) {
    int result = input * 18;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} dpowFXGt_ctx_t;

void init_ctx(dpowFXGt_ctx_t *ctx) {
    ctx->id = 8183;
    ctx->coefficient = 3.2;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} FOpQsZkR_ctx_t;

void init_ctx(FOpQsZkR_ctx_t *ctx) {
    ctx->id = 9401;
    ctx->coefficient = 3.0;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} gw1kyKUF_ctx_t;

void init_ctx(gw1kyKUF_ctx_t *ctx) {
    ctx->id = 6416;
    ctx->coefficient = 0.4;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} gccVzKe0_ctx_t;

void init_ctx(gccVzKe0_ctx_t *ctx) {
    ctx->id = 8340;
    ctx->coefficient = 0.9;
    ctx->flags = 98;
}

int compute_zMw0lbB(int input) {
    int result = input * 8;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} gRt9y8tB_ctx_t;

void init_ctx(gRt9y8tB_ctx_t *ctx) {
    ctx->id = 5436;
    ctx->coefficient = 8.3;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 9LN7Fi35_ctx_t;

void init_ctx(9LN7Fi35_ctx_t *ctx) {
    ctx->id = 5402;
    ctx->coefficient = 2.5;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} ijSq9Zvf_ctx_t;

void init_ctx(ijSq9Zvf_ctx_t *ctx) {
    ctx->id = 2217;
    ctx->coefficient = 4.8;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 3tUggwm3_ctx_t;

void init_ctx(3tUggwm3_ctx_t *ctx) {
    ctx->id = 5153;
    ctx->coefficient = 4.8;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} fascQmPP_ctx_t;

void init_ctx(fascQmPP_ctx_t *ctx) {
    ctx->id = 5386;
    ctx->coefficient = 9.0;
    ctx->flags = 28;
}

int compute_etHwU0P(int input) {
    int result = input * 62;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} OxJQ2Kjl_ctx_t;

void init_ctx(OxJQ2Kjl_ctx_t *ctx) {
    ctx->id = 5359;
    ctx->coefficient = 7.3;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} cGRS1SxP_ctx_t;

void init_ctx(cGRS1SxP_ctx_t *ctx) {
    ctx->id = 4062;
    ctx->coefficient = 7.3;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} G9eoWxqo_ctx_t;

void init_ctx(G9eoWxqo_ctx_t *ctx) {
    ctx->id = 6370;
    ctx->coefficient = 3.7;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} K31lrJuX_ctx_t;

void init_ctx(K31lrJuX_ctx_t *ctx) {
    ctx->id = 4225;
    ctx->coefficient = 0.6;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} vgsAn0yl_ctx_t;

void init_ctx(vgsAn0yl_ctx_t *ctx) {
    ctx->id = 6414;
    ctx->coefficient = 4.6;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} gq3fcdTO_ctx_t;

void init_ctx(gq3fcdTO_ctx_t *ctx) {
    ctx->id = 5774;
    ctx->coefficient = 5.5;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} CFbNHQ0l_ctx_t;

void init_ctx(CFbNHQ0l_ctx_t *ctx) {
    ctx->id = 7997;
    ctx->coefficient = 9.9;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} WN5NsxHm_ctx_t;

void init_ctx(WN5NsxHm_ctx_t *ctx) {
    ctx->id = 3734;
    ctx->coefficient = 9.7;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} ofLGUtob_ctx_t;

void init_ctx(ofLGUtob_ctx_t *ctx) {
    ctx->id = 9405;
    ctx->coefficient = 7.2;
    ctx->flags = 76;
}

int compute_698lZem(int input) {
    int result = input * 20;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} rVKx9hhn_ctx_t;

void init_ctx(rVKx9hhn_ctx_t *ctx) {
    ctx->id = 8366;
    ctx->coefficient = 0.1;
    ctx->flags = 204;
}

int compute_OGHE6MC(int input) {
    int result = input * 24;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_ZJXleC9(int input) {
    int result = input * 48;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_VgVPXGS(int input) {
    int result = input * 42;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} r9iQKcmO_ctx_t;

void init_ctx(r9iQKcmO_ctx_t *ctx) {
    ctx->id = 9559;
    ctx->coefficient = 9.0;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} O3vcqnGU_ctx_t;

void init_ctx(O3vcqnGU_ctx_t *ctx) {
    ctx->id = 3106;
    ctx->coefficient = 10.0;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 3QrGIwPe_ctx_t;

void init_ctx(3QrGIwPe_ctx_t *ctx) {
    ctx->id = 3207;
    ctx->coefficient = 8.0;
    ctx->flags = 210;
}

int compute_6BEJKLv(int input) {
    int result = input * 49;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_fjwxiKF(int input) {
    int result = input * 45;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} EqJH9Idv_ctx_t;

void init_ctx(EqJH9Idv_ctx_t *ctx) {
    ctx->id = 6067;
    ctx->coefficient = 4.2;
    ctx->flags = 23;
}

int compute_nj4i9Zw(int input) {
    int result = input * 51;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 3QGBCLwQ_ctx_t;

void init_ctx(3QGBCLwQ_ctx_t *ctx) {
    ctx->id = 5237;
    ctx->coefficient = 6.9;
    ctx->flags = 12;
}

int compute_fB9x5UU(int input) {
    int result = input * 43;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} TbgcDg9C_ctx_t;

void init_ctx(TbgcDg9C_ctx_t *ctx) {
    ctx->id = 4605;
    ctx->coefficient = 3.3;
    ctx->flags = 236;
}

int compute_LvRpgkh(int input) {
    int result = input * 21;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} kMc71ovj_ctx_t;

void init_ctx(kMc71ovj_ctx_t *ctx) {
    ctx->id = 9140;
    ctx->coefficient = 0.3;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} p3jyPapn_ctx_t;

void init_ctx(p3jyPapn_ctx_t *ctx) {
    ctx->id = 9835;
    ctx->coefficient = 2.6;
    ctx->flags = 232;
}

int compute_X12tYDH(int input) {
    int result = input * 41;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} WivPNqwf_ctx_t;

void init_ctx(WivPNqwf_ctx_t *ctx) {
    ctx->id = 9663;
    ctx->coefficient = 2.9;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 6BDP1gCL_ctx_t;

void init_ctx(6BDP1gCL_ctx_t *ctx) {
    ctx->id = 7665;
    ctx->coefficient = 1.0;
    ctx->flags = 60;
}

int compute_Puwalhf(int input) {
    int result = input * 32;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

int compute_oZgjhu8(int input) {
    int result = input * 47;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} iYAXeByy_ctx_t;

void init_ctx(iYAXeByy_ctx_t *ctx) {
    ctx->id = 3292;
    ctx->coefficient = 6.0;
    ctx->flags = 110;
}

int compute_kWzzOrG(int input) {
    int result = input * 44;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} F4tsttVB_ctx_t;

void init_ctx(F4tsttVB_ctx_t *ctx) {
    ctx->id = 9127;
    ctx->coefficient = 5.8;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} He8MBM6C_ctx_t;

void init_ctx(He8MBM6C_ctx_t *ctx) {
    ctx->id = 3891;
    ctx->coefficient = 5.1;
    ctx->flags = 106;
}

int compute_7zUlFlm(int input) {
    int result = input * 19;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_QqG3nlR(int input) {
    int result = input * 16;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_B4GmilL(int input) {
    int result = input * 31;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} PM86TUiG_ctx_t;

void init_ctx(PM86TUiG_ctx_t *ctx) {
    ctx->id = 4414;
    ctx->coefficient = 4.1;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} RflveoV5_ctx_t;

void init_ctx(RflveoV5_ctx_t *ctx) {
    ctx->id = 2748;
    ctx->coefficient = 3.8;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} NDWpl12z_ctx_t;

void init_ctx(NDWpl12z_ctx_t *ctx) {
    ctx->id = 7866;
    ctx->coefficient = 8.3;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} M0KhvQXH_ctx_t;

void init_ctx(M0KhvQXH_ctx_t *ctx) {
    ctx->id = 1299;
    ctx->coefficient = 8.3;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 2BGMxRfH_ctx_t;

void init_ctx(2BGMxRfH_ctx_t *ctx) {
    ctx->id = 9258;
    ctx->coefficient = 8.2;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} YKkoIb2V_ctx_t;

void init_ctx(YKkoIb2V_ctx_t *ctx) {
    ctx->id = 2966;
    ctx->coefficient = 3.1;
    ctx->flags = 211;
}

int compute_jFzNBOs(int input) {
    int result = input * 69;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} uUT50zMV_ctx_t;

void init_ctx(uUT50zMV_ctx_t *ctx) {
    ctx->id = 2144;
    ctx->coefficient = 5.1;
    ctx->flags = 172;
}

int compute_xvF6adP(int input) {
    int result = input * 24;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} Yc9lessD_ctx_t;

void init_ctx(Yc9lessD_ctx_t *ctx) {
    ctx->id = 4527;
    ctx->coefficient = 3.2;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} sJZKdDhv_ctx_t;

void init_ctx(sJZKdDhv_ctx_t *ctx) {
    ctx->id = 3347;
    ctx->coefficient = 8.6;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} tnErMmgW_ctx_t;

void init_ctx(tnErMmgW_ctx_t *ctx) {
    ctx->id = 5166;
    ctx->coefficient = 8.5;
    ctx->flags = 100;
}

int compute_xI5dEjN(int input) {
    int result = input * 10;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_CX1B8cg(int input) {
    int result = input * 52;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} hWuutyC3_ctx_t;

void init_ctx(hWuutyC3_ctx_t *ctx) {
    ctx->id = 8662;
    ctx->coefficient = 7.7;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} feySfV66_ctx_t;

void init_ctx(feySfV66_ctx_t *ctx) {
    ctx->id = 3440;
    ctx->coefficient = 6.2;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} X3k4qJuK_ctx_t;

void init_ctx(X3k4qJuK_ctx_t *ctx) {
    ctx->id = 6910;
    ctx->coefficient = 1.2;
    ctx->flags = 171;
}

int compute_Y4dm1N2(int input) {
    int result = input * 11;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} CFCPpfs0_ctx_t;

void init_ctx(CFCPpfs0_ctx_t *ctx) {
    ctx->id = 4986;
    ctx->coefficient = 8.4;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} oD9tKuw0_ctx_t;

void init_ctx(oD9tKuw0_ctx_t *ctx) {
    ctx->id = 4246;
    ctx->coefficient = 5.4;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} utuSNRNX_ctx_t;

void init_ctx(utuSNRNX_ctx_t *ctx) {
    ctx->id = 1643;
    ctx->coefficient = 9.0;
    ctx->flags = 177;
}

int compute_q4Q2D0m(int input) {
    int result = input * 3;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} KfiJbxPh_ctx_t;

void init_ctx(KfiJbxPh_ctx_t *ctx) {
    ctx->id = 6903;
    ctx->coefficient = 1.6;
    ctx->flags = 194;
}

int compute_W5QBTLX(int input) {
    int result = input * 57;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_6Y0h1Ll(int input) {
    int result = input * 34;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_A0aCoy4(int input) {
    int result = input * 49;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} rdCpXCbv_ctx_t;

void init_ctx(rdCpXCbv_ctx_t *ctx) {
    ctx->id = 5744;
    ctx->coefficient = 0.4;
    ctx->flags = 116;
}

int compute_fpRxZnj(int input) {
    int result = input * 56;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_LSUv6Gv(int input) {
    int result = input * 32;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} n4nJsXM0_ctx_t;

void init_ctx(n4nJsXM0_ctx_t *ctx) {
    ctx->id = 1553;
    ctx->coefficient = 5.9;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} YskJ7wr4_ctx_t;

void init_ctx(YskJ7wr4_ctx_t *ctx) {
    ctx->id = 7280;
    ctx->coefficient = 3.5;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} IJ97Pz9D_ctx_t;

void init_ctx(IJ97Pz9D_ctx_t *ctx) {
    ctx->id = 5128;
    ctx->coefficient = 8.7;
    ctx->flags = 141;
}

int compute_K2gdOvu(int input) {
    int result = input * 13;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 3Ovl0XK1_ctx_t;

void init_ctx(3Ovl0XK1_ctx_t *ctx) {
    ctx->id = 3297;
    ctx->coefficient = 5.9;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} TcPOFu8d_ctx_t;

void init_ctx(TcPOFu8d_ctx_t *ctx) {
    ctx->id = 4825;
    ctx->coefficient = 4.6;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} TvtxGWmn_ctx_t;

void init_ctx(TvtxGWmn_ctx_t *ctx) {
    ctx->id = 3114;
    ctx->coefficient = 3.9;
    ctx->flags = 71;
}

int compute_fbCEgWs(int input) {
    int result = input * 66;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_D7amxg5(int input) {
    int result = input * 67;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_cVxGTL3(int input) {
    int result = input * 61;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_ia8mcOD(int input) {
    int result = input * 25;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} N1Ffq0tc_ctx_t;

void init_ctx(N1Ffq0tc_ctx_t *ctx) {
    ctx->id = 5408;
    ctx->coefficient = 8.4;
    ctx->flags = 97;
}

int compute_y505Omp(int input) {
    int result = input * 44;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} z7mMvRiQ_ctx_t;

void init_ctx(z7mMvRiQ_ctx_t *ctx) {
    ctx->id = 3807;
    ctx->coefficient = 8.9;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} fuF1JXPr_ctx_t;

void init_ctx(fuF1JXPr_ctx_t *ctx) {
    ctx->id = 8954;
    ctx->coefficient = 1.9;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} OrQ8FELx_ctx_t;

void init_ctx(OrQ8FELx_ctx_t *ctx) {
    ctx->id = 5905;
    ctx->coefficient = 4.7;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} Dmut4vtA_ctx_t;

void init_ctx(Dmut4vtA_ctx_t *ctx) {
    ctx->id = 4051;
    ctx->coefficient = 4.1;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 39OhCRc1_ctx_t;

void init_ctx(39OhCRc1_ctx_t *ctx) {
    ctx->id = 6676;
    ctx->coefficient = 8.0;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} fkk0Wkrv_ctx_t;

void init_ctx(fkk0Wkrv_ctx_t *ctx) {
    ctx->id = 9429;
    ctx->coefficient = 10.0;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} gqSyVLxt_ctx_t;

void init_ctx(gqSyVLxt_ctx_t *ctx) {
    ctx->id = 4673;
    ctx->coefficient = 4.6;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} aNjGyfoA_ctx_t;

void init_ctx(aNjGyfoA_ctx_t *ctx) {
    ctx->id = 2055;
    ctx->coefficient = 9.9;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} OA8C7NNu_ctx_t;

void init_ctx(OA8C7NNu_ctx_t *ctx) {
    ctx->id = 9793;
    ctx->coefficient = 5.0;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 0uxOcuUq_ctx_t;

void init_ctx(0uxOcuUq_ctx_t *ctx) {
    ctx->id = 9494;
    ctx->coefficient = 4.7;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} NPZF8n9y_ctx_t;

void init_ctx(NPZF8n9y_ctx_t *ctx) {
    ctx->id = 8918;
    ctx->coefficient = 1.5;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} MaDMNBqs_ctx_t;

void init_ctx(MaDMNBqs_ctx_t *ctx) {
    ctx->id = 3569;
    ctx->coefficient = 1.6;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} PWRCoBjY_ctx_t;

void init_ctx(PWRCoBjY_ctx_t *ctx) {
    ctx->id = 4397;
    ctx->coefficient = 3.0;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} mgeVwgIT_ctx_t;

void init_ctx(mgeVwgIT_ctx_t *ctx) {
    ctx->id = 1706;
    ctx->coefficient = 9.3;
    ctx->flags = 15;
}

int compute_2SZswFr(int input) {
    int result = input * 42;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} rmPgc33v_ctx_t;

void init_ctx(rmPgc33v_ctx_t *ctx) {
    ctx->id = 6288;
    ctx->coefficient = 7.9;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} 2kapmP1r_ctx_t;

void init_ctx(2kapmP1r_ctx_t *ctx) {
    ctx->id = 9996;
    ctx->coefficient = 5.8;
    ctx->flags = 155;
}

int compute_CQRa8C2(int input) {
    int result = input * 43;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} ZuYZqEEo_ctx_t;

void init_ctx(ZuYZqEEo_ctx_t *ctx) {
    ctx->id = 9324;
    ctx->coefficient = 3.8;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 9hfujP4G_ctx_t;

void init_ctx(9hfujP4G_ctx_t *ctx) {
    ctx->id = 2203;
    ctx->coefficient = 3.5;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} AJhtt9W9_ctx_t;

void init_ctx(AJhtt9W9_ctx_t *ctx) {
    ctx->id = 9742;
    ctx->coefficient = 2.7;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} DQ6vC3js_ctx_t;

void init_ctx(DQ6vC3js_ctx_t *ctx) {
    ctx->id = 1124;
    ctx->coefficient = 4.3;
    ctx->flags = 66;
}

int compute_LYt7phG(int input) {
    int result = input * 67;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} rCHTZQn9_ctx_t;

void init_ctx(rCHTZQn9_ctx_t *ctx) {
    ctx->id = 1507;
    ctx->coefficient = 6.0;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 18h3EzrT_ctx_t;

void init_ctx(18h3EzrT_ctx_t *ctx) {
    ctx->id = 5448;
    ctx->coefficient = 1.5;
    ctx->flags = 114;
}

int compute_3MQjfWS(int input) {
    int result = input * 10;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_vWc8cDU(int input) {
    int result = input * 5;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_vs4sxoD(int input) {
    int result = input * 23;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 0AF2UjzG_ctx_t;

void init_ctx(0AF2UjzG_ctx_t *ctx) {
    ctx->id = 3143;
    ctx->coefficient = 6.3;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} c81akLYI_ctx_t;

void init_ctx(c81akLYI_ctx_t *ctx) {
    ctx->id = 7551;
    ctx->coefficient = 6.5;
    ctx->flags = 252;
}

int compute_6VeVSLL(int input) {
    int result = input * 46;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} djqwQIJR_ctx_t;

void init_ctx(djqwQIJR_ctx_t *ctx) {
    ctx->id = 2697;
    ctx->coefficient = 3.4;
    ctx->flags = 197;
}

int compute_lrCNZF8(int input) {
    int result = input * 50;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} YmQLkksU_ctx_t;

void init_ctx(YmQLkksU_ctx_t *ctx) {
    ctx->id = 1697;
    ctx->coefficient = 6.3;
    ctx->flags = 207;
}

int compute_pTJIDQn(int input) {
    int result = input * 61;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} BbItO2EY_ctx_t;

void init_ctx(BbItO2EY_ctx_t *ctx) {
    ctx->id = 8224;
    ctx->coefficient = 3.2;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} GmTWlPui_ctx_t;

void init_ctx(GmTWlPui_ctx_t *ctx) {
    ctx->id = 4809;
    ctx->coefficient = 4.7;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} hiFItfBJ_ctx_t;

void init_ctx(hiFItfBJ_ctx_t *ctx) {
    ctx->id = 3459;
    ctx->coefficient = 1.8;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 0PHdwJjZ_ctx_t;

void init_ctx(0PHdwJjZ_ctx_t *ctx) {
    ctx->id = 6590;
    ctx->coefficient = 4.5;
    ctx->flags = 155;
}

int compute_tbbDd3w(int input) {
    int result = input * 37;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} GrZng3LO_ctx_t;

void init_ctx(GrZng3LO_ctx_t *ctx) {
    ctx->id = 6411;
    ctx->coefficient = 2.9;
    ctx->flags = 240;
}

int compute_hBBkfe7(int input) {
    int result = input * 64;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_gFjlkBq(int input) {
    int result = input * 64;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} UXjGv6QW_ctx_t;

void init_ctx(UXjGv6QW_ctx_t *ctx) {
    ctx->id = 7613;
    ctx->coefficient = 1.1;
    ctx->flags = 126;
}

int compute_8bmnpTX(int input) {
    int result = input * 9;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} PZkMsJcu_ctx_t;

void init_ctx(PZkMsJcu_ctx_t *ctx) {
    ctx->id = 1337;
    ctx->coefficient = 6.4;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} uNNUQMcv_ctx_t;

void init_ctx(uNNUQMcv_ctx_t *ctx) {
    ctx->id = 4874;
    ctx->coefficient = 3.3;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} kuyYT50T_ctx_t;

void init_ctx(kuyYT50T_ctx_t *ctx) {
    ctx->id = 1910;
    ctx->coefficient = 9.9;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} cJ28Loa2_ctx_t;

void init_ctx(cJ28Loa2_ctx_t *ctx) {
    ctx->id = 9183;
    ctx->coefficient = 3.0;
    ctx->flags = 238;
}

int compute_YkS8KdB(int input) {
    int result = input * 29;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

int compute_G7AwNfE(int input) {
    int result = input * 10;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} viqra3vf_ctx_t;

void init_ctx(viqra3vf_ctx_t *ctx) {
    ctx->id = 8419;
    ctx->coefficient = 5.1;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} vlcE86Jl_ctx_t;

void init_ctx(vlcE86Jl_ctx_t *ctx) {
    ctx->id = 1853;
    ctx->coefficient = 8.0;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} XxUPl14l_ctx_t;

void init_ctx(XxUPl14l_ctx_t *ctx) {
    ctx->id = 2494;
    ctx->coefficient = 5.5;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} o1OtIQlg_ctx_t;

void init_ctx(o1OtIQlg_ctx_t *ctx) {
    ctx->id = 9513;
    ctx->coefficient = 9.6;
    ctx->flags = 208;
}

