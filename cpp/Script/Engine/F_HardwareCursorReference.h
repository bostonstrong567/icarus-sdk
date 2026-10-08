// /Script/Engine.HardwareCursorReference
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/UserInterfaceSettings.h

USTRUCT()
struct FHardwareCursorReference
{
    UPROPERTY(EditAnywhere) FName CursorPath;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FVector2D HotSpot;  // 0x0008, size 0x8
};
