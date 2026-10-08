// /Game/UI/Windows/UMG_MoodRow.UMG_MoodRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MoodRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* bntJoy;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* bntNeutral;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* bntSad;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ImgJoyHighlight;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ImgNeutralHighlight;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ImgSadHighlight;  // 0x0290, size 0x8

    UFUNCTION() void BndEvt__UMG_MoodRow_bntJoy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_MoodRow_bntNeutral_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_MoodRow_bntSad_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MoodRow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetMoodString(FString& Mood);  // parameters 0x10
};
