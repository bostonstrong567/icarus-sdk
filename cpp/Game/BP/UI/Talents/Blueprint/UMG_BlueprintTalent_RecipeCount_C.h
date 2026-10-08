// /Game/BP/UI/Talents/Blueprint/UMG_BlueprintTalent_RecipeCount.UMG_BlueprintTalent_RecipeCount_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B2, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BlueprintTalent_RecipeCount_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CountImage;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* RecipeCount;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RecipeNumber;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentIndex;  // 0x0280, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0284, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentsRowHandle Talent;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Increment;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsCounting;  // 0x02A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle Timer;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Locked;  // 0x02B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsUpdate;  // 0x02B1, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_BlueprintTalent_RecipeCount(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLocked(bool bLocked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTalent(FTalentsRowHandle Talent);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update();
};
