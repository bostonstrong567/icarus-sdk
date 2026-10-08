// /Game/UI/HUD/UMG_FocusedItemInfo.UMG_FocusedItemInfo_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x618, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FocusedItemInfo_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowHints;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* AmmoCount;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AmmoImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AmmoNumber;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AmmoSpacer;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AmmoTextOverride;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* AmmoTypePrompt;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Bag;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* BeaconTool;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Block;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* BuildingControls;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* CaveScanner;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Consume;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Deployable;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DeployableUpgrade;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DeployableVariants;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DismountStand;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Drop;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Drop_Carcass;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ECHODevice;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* EmptyContainer;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* FeedAnimal;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* FertilizePlots;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* FirearmControls;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Fish;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* FishingRod;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* FluidProgress;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* FocusedItemBox;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Fuel_Icon;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FuelPercentage;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Hammers;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* HintBox;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* HitchingRope;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* InjectMount;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemImage;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemName;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Lights;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Medical;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitleSmall_C* Melee;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MetaScanner;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MountAltAttack;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MountAttack;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitleSmall_C* Projectile;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ProvideWater;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* ReloadPrompt;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ScanCreature;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* ShadowRetainer;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Shears;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Shovel;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* StasisBag;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* Swap_Lure;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Throwable;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Toggle;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ToggleMount;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ToggleRotationAngle;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TotalAmmoNumber;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* TrailBeacon;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* TreatAnimal;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_1;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_2;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_3;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_4;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_5;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_6;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_7;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_8;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_9;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_10;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_11;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_12;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_13;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_14;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_15;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_16;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_17;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_18;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_19;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_20;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_21;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_22;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_23;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_24;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_25;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_26;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_27;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_28;  // 0x0518, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_29;  // 0x0520, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_30;  // 0x0528, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_31;  // 0x0530, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_32;  // 0x0538, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_33;  // 0x0540, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_34;  // 0x0548, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_35;  // 0x0550, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_36;  // 0x0558, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_37;  // 0x0560, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_38;  // 0x0568, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_39;  // 0x0570, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_179;  // 0x0578, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_276;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_310;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_318;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_476;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_594;  // 0x05A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_744;  // 0x05A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_934;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_C;  // 0x05B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_C_1;  // 0x05C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt_C;  // 0x05C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt_C_4;  // 0x05D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_AmmoNums;  // 0x05D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WireTool;  // 0x05E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFirearm;  // 0x05E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x05E9, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UTraitBehaviour* CachedAmmoDisplayProvider;  // 0x05F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Firearm;  // 0x05F8, size 0x1, named "Is Firearm"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Rotatable;  // 0x05F9, size 0x1, named "Is Rotatable"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_DeployableBase_C* CachedBuildingRotationDisplay;  // 0x0600, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Chargeable;  // 0x0608, size 0x1, named "Is Chargeable"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* Focused_Item;  // 0x0610, size 0x8, named "Focused Item"

    UFUNCTION(BlueprintCallable) void ChargeableTick();
    UFUNCTION(BlueprintCallable) void CheckIfChargeable(AIcarusItem* Item, bool& IsChargeable);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void CheckIfFirearm(AIcarusItem* Item, bool& IsFirearm);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void CheckIfRotatingDeployable(AIcarusItem* Item, bool& IsRotatable);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_UMG_FocusedItemInfo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Firearm_Tick();  // named "Firearm Tick"
    UFUNCTION(BlueprintCallable) UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* GetAmmoController();  // parameters 0x8
    UFUNCTION(BlueprintCallable) FItemsStaticRowHandle GetAmmoType(bool& Valid);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) int32 GetCurrentAmmo();  // parameters 0x4
    UFUNCTION(BlueprintCallable) UBP_ActionableBehaviour_Firearm_C* GetFirearmActionable();  // parameters 0x8
    UFUNCTION(BlueprintCallable) int32 GetTotalAmmo(const FItemsStaticRowHandle& AmmoType);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void InitializeFocusedItems();
    UFUNCTION(BlueprintCallable) void OnAltInteract();
    UFUNCTION(BlueprintCallable) void OnFocusedItemUpdate(AIcarusItem* FocusedItem);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RotatingDeployableTick();
    UFUNCTION(BlueprintCallable) void SetRangedDamage();
    UFUNCTION(BlueprintCallable) void SetShownHints();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateCachedAmmoProvider(AIcarusItem* Item);  // parameters 0x8
};
