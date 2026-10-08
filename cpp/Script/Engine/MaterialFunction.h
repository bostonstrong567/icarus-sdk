// /Script/Engine.MaterialFunction
// Derives from: UMaterialFunctionInterface > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialFunction.h

UCLASS(MinimalAPI)
class UMaterialFunction : public UMaterialFunctionInterface
{
public:
    UPROPERTY(EditAnywhere) FString Description;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) uint8 bExposeToLibrary : 1;  // 0x0050, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bPrefixParameterNames : 1;  // 0x0050, mask 0x02
};
