// /Script/Engine.MaterialFunctionInfo
// size 0x18, declared in Engine/Source/Runtime/Engine/Public/MaterialCachedData.h

USTRUCT()
struct FMaterialFunctionInfo
{
public:
    UPROPERTY() FGuid StateId;  // 0x0000, size 0x10
    UPROPERTY() UMaterialFunctionInterface* Function;  // 0x0010, size 0x8
};
