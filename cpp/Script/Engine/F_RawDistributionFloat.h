// /Script/Engine.RawDistributionFloat
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h

USTRUCT()
struct FRawDistributionFloat : public FRawDistribution
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Instanced) UDistributionFloat* Distribution;  // 0x0028, size 0x8
private:
    UPROPERTY() float MinValue;  // 0x0020, size 0x4
    UPROPERTY() float MaxValue;  // 0x0024, size 0x4
};
