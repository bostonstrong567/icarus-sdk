// /Game/UI/Components/UMG_TalentSwitcher.UMG_TalentSwitcher_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentSwitcher_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ButtonsHBox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentSwitcher_Notifier_C* Solo_Notifier;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* SoloButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentSwitcher_Notifier_C* Talent_Notifier;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* TalentsButton;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSwitchTalents SwitchTalents;  // 0x02A0, size 0x10

    UFUNCTION() void BndEvt__UMG_TalentSwitcher_PlayerTalents_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_TalentSwitcher_SoloTalents_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TalentSwitcher(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SwitchTalents__DelegateSignature(bool Solo);  // parameters 0x1
};
