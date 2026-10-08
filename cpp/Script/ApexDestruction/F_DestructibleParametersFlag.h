// /Script/ApexDestruction.DestructibleParametersFlag
// size 0x4, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleMesh.h

USTRUCT()
struct FDestructibleParametersFlag
{
    UPROPERTY(EditAnywhere) uint8 bAccumulateDamage : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bAssetDefinedSupport : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bWorldSupport : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bDebrisTimeout : 1;  // 0x0000, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bDebrisMaxSeparation : 1;  // 0x0000, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bCrumbleSmallestChunks : 1;  // 0x0000, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bAccurateRaycasts : 1;  // 0x0000, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bUseValidBounds : 1;  // 0x0000, mask 0x80
    UPROPERTY(EditAnywhere) uint8 bFormExtendedStructures : 1;  // 0x0001, mask 0x01
};
