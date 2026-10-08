// /Script/Engine.MaterialCachedParameterEntry
// size 0x30, declared in Engine/Source/Runtime/Engine/Public/MaterialCachedData.h

USTRUCT()
struct FMaterialCachedParameterEntry
{
    UPROPERTY() TArray<uint64> NameHashes;  // 0x0000, size 0x10
    UPROPERTY() TArray<FMaterialParameterInfo> ParameterInfos;  // 0x0010, size 0x10
    UPROPERTY() TArray<FGuid> ExpressionGuids;  // 0x0020, size 0x10
};
