// /Game/UI/Components/UMG_ReadyUp.UMG_ReadyUp_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4C9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ReadyUp_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CancelButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* ContentSwitcher;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ContractTabButton;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* CrewTabButton;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* EvenSplitButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* HomeButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_139;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LaunchButtonBorder;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* LaunchDropButton;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* LaunchDropOverlay;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* LoadoutTabButton;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NoContractBorder;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NotReadyInstructionText;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ReadyButton;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Chatbox_C* UMG_Chatbox;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Crew_C* UMG_Crew;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* UMG_LoadingIcon;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PartySpace_C* UMG_PartySpace;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SpaceMenu_Cargo_C* UMG_SpaceMenu_Cargo;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectId;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectServerInfo Current_Contract;  // 0x0318, size 0x1B0, named "Current Contract"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BoundToBackend;  // 0x04C8, size 0x1

    UFUNCTION() void BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__ContractTabButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__CrewTabButton_K2Node_ComponentBoundEvent_6_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__EvenSplitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__LaunchDropButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__LoadoutTabButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ReadyButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ReadyUp(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Launch();
    UFUNCTION(BlueprintCallable) void LoadoutUpdated();
    UFUNCTION(BlueprintCallable) void Log(FString Description);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnOpened();
    UFUNCTION(BlueprintCallable) void PartyReadyStateChanged(bool AllPlayersReady);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ReadyUpResult();
    UFUNCTION(BlueprintCallable) void Reset();
    UFUNCTION(BlueprintCallable) void SetContentState(TEnumAsByte<E_ContractTabs> Tab);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetReadyUpButtonStates(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Show_Loading_Screen(FText Loading_Screen_Text);  // parameters 0x18, named "Show Loading Screen"
    UFUNCTION(BlueprintCallable) void ShowError(FErrorCodesEnum ErrorCode);  // parameters 0x10
};
