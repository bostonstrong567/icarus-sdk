// /Script/CoreUObject.Guid
// size 0x10, declared in Engine/Source/Runtime/Core/Public/Misc/Guid.h

USTRUCT()
struct FGuid
{
    UPROPERTY(EditAnywhere, SaveGame) int32 A;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 B;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 C;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 D;  // 0x000C, size 0x4
};
