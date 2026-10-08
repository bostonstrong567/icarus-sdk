// /Script/Engine.OverlapResult
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FOverlapResult
{
    UPROPERTY() TWeakObjectPtr<AActor> Actor;  // 0x0000, size 0x8
    UPROPERTY(Instanced) TWeakObjectPtr<UPrimitiveComponent> Component;  // 0x0008, size 0x8
    UPROPERTY() uint8 bBlockingHit : 1;  // 0x0014, mask 0x01

    // Not reflected:
    int32 ItemIndex;  // 0x0010
};
