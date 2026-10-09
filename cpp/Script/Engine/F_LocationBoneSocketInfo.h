// /Script/Engine.LocationBoneSocketInfo
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationBoneSocket.h

USTRUCT()
struct FLocationBoneSocketInfo
{
public:
    UPROPERTY(EditAnywhere) FName BoneSocketName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FVector Offset;  // 0x0008, size 0xC
};
