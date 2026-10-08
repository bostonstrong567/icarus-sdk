// /Script/Engine.GaussianSumBloomSettings
// size 0x84, declared in Engine/Source/Runtime/Engine/Classes/Engine/Scene.h

USTRUCT()
struct FGaussianSumBloomSettings
{
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Intensity;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Threshold;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float SizeScale;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Filter1Size;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Filter2Size;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Filter3Size;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Filter4Size;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Filter5Size;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Filter6Size;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Filter1Tint;  // 0x0024, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Filter2Tint;  // 0x0034, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Filter3Tint;  // 0x0044, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Filter4Tint;  // 0x0054, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Filter5Tint;  // 0x0064, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Filter6Tint;  // 0x0074, size 0x10
};
