// /Script/Engine.ConvolutionBloomSettings
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/Scene.h

USTRUCT()
struct FConvolutionBloomSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Texture;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Size;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector2D CenterUV;  // 0x000C, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float PreFilterMin;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float PreFilterMax;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float PreFilterMult;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BufferScale;  // 0x0020, size 0x4
};
