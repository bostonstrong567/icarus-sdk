// /Script/Engine.RepAttachment
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FRepAttachment
{
    UPROPERTY() AActor* AttachParent;  // 0x0000, size 0x8
    UPROPERTY() FVector_NetQuantize100 LocationOffset;  // 0x0008, size 0xC
    UPROPERTY() FVector_NetQuantize100 RelativeScale3D;  // 0x0014, size 0xC
    UPROPERTY() FRotator RotationOffset;  // 0x0020, size 0xC
    UPROPERTY() FName AttachSocket;  // 0x002C, size 0x8
    UPROPERTY(Instanced) USceneComponent* AttachComponent;  // 0x0038, size 0x8
};
