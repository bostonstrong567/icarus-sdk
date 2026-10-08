// /Script/Engine.LensSettings
// size 0xE0, declared in Engine/Source/Runtime/Engine/Classes/Engine/Scene.h

USTRUCT()
struct FLensSettings
{
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLensBloomSettings Bloom;  // 0x0000, size 0xB8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLensImperfectionSettings Imperfections;  // 0x00B8, size 0x20
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ChromaticAberration;  // 0x00D8, size 0x4
};
