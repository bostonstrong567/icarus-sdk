// /Script/Engine.NavAgentSelector
// size 0x4, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h

USTRUCT()
struct FNavAgentSelector
{
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent0 : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent1 : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent2 : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent3 : 1;  // 0x0000, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent4 : 1;  // 0x0000, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent5 : 1;  // 0x0000, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent6 : 1;  // 0x0000, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent7 : 1;  // 0x0000, mask 0x80
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent8 : 1;  // 0x0001, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent9 : 1;  // 0x0001, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent10 : 1;  // 0x0001, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent11 : 1;  // 0x0001, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent12 : 1;  // 0x0001, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent13 : 1;  // 0x0001, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent14 : 1;  // 0x0001, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bSupportsAgent15 : 1;  // 0x0001, mask 0x80

    // Not reflected:
    uint32 PackedBits;  // 0x0000
};
