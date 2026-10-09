// /Script/Engine.RawDistributionVector
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVector.h

USTRUCT()
struct FRawDistributionVector : public FRawDistribution
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Instanced) UDistributionVector* Distribution;  // 0x0040, size 0x8
private:
    UPROPERTY() float MinValue;  // 0x0020, size 0x4
    UPROPERTY() float MaxValue;  // 0x0024, size 0x4
    UPROPERTY() FVector MinValueVec;  // 0x0028, size 0xC
    UPROPERTY() FVector MaxValueVec;  // 0x0034, size 0xC
};
