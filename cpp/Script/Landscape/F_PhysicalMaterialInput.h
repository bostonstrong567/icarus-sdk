// /Script/Landscape.PhysicalMaterialInput
// size 0x20, declared in Engine/Source/Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h

USTRUCT()
struct FPhysicalMaterialInput
{
public:
    UPROPERTY(EditAnywhere) UPhysicalMaterial* PhysicalMaterial;  // 0x0000, size 0x8
    UPROPERTY() FExpressionInput Input;  // 0x0008, size 0x14
};
