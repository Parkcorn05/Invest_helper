typedef struct {
    char* stockId; //종목명
    int rank; //등급
    double nowPrice; //현재가
    double holding; //보유량
    double profit; //수익(량)
} Stock;    //종목

typedef struct {
    char* themeId; //테마명
} Theme;    //테마

typedef struct {
    char* categoryId; //카테고리명
} Category; //카테고리

typedef struct {
    char* portfolioId; //포트폴리오명
} Portfolio; //포트폴리오

typedef struct {
    char* currencyId; //통화명
    double sumCurrency; //총통화
    double exchangedCurrency; //환통화
    double exchangeRate; //환율
} Exchange; //환전

typedef struct {
    double executionPrice; //체결가격
    double volume; //체결량
    int date; //체결일
} Trading; //매매

typedef struct {
    int date; //기록일
} Record; //기록

