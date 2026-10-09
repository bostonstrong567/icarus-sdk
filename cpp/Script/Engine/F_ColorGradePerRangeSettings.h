// /Script/Engine.ColorGradePerRangeSettings
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Engine/Scene.h

USTRUCT()
struct FColorGradePerRangeSettings
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 Saturation;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 Contrast;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 Gamma;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 Gain;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 Offset;  // 0x0040, size 0x10
};
