// /Script/Engine.CustomChannelSetup
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Engine/CollisionProfile.h

USTRUCT()
struct FCustomChannelSetup
{
    UPROPERTY() TEnumAsByte<ECollisionChannel> Channel;  // 0x0000, size 0x1
    UPROPERTY() TEnumAsByte<ECollisionResponse> DefaultResponse;  // 0x0001, size 0x1
    UPROPERTY() bool bTraceType;  // 0x0002, size 0x1
    UPROPERTY() bool bStaticObject;  // 0x0003, size 0x1
    UPROPERTY() FName Name;  // 0x0004, size 0x8
};
