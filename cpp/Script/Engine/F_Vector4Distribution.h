// /Script/Engine.Vector4Distribution
// size 0x20, declared in Engine/Source/Runtime/Engine/Public/Distributions.h

USTRUCT()
struct FVector4Distribution
{
public:
    UPROPERTY() FDistributionLookupTable Table;  // 0x0000, size 0x20
private:
    FDistributionLookupTable LookupTable;  // 0x0000, not reflected
};
