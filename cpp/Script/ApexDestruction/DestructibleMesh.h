// /Script/ApexDestruction.DestructibleMesh
// Derives from: USkeletalMesh > UStreamableRenderAsset > UObject
// size 0x440, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleMesh.h

UCLASS(MinimalAPI)
class UDestructibleMesh : public USkeletalMesh
{
public:
    UPROPERTY(EditAnywhere) FDestructibleParameters DefaultDestructibleParameters;  // 0x03A0, size 0x88
    UPROPERTY(EditAnywhere) TArray<FFractureEffect> FractureEffects;  // 0x0428, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    nvidia::apex::DestructibleAsset * ApexDestructibleAsset;  // 0x0438
};
