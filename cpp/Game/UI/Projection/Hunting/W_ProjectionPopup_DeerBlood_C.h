// /Game/UI/Projection/Hunting/W_ProjectionPopup_DeerBlood.W_ProjectionPopup_DeerBlood_C
// Derives from: UW_ProjectionWidget_Hunting_C > UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x328, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionPopup_DeerBlood_C : public UW_ProjectionWidget_Hunting_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AgeText;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Animal;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AnimalTypeText;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* DecayTimer;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pointer;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_0;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StatusText;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CachedTargetHealthPct;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasCachedTargetHealth;  // 0x031C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_HuntingBloodTrail_C* CachedOwningBloodTrail;  // 0x0320, size 0x8

    UFUNCTION(BlueprintCallable) void CacheTargetHealth();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_ProjectionPopup_DeerBlood(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetStatus(FText StatusText);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void TryCacheOwningBloodTrail();
    UFUNCTION(BlueprintCallable) void UpdateAge();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
