// /Game/UI/Components/UMG_TalentSwitcher_Notifier.UMG_TalentSwitcher_Notifier_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentSwitcher_Notifier_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Pulse;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0270, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TalentSwitcher_Notifier(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Is_Point_Available(bool HasPoints);  // parameters 0x1, named "Is Point Available"
};
