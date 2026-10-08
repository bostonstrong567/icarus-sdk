// /Game/BP/UI/Talents/Prospects/UMG_ProspectOutcome.UMG_ProspectOutcome_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectOutcome_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Outcomes;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OutcomeText;  // 0x0270, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_ProspectOutcome(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Setup(FText Text, bool Complete);  // parameters 0x19
};
