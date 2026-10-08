// /Script/Engine.CustomDefine
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionCustom.h

USTRUCT()
struct FCustomDefine
{
    UPROPERTY(EditAnywhere) FString DefineName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FString DefineValue;  // 0x0010, size 0x10
};
