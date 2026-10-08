// /Game/UI/Components/UMG_TerrainButton.UMG_TerrainButton_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x3FC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TerrainButton_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Button_Animation;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* DLCName;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_114;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_141;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* LockedOverlay;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* MainButton;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MapDescription;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MissionsComplete;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TerrainName;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_AvailableResourceList_C* UMG_AvailableResourceList_1;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DangerLevel_C* UMG_DangerLevel;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ZoomOnHoverImage_C* UMG_ZoomOnHoverImage;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FTerrainSelected TerrainSelected;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Name;  // 0x0318, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0330, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* ProspectTexture;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentTreesRowHandle Terrain;  // 0x0350, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Disabled;  // 0x0368, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle DLC_Data;  // 0x036C, size 0x18, named "DLC Data"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Prompt;  // 0x0388, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Difficulty;  // 0x03A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle LevelBoostAccountFlag;  // 0x03A4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LevelBoostTo;  // 0x03BC, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_TerrainButtonPromptContents_C* PromptContents;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ResourceAvailabilityData> AvailableResources;  // 0x03C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHovered Hovered;  // 0x03D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* BackgroundTexture;  // 0x03E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ImageZoom;  // 0x03F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RenBoost;  // 0x03F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ExoticBoost;  // 0x03F8, size 0x4

    UFUNCTION() void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void BoostButtonClicked();
    UFUNCTION(BlueprintCallable) void Cancel();
    UFUNCTION(BlueprintCallable) void Confirm();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TerrainButton(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GrantLevelBoost();
    UFUNCTION(BlueprintCallable) void Hovered__DelegateSignature(UTexture2D* Image);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldShowLevelBoostPrompt(bool& Show);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldShowWarningMessage(bool& Show);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TerrainSelected__DelegateSignature(FTalentArchetypesRowHandle Terrain);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateDLCLockOverlay();
};
