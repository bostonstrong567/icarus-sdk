// /Game/UI/Components/UMG_ResourcePrompt.UMG_ResourcePrompt_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4C9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourcePrompt_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* UpdatedAddedNumber;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OutAnim;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* InAnim;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Amount;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Total;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Type;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FResourcePromptInfo Info;  // 0x02A8, size 0x1F8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCount;  // 0x04A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FResourceRemoved ResourceRemoved;  // 0x04A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AddedCount;  // 0x04B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle RemoveTimer;  // 0x04C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FadingOut;  // 0x04C8, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ResourcePrompt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_471FD1334CBA6E1EEA9F34B4CB60397C();
    UFUNCTION(BlueprintCallable) void RefreshTimer();
    UFUNCTION(BlueprintCallable) void ResourceRemoved__DelegateSignature(FName Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Timer();
    UFUNCTION(BlueprintCallable) void UpdateAddedCount(int32 AmountAdded);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateTotalCount(int32 AmountAdded);  // parameters 0x4
};
