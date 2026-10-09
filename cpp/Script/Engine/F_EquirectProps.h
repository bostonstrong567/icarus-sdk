// /Script/Engine.EquirectProps
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Components/StereoLayerComponent.h

USTRUCT()
struct FEquirectProps
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBox2D LeftUVRect;  // 0x0000, size 0x14
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBox2D RightUVRect;  // 0x0014, size 0x14
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D LeftScale;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D RightScale;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D LeftBias;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D RightBias;  // 0x0040, size 0x8
};
