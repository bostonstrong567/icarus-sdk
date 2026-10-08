// /Script/ChaosCloth.ChaosClothSharedSimConfig
// Derives from: UClothSharedConfigCommon > UClothConfigCommon > UClothConfigBase > UObject
// size 0x38, declared in Engine/Plugins/Experimental/ChaosCloth/Source/Chaos/Public/ChaosCloth/ChaosClothConfig.h

UCLASS()
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
public:
    UPROPERTY(EditAnywhere) int32 IterationCount;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) int32 SubdivisionCount;  // 0x002C, size 0x4
    UPROPERTY() bool bUseLocalSpaceSimulation;  // 0x0030, size 0x1
    UPROPERTY() bool bUseXPBDConstraints;  // 0x0031, size 0x1
};
