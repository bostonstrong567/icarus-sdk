// /Game/UI/Windows/UMG_Experiment_Cage.UMG_Experiment_Cage_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x386, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Experiment_Cage_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* PerformExperiment;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ExperimentReady;  // 0x0290, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FirstTimePowered;  // 0x0298, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Booting;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* Experiment_Button;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* InventoryVertBox;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PowerText;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PowerText_1;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* PowerTextSwitcher;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Progress;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* RADColonist;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ResultsText;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ResultsTitleText;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SolutionText;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* StimuliSlot;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StimuliText;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* SubjectSlot;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SubjectText;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SubjectText1;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerInventory_C* UMG_PlayerInventory;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame_220;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Titlebar_C* UMG_Titlebar;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WelcomeText;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WelcomeText2;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WhenPowered;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WhenUnpowered;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowStoreAll;  // 0x0380, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowTakeAll;  // 0x0381, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUpdateOutcomes;  // 0x0382, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BeginningAnimationFinished;  // 0x0383, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ExperimentComplete;  // 0x0384, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ExperimentValid;  // 0x0385, size 0x1

    UFUNCTION(BlueprintCallable) void AnimationFinished();
    UFUNCTION(BlueprintCallable) void AnimationStarted();
    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_DamagedShip_LaunchButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Close();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CustomEvent_0();
    UFUNCTION() void ExecuteUbergraph_UMG_Experiment_Cage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LinkedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetExperimentReady(bool StimuliValid, bool SubjectValid);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetupObjectInventory(UInventory* ContainerInventory);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateOutcomes();
    UFUNCTION(BlueprintCallable) void UpdateSubjectImage();
    UFUNCTION(BlueprintCallable) void UpdateText();
};
