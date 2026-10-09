// /Script/Engine.LensBloomSettings
// size 0xB8, declared in Engine/Source/Runtime/Engine/Classes/Engine/Scene.h

USTRUCT()
struct FLensBloomSettings
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FGaussianSumBloomSettings GaussianSum;  // 0x0000, size 0x84
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FConvolutionBloomSettings Convolution;  // 0x0088, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EBloomMethod> Method;  // 0x00B0, size 0x1
};
