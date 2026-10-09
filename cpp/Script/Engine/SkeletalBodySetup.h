// /Script/Engine.SkeletalBodySetup
// Derives from: UBodySetup > UBodySetupCore > UObject
// size 0x2B8, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h

UCLASS(MinimalAPI)
class USkeletalBodySetup : public UBodySetup
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) bool bSkipScaleFromAnimation;  // 0x02A0, size 0x1
private:
    UPROPERTY() TArray<FPhysicalAnimationProfile> PhysicalAnimationData;  // 0x02A8, size 0x10
};
