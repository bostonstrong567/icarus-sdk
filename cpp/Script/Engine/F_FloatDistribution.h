// /Script/Engine.FloatDistribution
// size 0x20, declared in Engine/Source/Runtime/Engine/Public/Distributions.h

USTRUCT()
struct FFloatDistribution
{
    UPROPERTY() FDistributionLookupTable Table;  // 0x0000, size 0x20

    // Not reflected:
    FDistributionLookupTable LookupTable;  // 0x0000
};
