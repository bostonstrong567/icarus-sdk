// /Game/UI/Components/UMG_ProspectTracker_Entry.UMG_ProspectTracker_Entry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x491, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectTracker_Entry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ButtonBase;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ClaimedText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Hours;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* JoinButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* JoinedText;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Minutes;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OccupiedText;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Seconds;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* SettleButton;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* SettleStateBoxes;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusSession Session;  // 0x02D0, size 0x1C0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Found;  // 0x0490, size 0x1

    UFUNCTION() void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ProspectTracker_Entry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void SetTime(TArray<FString>& Time);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
