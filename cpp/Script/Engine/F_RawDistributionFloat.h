// /Script/Engine.RawDistributionFloat
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h

USTRUCT()
struct FRawDistributionFloat : public FRawDistribution
{
    UPROPERTY() float MinValue;  // 0x0020, size 0x4
    UPROPERTY() float MaxValue;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, Instanced) UDistributionFloat* Distribution;  // 0x0028, size 0x8
};
