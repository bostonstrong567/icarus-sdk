// /Game/BP/Tools/CheatFunctions/CF_SaveLoadPrebuilt.CF_SaveLoadPrebuilt_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x470, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_SaveLoadPrebuilt_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusButtonTemp_C* CleanupAllPrebuilt;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxString* ComboBoxString_143;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusButtonTemp_C* DestroyAllBuildings;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* EditableTextBox_142;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FeedbackText;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusButtonTemp_C* LoadButton;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxString* Origin;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusButtonTemp_C* SaveButton;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusButtonTemp_C* SaveButton_Adv;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxString* Spawn;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, int32> SaveNameToSlotMap;  // 0x0338, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NextEmptySaveSlot;  // 0x0388, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSerializedGrid DontDeleteStructLoading;  // 0x0390, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<ABuildingGridBase> GridBaseClass;  // 0x03F0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, AActor*> Out_Actors;  // 0x0418, size 0x50, named "Out Actors"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<APrebuiltStructure> LoadedClass;  // 0x0468, size 0x8

    UFUNCTION() void BndEvt__CF_SaveLoadPrebuilt_CleanupAllPrebuilt_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    UFUNCTION() void BndEvt__CF_SaveLoadPrebuilt_SaveButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    UFUNCTION() void BndEvt__DestroyAllBuildings_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    UFUNCTION() void BndEvt__LoadButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    UFUNCTION() void BndEvt__SaveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DestroyBuildingsFeedback();
    UFUNCTION() void ExecuteUbergraph_CF_SaveLoadPrebuilt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FailedFeedback();
    UFUNCTION(BlueprintCallable) void FinishThenClearFeedback();
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetOrigin();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetSpawn();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LoadFeedback(int32 slot);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NewSaveFeedback(int32 slot);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_92ED3CD8470278AA4735C186CB6B15F0(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OverwrittenFeedback(int32 slot);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateOrigin();
    UFUNCTION(BlueprintCallable) void UpdateSaves();
};
