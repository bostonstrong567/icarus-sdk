// /Game/UI/Windows/GreatHunt/UMG_Boss_Button.UMG_Boss_Button_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x458, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Boss_Button_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Hover;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_BG;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* BossName;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ComingSoon;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Foreground;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Timer;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Lock;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* MainButton;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Number;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* RespawnBar;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* RespawnContainer;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* RespawnInfomation;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RespawnText;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RespawnText_Returns;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* TerrainName;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Unavialable;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeaponImage;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* WeaponOverlay;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WpnGradient;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Weapon;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Background;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Foreground;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Hovered;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemShopItemsRowHandle LegendaryWeapon;  // 0x0370, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWorldBossesRowHandle Boss;  // 0x0388, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTerrainsRowHandle> Terrain;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool isComingSoon;  // 0x03B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Disabled;  // 0x03B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle DLC_Data;  // 0x03B4, size 0x18, named "DLC Data"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Prompt;  // 0x03D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Difficulty;  // 0x03E8, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_TerrainButtonPromptContents_C* PromptContents;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Mission_Communication_Upgradeable_C* MissionCommunicator;  // 0x03F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLocked;  // 0x0400, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShowWeapon ShowWeapon;  // 0x0408, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideName;  // 0x0418, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Spawned;  // 0x041C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Total;  // 0x0420, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText AICreature_Type_Creature_Name;  // 0x0428, size 0x18, named "AICreature Type Creature Name"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGreatHuntCreatureInfoRowHandle GreatHuntCreature;  // 0x0440, size 0x18

    UFUNCTION() void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Boss_Button(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldShowWarningMessage(bool& Show);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowWeapon__DelegateSignature(FLivingItemShopItemsRowHandle Weapon);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateTerrainLock();
    UFUNCTION(BlueprintCallable) void UpdateTimer();
};
