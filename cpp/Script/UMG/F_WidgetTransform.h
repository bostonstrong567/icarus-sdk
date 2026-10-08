// /Script/UMG.WidgetTransform
// size 0x1C, declared in Engine/Source/Runtime/UMG/Public/Slate/WidgetTransform.h

USTRUCT()
struct FWidgetTransform
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Translation;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Scale;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Shear;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Angle;  // 0x0018, size 0x4
};
