// /Script/Engine.AnimCurveBase
// size 0x18, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimCurveTypes.h

USTRUCT()
struct FAnimCurveBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Deprecated) FName LastObservedName;  // 0x0000, size 0x8
    UPROPERTY() FSmartName Name;  // 0x0008, size 0xC
private:
    UPROPERTY() int32 CurveTypeFlags;  // 0x0014, size 0x4
};
