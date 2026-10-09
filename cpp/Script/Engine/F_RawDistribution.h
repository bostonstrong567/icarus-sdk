// /Script/Engine.RawDistribution
// size 0x20, declared in Engine/Source/Runtime/Engine/Public/Distributions.h

USTRUCT()
struct FRawDistribution
{
public:
    UPROPERTY() FDistributionLookupTable Table;  // 0x0000, size 0x20
protected:
    FDistributionLookupTable LookupTable;  // 0x0000, not reflected
};
