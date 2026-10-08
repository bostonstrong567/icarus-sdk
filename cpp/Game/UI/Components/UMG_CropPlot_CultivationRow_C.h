// /Game/UI/Components/UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x29C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CropPlot_CultivationRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* AvailableFuel;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* GrowthProgressBar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemDisplay_C* UMG_ItemDisplay;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UCultivation* Cultivation;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxCultivationTime;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentCultivationStage;  // 0x0294, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ElapsedTime;  // 0x0298, size 0x4

    UFUNCTION(BlueprintCallable) void CalculateElapsedTime(float& ElapsedGrowthTime) const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void CalculateMaturityPercentage(float& PercentMature);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CropPlot_CultivationRow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCultivation(UCultivation* Cultivation);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupIcon();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
