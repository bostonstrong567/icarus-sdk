// /Script/Engine.CustomOutput
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionCustom.h

USTRUCT()
struct FCustomOutput
{
public:
    UPROPERTY(EditAnywhere) FName OutputName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<ECustomMaterialOutputType> OutputType;  // 0x0008, size 0x1
};
