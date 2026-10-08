// /Script/Engine.LensImperfectionSettings
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Engine/Scene.h

USTRUCT()
struct FLensImperfectionSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture* DirtMask;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DirtMaskIntensity;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor DirtMaskTint;  // 0x000C, size 0x10
};
