// /Game/UI/Windows/UMG_SavingIcon.UMG_SavingIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SavingIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Saving;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CrossBar;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* savingbase;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Savingglow;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SavingSpinner;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SavingSpinnerBackground;  // 0x0290, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SavingIcon(int32 EntryPoint);  // parameters 0x4
};
