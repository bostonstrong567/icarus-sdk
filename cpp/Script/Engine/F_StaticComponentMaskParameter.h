// /Script/Engine.StaticComponentMaskParameter
// size 0x28, declared in Engine/Source/Runtime/Engine/Public/StaticParameterSet.h

USTRUCT()
struct FStaticComponentMaskParameter : public FStaticParameterBase
{
    UPROPERTY() bool R;  // 0x0024, size 0x1
    UPROPERTY() bool G;  // 0x0025, size 0x1
    UPROPERTY() bool B;  // 0x0026, size 0x1
    UPROPERTY() bool A;  // 0x0027, size 0x1
};
