// /Script/Engine.CollisionResponse
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h

USTRUCT()
struct FCollisionResponse
{
    UPROPERTY(Transient) FCollisionResponseContainer ResponseToChannels;  // 0x0000, size 0x20
    UPROPERTY(EditAnywhere) TArray<FResponseChannel> ResponseArray;  // 0x0020, size 0x10
};
