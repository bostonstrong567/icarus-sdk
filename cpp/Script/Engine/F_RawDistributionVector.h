// /Script/Engine.RawDistributionVector
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVector.h

USTRUCT()
struct FRawDistributionVector : public FRawDistribution
{
    UPROPERTY() float MinValue;  // 0x0020, size 0x4
    UPROPERTY() float MaxValue;  // 0x0024, size 0x4
    UPROPERTY() FVector MinValueVec;  // 0x0028, size 0xC
    UPROPERTY() FVector MaxValueVec;  // 0x0034, size 0xC
    UPROPERTY(EditAnywhere, Instanced) UDistributionVector* Distribution;  // 0x0040, size 0x8
};
