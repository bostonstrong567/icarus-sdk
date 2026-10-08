// /Script/Engine.BakedStringCustomAttribute
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Animation/CustomAttributes.h

USTRUCT()
struct FBakedStringCustomAttribute
{
    UPROPERTY(EditAnywhere) FName AttributeName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FStringCurve StringCurve;  // 0x0008, size 0x88
};
