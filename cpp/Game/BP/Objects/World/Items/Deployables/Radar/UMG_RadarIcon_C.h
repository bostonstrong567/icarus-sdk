// /Game/BP/Objects/World/Items/Deployables/Radar/UMG_RadarIcon.UMG_RadarIcon_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3D0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadarIcon_C : public UUMG_IcarusLinkedActorPanel_C, public IMapIconWidgetInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Hitbox;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* IconImage;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* IconScaleBox;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* LabelCanvas;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LabelLineImage;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* LabelScaleBox_0;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LabelText;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_1;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_0;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DrawLabel;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D DirectionalOffset;  // 0x02D4, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_RadarIcon_C* MasterIcon;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString LabelString;  // 0x02E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsPlayer;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMapIconsRowHandle MapIconRow;  // 0x02FC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMapIconsData MapIconData;  // 0x0318, size 0xB8

    UFUNCTION(BlueprintCallable) void ApplyLabelPosition(TEnumAsByte<RotationalDirections> RelativePosition);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RadarIcon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetHoverTooltipText(FText& Hover_Name) const;  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void InitialiseIconWidget(FMapIconsRowHandle MapIconData, AActor* OwningActor);  // parameters 0x20
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void SetShouldDrawLabel(bool DrawLabel);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldDrawPathToLinkedActor(AActor*& LinkedActor);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldOverrideVisibility(ESlateVisibility& ForcedVisibility);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldOverrideWidgetLocation(FVector& Location);  // parameters 0xD
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
