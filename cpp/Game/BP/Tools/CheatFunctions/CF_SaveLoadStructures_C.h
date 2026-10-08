// /Game/BP/Tools/CheatFunctions/CF_SaveLoadStructures.CF_SaveLoadStructures_C
// Derives from: UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_SaveLoadStructures_C : public UCF_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxString* ComboBoxString_143;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusButtonTemp_C* DestroyAllBuildings;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* EditableTextBox_142;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FeedbackText;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusButtonTemp_C* LoadButton;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusButtonTemp_C* SaveButton;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, int32> SaveNameToSlotMap;  // 0x0318, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NextEmptySaveSlot;  // 0x0368, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSerializedGrid DontDeleteStructLoading;  // 0x0370, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<ABuildingGridBase> GridBaseClass;  // 0x03D0, size 0x28

    UFUNCTION(BlueprintCallable) void AllowDestructionProcessing();
    UFUNCTION() void BndEvt__DestroyAllBuildings_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    UFUNCTION() void BndEvt__LoadButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    UFUNCTION() void BndEvt__SaveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DestroyBuildingsFeedback();
    UFUNCTION() void ExecuteUbergraph_CF_SaveLoadStructures(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FailedFeedback();
    UFUNCTION(BlueprintCallable) void FinishThenClearFeedback();
    UFUNCTION(BlueprintCallable) void LoadFeedback(int32 slot);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NewSaveFeedback(int32 slot);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_3D89231042C0965053A8E8BC2BAD8DA2(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OverwrittenFeedback(int32 slot);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RecalcSaves();
    UFUNCTION(BlueprintCallable) void SaveGameToSlot(UCheatSaveGame_C* Save);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SerializeActorAndInventories(AActor* Actor, SerializedActorWithInventories& SerializedActorWithInventories);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void SerializeAllActorsSpawnedViaDeployables(UCheatSaveGame_C* Save);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SerializeGrids(UCheatSaveGame_C* save);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SlotsToItemStaticData(TArray<FInventorySlot>& slots, TArray<FRowHandle>& ItemStaticRowHandle);  // parameters 0x20
};
