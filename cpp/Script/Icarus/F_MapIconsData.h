// /Script/Icarus.MapIconsData
// size 0xB8, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/MapIconsLibrary.generated.h

USTRUCT()
struct FMapIconsData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UUserWidget> WidgetClass;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* MapIcon;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum RequiredPlayerStatToShow;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum RequiredActorStatToShow;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequireOwnershipToShow;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ZOrder;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScaleFactor;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GetsRotation;  // 0x007C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D BrushSize;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UpdateOnTick;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowNameOnHover;  // 0x0089, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText HoverName;  // 0x0090, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisplayOnCompass;  // 0x00A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCompassDisplayDistance;  // 0x00AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUserWidget> CompassWidgetClass;  // 0x00B0, size 0x8
};
