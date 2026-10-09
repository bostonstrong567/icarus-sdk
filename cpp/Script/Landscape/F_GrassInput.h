// /Script/Landscape.GrassInput
// size 0x28, declared in Engine/Source/Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeGrassOutput.h

USTRUCT()
struct FGrassInput
{
public:
    UPROPERTY(EditAnywhere) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) ULandscapeGrassType* GrassType;  // 0x0008, size 0x8
    UPROPERTY() FExpressionInput Input;  // 0x0010, size 0x14
};
