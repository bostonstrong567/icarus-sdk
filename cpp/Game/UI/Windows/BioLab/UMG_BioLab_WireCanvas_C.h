// /Game/UI/Windows/BioLab/UMG_BioLab_WireCanvas.UMG_BioLab_WireCanvas_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x388, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_WireCanvas_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* ContentCanvas;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UUMG_BioLab_UpgradeSlotSelector_C*, BP_WireDetails> Wires;  // 0x0270, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UUMG_BioLab_UpgradeSlotSelector_C*, UUMG_WirePin_C*> SlotsToPins;  // 0x02C0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UUMG_BioLab_UpgradeSlotSelector_C*, bool> CurrentBlendingWires;  // 0x0310, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WireThickness;  // 0x0360, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WireLerpDuration;  // 0x0364, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor UnfocusedWireColour;  // 0x0368, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor FocusedWireColour;  // 0x0378, size 0x10

    UFUNCTION(BlueprintCallable) void Cleanup();
    UFUNCTION(BlueprintCallable) void ConnectWire(UUMG_BioLab_UpgradeSlotSelector_C* Selector, UUMG_WirePin_C* Pin, FVector2D MidPoint);  // parameters 0x18
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_WireCanvas(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetEdgePoint(FVector2D LineStart, FVector2D BoxPosition, FVector2D BoxSize, FVector2D ExtraInset, FVector2D& BoxEdgePoint);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) void OnPaint(FPaintContext& Context) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SetWireBlendTarget(UUMG_BioLab_UpgradeSlotSelector_C* Selector, bool BlendToFocused);  // parameters 0x9
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateFades(float DeltaTime);  // parameters 0x4
};
