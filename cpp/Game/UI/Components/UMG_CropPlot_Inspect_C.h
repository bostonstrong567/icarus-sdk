// /Game/UI/Components/UMG_CropPlot_Inspect.UMG_CropPlot_Inspect_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CropPlot_Inspect_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Alterations;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlterationsDivider;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* ConfirmButton;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Connections;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* CropDurability;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CropDurabilityPercent;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CropOverlay;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* CropTierBox;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* CultivationList;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeployableModifiers_C* DeployableModifiers;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceConnectionState_C* Electricity;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceConnectionState_C* Fuel;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ItemAlterations;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ItemAlterations_1;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TotalSpeedText;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CropPlotTier_C* UMG_CropPlotTier;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DarkTitlebar_C* UMG_DarkTitlebar_Seed;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceConnectionState_C* Water;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasContent;  // 0x0318, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CropPlotTier;  // 0x031C, size 0x4

    UFUNCTION() void BndEvt__UMG_CropPlot_Inspect_ConfirmButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CropPlot_Inspect(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLinkedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateCultivations();
    UFUNCTION(BlueprintCallable) void UpdateGrowthSpeed();
};
