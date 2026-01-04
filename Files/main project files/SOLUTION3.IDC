//   PSAF bus ID    Associated bus number
BUS,                    B10                 ,    1
BUS,                    B20                 ,    2
BUS,                    B30                 ,    3
BUS,                    B11                 ,    4
BUS,                    B21                 ,    5
BUS,                    B31                 ,    6
BUS,                    B01                 ,    7
BUS,                    B12                 ,    8
BUS,                    B22                 ,    9
BUS,                    B32                 ,   10
BUS,                    B02                 ,   11
BUS,                    B13                 ,   12
BUS,                    B23                 ,   13
BUS,                    B33                 ,   14
BUS,                    B03                 ,   15
BUS,                    B14                 ,   16
BUS,                    B24                 ,   17
BUS,                    B34                 ,   18
BUS,                    B04                 ,   19
BUS,                    B15                 ,   20
BUS,                    B25                 ,   21
BUS,                    B35                 ,   22
BUS,                    B05                 ,   23
BUS,                    B16                 ,   24
BUS,                    B26                 ,   25
BUS,                    B36                 ,   26
BUS,                    B06                 ,   27
BUS,                    B17                 ,   28
BUS,                    B27                 ,   29
BUS,                    B37                 ,   30
BUS,                    B07                 ,   31
BUS,                    B18                 ,   32
BUS,                    B28                 ,   33
BUS,                    B38                 ,   34
BUS,                    B08                 ,   35
BUS,                    B19                 ,   36
BUS,                    B29                 ,   37
BUS,                    B39                 ,   38
BUS,                    B09                 ,   39
//   Zone ID           Zone number
ZONE,                    0                   ,    1
//[Type], PSAF ID  ,       Bus from nbr. , To nbr. , circ. nbr.
LINE,   L10                                     ,   23 ,        35 ,        1
LINE,   L20                                     ,   20 ,        24 ,        1
LINE,   L30                                     ,   21 ,        25 ,        1
LINE,   L11                                     ,   27 ,        31 ,        1
LINE,   L21                                     ,   24 ,        28 ,        1
LINE,   L31                                     ,   25 ,        29 ,        1
LINE,   L01                                     ,    7 ,        11 ,        1
LINE,   L12                                     ,   27 ,         4 ,        1
LINE,   L22                                     ,   24 ,        36 ,        1
LINE,   L32                                     ,   25 ,        33 ,        1
LINE,   L02                                     ,    7 ,        38 ,        1
LINE,   L13                                     ,   31 ,        35 ,        1
LINE,   L23                                     ,   24 ,         5 ,        1
LINE,   L33                                     ,   25 ,        37 ,        1
LINE,   L03                                     ,   11 ,        15 ,        1
LINE,   L14                                     ,   35 ,        39 ,        1
LINE,   L24                                     ,   24 ,        17 ,        1
LINE,   L34                                     ,   33 ,        37 ,        1
LINE,   L04                                     ,   11 ,        21 ,        1
LINE,   L15                                     ,   39 ,        38 ,        1
LINE,   L25                                     ,   28 ,        32 ,        1
LINE,   L05                                     ,   15 ,        19 ,        1
LINE,   L16                                     ,    1 ,         4 ,        1
LINE,   L26                                     ,   28 ,        29 ,        1
LINE,   L06                                     ,   15 ,        32 ,        1
LINE,   L17                                     ,    1 ,        12 ,        1
LINE,   L27                                     ,    5 ,         9 ,        1
LINE,   L07                                     ,   19 ,        23 ,        1
LINE,   L18                                     ,   12 ,        16 ,        1
LINE,   L28                                     ,    9 ,        13 ,        1
LINE,   L08                                     ,   19 ,        16 ,        1
LINE,   L19                                     ,   16 ,        20 ,        1
LINE,   L29                                     ,   13 ,        17 ,        1
LINE,   L09                                     ,   23 ,        27 ,        1
TXFIX,  T10                                     ,    7 ,         3 ,        1
TXFIX,  T01                                     ,    8 ,         4 ,        1
TXFIX,  T11                                     ,   37 ,        34 ,        1
TXFIX,  T02                                     ,    8 ,        12 ,        1
TXFIX,  T12                                     ,   36 ,         2 ,        1
TXFIX,  T03                                     ,   27 ,         6 ,        1
TXFIX,  T04                                     ,    1 ,        10 ,        1
TXFIX,  T05                                     ,   36 ,        14 ,        1
TXFIX,  T06                                     ,    2 ,        18 ,        1
TXFIX,  T07                                     ,    9 ,        22 ,        1
TXFIX,  T08                                     ,   13 ,        26 ,        1
TXFIX,  T09                                     ,   21 ,        30 ,        1

[Generator Output]
//Generator Id, Fp, Fq
G10, 1, 1
G02, 1, 1
G03, 1, 1
G04, 1, 1
G05, 1, 1
G06, 1, 1
G07, 1, 1
G08, 1, 1
G09, 1, 1
G01, 1, 1
[End Generator Output]

[Synchronous Motor Output]
//Sync motor Id, Fp, Fq
[End Synchronous Motor Output]

[Induction Motor Output]
//Induct motor Id, Fp, Fq
[End Induction Motor Output]
