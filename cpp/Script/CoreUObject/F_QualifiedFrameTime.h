// /Script/CoreUObject.QualifiedFrameTime
// size 0x10, declared in Engine/Source/Runtime/Core/Public/Misc/QualifiedFrameTime.h

USTRUCT()
struct FQualifiedFrameTime
{
public:
    UPROPERTY(BlueprintReadWrite) FFrameTime Time;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadWrite) FFrameRate Rate;  // 0x0008, size 0x8
};
