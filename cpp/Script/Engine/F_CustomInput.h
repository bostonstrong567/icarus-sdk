// /Script/Engine.CustomInput
// size 0x1C, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionCustom.h

USTRUCT()
struct FCustomInput
{
    UPROPERTY(EditAnywhere) FName InputName;  // 0x0000, size 0x8
    UPROPERTY() FExpressionInput Input;  // 0x0008, size 0x14
};
