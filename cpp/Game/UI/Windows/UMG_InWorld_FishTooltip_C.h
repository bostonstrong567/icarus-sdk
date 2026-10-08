// /Game/UI/Windows/UMG_InWorld_FishTooltip.UMG_InWorld_FishTooltip_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InWorld_FishTooltip_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Length;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LengthText;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LengthValuePercent;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pointer;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Quality;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* QualityValuePercent;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Weight;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WeightText;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WeightValuePercent;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Linked_Actor;  // 0x0318, size 0x8, named "Linked Actor"

    UFUNCTION() void ExecuteUbergraph_UMG_InWorld_FishTooltip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindFishData(FItemData Fish, FFishData& FishData);  // parameters 0x2D0
    UFUNCTION(BlueprintCallable) void Initialise(AActor* LinkedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TickWidget();
};
