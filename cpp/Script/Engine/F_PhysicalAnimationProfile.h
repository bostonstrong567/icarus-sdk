// /Script/Engine.PhysicalAnimationProfile
// size 0x2C, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h

USTRUCT()
struct FPhysicalAnimationProfile
{
public:
    UPROPERTY() FName ProfileName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FPhysicalAnimationData PhysicalAnimationData;  // 0x0008, size 0x24
};
