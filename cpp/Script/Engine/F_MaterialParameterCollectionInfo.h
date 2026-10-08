// /Script/Engine.MaterialParameterCollectionInfo
// size 0x18, declared in Engine/Source/Runtime/Engine/Public/MaterialCachedData.h

USTRUCT()
struct FMaterialParameterCollectionInfo
{
    UPROPERTY() FGuid StateId;  // 0x0000, size 0x10
    UPROPERTY() UMaterialParameterCollection* ParameterCollection;  // 0x0010, size 0x8
};
