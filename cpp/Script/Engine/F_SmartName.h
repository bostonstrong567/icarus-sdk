// /Script/Engine.SmartName
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Animation/SmartName.h

USTRUCT()
struct FSmartName
{
    UPROPERTY(EditAnywhere) FName DisplayName;  // 0x0000, size 0x8

    // Not reflected:
    uint16 UID;  // 0x0008
};
