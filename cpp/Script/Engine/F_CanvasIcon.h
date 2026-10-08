// /Script/Engine.CanvasIcon
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/Canvas.h

USTRUCT()
struct FCanvasIcon
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture* Texture;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float U;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float V;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UL;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VL;  // 0x0014, size 0x4
};
