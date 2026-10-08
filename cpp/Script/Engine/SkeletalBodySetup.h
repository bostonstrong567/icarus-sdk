// /Script/Engine.SkeletalBodySetup
// Derives from: UBodySetup > UBodySetupCore > UObject
// size 0x2B8, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h

UCLASS(MinimalAPI)
class USkeletalBodySetup : public UBodySetup
{
public:
    UPROPERTY(EditAnywhere) bool bSkipScaleFromAnimation;  // 0x02A0, size 0x1
    UPROPERTY() TArray<FPhysicalAnimationProfile> PhysicalAnimationData;  // 0x02A8, size 0x10
};
