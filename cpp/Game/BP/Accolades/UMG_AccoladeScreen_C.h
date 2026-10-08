// /Game/BP/Accolades/UMG_AccoladeScreen.UMG_AccoladeScreen_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AccoladeScreen_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* AnimateIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* AchievementButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Buttons;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* CategorySwitcher;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ConstructionButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* GeneralButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* HuntingButton;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* MedalsButton;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* SurvivalButton;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_AccoladeList_C*> AccoladeLists;  // 0x02B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequiresUpdate;  // 0x02C8, size 0x1

    UFUNCTION() void BndEvt__UMG_AccoladeScreen_AchievementButton_K2Node_ComponentBoundEvent_5_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_AccoladeScreen_ConstructionButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_AccoladeScreen_HuntingButton_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_AccoladeScreen_MedalsButton_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_AccoladeScreen_SurvivalButton_1_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_AccoladeScreen_SurvivalButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CustomEvent_0(FAccoladesRowHandle Accolade);  // parameters 0x18
    UFUNCTION() void ExecuteUbergraph_UMG_AccoladeScreen(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitAccoladeLists();
    UFUNCTION(BlueprintCallable) void PlayerTrackerInitialized();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
