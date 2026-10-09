// /Script/Engine.SmartName
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Animation/SmartName.h

USTRUCT()
struct FSmartName
{
public:
    UPROPERTY(EditAnywhere) FName DisplayName;  // 0x0000, size 0x8
    uint16 UID;  // 0x0008, not reflected
};
