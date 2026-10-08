// /Script/Engine.DistributionFloatUniform
// Derives from: UDistributionFloat > UDistribution > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloatUniform.h

UCLASS(EditInlineNew)
class UDistributionFloatUniform : public UDistributionFloat
{
public:
    UPROPERTY(EditAnywhere) float Min;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float Max;  // 0x003C, size 0x4
};
