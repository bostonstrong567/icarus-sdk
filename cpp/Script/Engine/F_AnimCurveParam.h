// /Script/Engine.AnimCurveParam
// size 0xC, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimCurveTypes.h

USTRUCT()
struct FAnimCurveParam
{
public:
    UPROPERTY(EditAnywhere) FName Name;  // 0x0000, size 0x8
    uint16 UID;  // 0x0008, not reflected
};
