// /Game/UI/Components/UMG_EncumbranceBarActor.UMG_EncumbranceBarActor_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_EncumbranceBarActor_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* EncumbranceBar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Title;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeightIcon;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WeightText;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Green;  // 0x0298, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Red;  // 0x02C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x02E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsUpdate;  // 0x02E9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x02F0, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_EncumbranceBarActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void SetWeightBar();
    UFUNCTION(BlueprintCallable) void SetWeightText();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void WeightUpdated();
};
