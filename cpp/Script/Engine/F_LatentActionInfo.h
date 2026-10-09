// /Script/Engine.LatentActionInfo
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/LatentActionManager.h

USTRUCT()
struct FLatentActionInfo
{
public:
    UPROPERTY() int32 Linkage;  // 0x0000, size 0x4
    UPROPERTY() int32 UUID;  // 0x0004, size 0x4
    UPROPERTY() FName ExecutionFunction;  // 0x0008, size 0x8
    UPROPERTY() UObject* CallbackTarget;  // 0x0010, size 0x8
};
