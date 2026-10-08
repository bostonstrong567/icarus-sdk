// /Game/UI/Windows/GreatHunt/UMG_GreatHunt_Button_Vertical.UMG_GreatHunt_Button_Vertical_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x4C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GreatHunt_Button_Vertical_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnimation;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BackgroundImage;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BannerTexture;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DLCBanner;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* DLCLock;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* DLCName;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_347;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Timer;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Layout;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* MainButton;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OpenWorldLock;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar_52;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RegionName;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* RespawnBar;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* RespawnInfo;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RespawnText;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RespawnText_Returns;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TerrainLock;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* TerrainName_1;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Timer;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHuntSelectedVertical HuntSelectedVertical;  // 0x0368, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Weapon;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Background;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Boss;  // 0x0388, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentTreesRowHandle GreatHunt;  // 0x0390, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemShopItemsRowHandle Legendary;  // 0x03A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle DLC_Data;  // 0x03C0, size 0x18, named "DLC Data"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTerrainsRowHandle Terrain;  // 0x03D8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Disabled;  // 0x03F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Prompt;  // 0x03F8, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_TerrainButtonPromptContents_C* PromptContents;  // 0x0410, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ResourceAvailabilityData> AvailableResources;  // 0x0418, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDLCLock;  // 0x0428, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTerrainLock;  // 0x0429, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOpenWorldLock;  // 0x042A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText NameText;  // 0x0430, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery MatchingDenActorTag;  // 0x0448, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_GH_DenEntrance_C* CachedDenActor;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CooldownTextTimer;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText RegionNameText;  // 0x04A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* UIHoverBossAudio;  // 0x04B8, size 0x8

    UFUNCTION() void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Confirm();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_GreatHunt_Button_Vertical(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HuntSelectedVertical__DelegateSignature(FTalentArchetypesRowHandle Hunt, FLivingItemShopItemsRowHandle Weapon);  // parameters 0x30
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldShowWarningMessage(bool& Show);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateBossCooldownText();
    UFUNCTION(BlueprintCallable) void UpdateDLCLockOverlay();
    UFUNCTION(BlueprintCallable) void UpdateOpenWorldLock();
    UFUNCTION(BlueprintCallable) void UpdateTerrainLock();
};
