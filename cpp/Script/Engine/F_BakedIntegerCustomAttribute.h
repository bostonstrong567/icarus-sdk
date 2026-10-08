// /Script/Engine.BakedIntegerCustomAttribute
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Animation/CustomAttributes.h

USTRUCT()
struct FBakedIntegerCustomAttribute
{
    UPROPERTY(EditAnywhere) FName AttributeName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FIntegralCurve IntCurve;  // 0x0008, size 0x80
};
