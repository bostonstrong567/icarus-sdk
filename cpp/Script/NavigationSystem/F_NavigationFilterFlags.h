// /Script/NavigationSystem.NavigationFilterFlags
// size 0x4, declared in Engine/Source/Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h

USTRUCT()
struct FNavigationFilterFlags
{
    UPROPERTY(EditAnywhere) uint8 bNavFlag0 : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bNavFlag1 : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bNavFlag2 : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bNavFlag3 : 1;  // 0x0000, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bNavFlag4 : 1;  // 0x0000, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bNavFlag5 : 1;  // 0x0000, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bNavFlag6 : 1;  // 0x0000, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bNavFlag7 : 1;  // 0x0000, mask 0x80
    UPROPERTY(EditAnywhere) uint8 bNavFlag8 : 1;  // 0x0001, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bNavFlag9 : 1;  // 0x0001, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bNavFlag10 : 1;  // 0x0001, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bNavFlag11 : 1;  // 0x0001, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bNavFlag12 : 1;  // 0x0001, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bNavFlag13 : 1;  // 0x0001, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bNavFlag14 : 1;  // 0x0001, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bNavFlag15 : 1;  // 0x0001, mask 0x80

    // Not reflected:
    uint16 Packed;  // 0x0000
};
