// /Game/BP/UI/Talents/Solo/UMG_TalentView_Solo.UMG_TalentView_Solo_C
// Derives from: UTalentViewInterface > UUserWidget > UWidget > UVisual > UObject
// size 0x400, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentView_Solo_C : public UTalentViewInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ActiveMessage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ArchetypeBox;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* bot;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* bot_1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* bot_2;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_4;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_5;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_6;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_7;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_8;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_9;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_10;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_11;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* GraphWidgetSwitcher;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_113;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InactiveMessage;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Message_1;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Message_2;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* mid;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* mid_1;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* mid_2;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Noise;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pattern;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* RefreshButton;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* SoloActiveState;  // 0x0358, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_92;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* top;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* top_1;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* top_2;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RefundPoints_C* UMG_RefundPoints;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentFilter_C* UMG_TalentFilter;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentSwitcher_C* UMG_TalentSwitcher;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TreePoints_C* UMG_TreePoints;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Warning_1;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Warning_2;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_TalentArchetype_Player_C*> Buttons;  // 0x03B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText AvailableTalents;  // 0x03C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor False;  // 0x03E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSwitchTalents SwitchTalents;  // 0x03F0, size 0x10

    UFUNCTION() void BndEvt__UMG_TalentView_Solo_RefreshButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_TalentView_Solo_UMG_TalentSwitcher_K2Node_ComponentBoundEvent_1_SwitchTalents__DelegateSignature(bool Solo);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TalentView_Solo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UTalentGraphWidget* GetGraphWidget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<UTalentTreeWidget*> GetTalentTreeWidgets();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnClick(FTalentArchetypesRowHandle Archetype);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnModelViewChanged(UTalentModelInterface* InModel, UTalentViewInterface* InView);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Setup();
    UFUNCTION(BlueprintCallable) void ShowSoloWarning(bool SoloTree);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SwitchTalents__DelegateSignature(bool Solo);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateTalentNotifiers(UTalentModelInterface_Const* Model);  // parameters 0x8
};
