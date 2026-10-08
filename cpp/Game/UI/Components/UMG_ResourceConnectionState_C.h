// /Game/UI/Components/UMG_ResourceConnectionState.UMG_ResourceConnectionState_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x400, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceConnectionState_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* NotActiveAnimation;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ProvidingAnimation;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* RecievingAnimation;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BaseBacking;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CheckBacking;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CheckIcon;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* IsOptionalText;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PriorityText;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* RecievingProgressBar;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RequiresAmountText;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ResourceIcon;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Red;  // 0x02C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor WaterBlue;  // 0x02E8, size 0x28
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ResourceConnectionState_Tooltip_C* Tooltip;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Actor;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum Type;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UTraitComponent> Trait;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UResourceNetworkComponent* ResourceNetworkComponent;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor EnergyYellow;  // 0x0340, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor FuelGreen;  // 0x0368, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor OxygenWhite;  // 0x0390, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EResourceConnectionUIState> CurrentState;  // 0x03B8, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UResourceComponent* ResourceComponent;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor OptionalRed;  // 0x03C8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* RedBorderMat;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* RedOptionalBorderMat;  // 0x03F8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ResourceConnectionState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GenerateConnectionLabelText(EResourceNetworkFlowType FlowType, TEnumAsByte<EResourceConnectionUIState> ConnectionState, bool IsFreshData, FText& ConnectionText);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetResourceColour_Linear();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateColor GetResourceColour_Slate();  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetTypeName();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void RefreshComponentData();
    UFUNCTION(BlueprintCallable) void ResourceComponentActiveStateChanged(bool IsActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ResourceComponentUpdated();
    UFUNCTION(BlueprintCallable) void SetHoverText(bool IsOutdoors, bool IsGreenHouse);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetStateStyle(bool Connected, float Multiplier);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Setup(AActor* Actor, FIcarusResourcesEnum Type);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateTooltipText(FText TooltipText);  // parameters 0x18
};
