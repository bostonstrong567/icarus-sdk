// /Script/Engine.MaterialParameterInfo
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h

USTRUCT()
struct FMaterialParameterInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMaterialParameterAssociation> Association;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Index;  // 0x000C, size 0x4
};
