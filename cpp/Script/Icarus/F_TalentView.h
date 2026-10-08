// /Script/Icarus.TalentView
// size 0x1BC0, declared in Icarus/Source/Icarus/Talents/Model/Data/TalentView.h

USTRUCT()
struct FTalentView : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UTalentViewInterface> ViewClass;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UTalentWidget> TalentClass;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UTalentTooltipWidget> TooltipClass;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TooltipPoolSize;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush PanningBrush;  // 0x0098, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EPanningDirection PanningDirection;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D InitialPosition;  // 0x0124, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OverscrollAmount;  // 0x012C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin TreePadding;  // 0x0130, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> ZoomLevels;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InitialZoomLevel;  // 0x0150, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ELineDrawMethod LineMethod;  // 0x0154, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LineThickness;  // 0x0158, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScrollBarStyle ScrollBarStyle;  // 0x0160, size 0x4D0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ScrollBarThickness;  // 0x0630, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHideScrollBar;  // 0x0638, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentHoverConfig Locked;  // 0x0640, size 0x560
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentHoverConfig Available;  // 0x0BA0, size 0x560
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentHoverConfig Unlocked;  // 0x1100, size 0x560
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentHoverConfig Completed;  // 0x1660, size 0x560
};
