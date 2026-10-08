// /Game/UI/Components/UMG_ToolDamage.UMG_ToolDamage_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ToolDamage_C : public UUserWidget, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer_69;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DamageVariation_C* UMG_DamageVariation_Collision;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DamageVariation_C* UMG_DamageVariation_Electric;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DamageVariation_C* UMG_DamageVariation_Electric_Powered;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DamageVariation_C* UMG_DamageVariation_Explosive;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DamageVariation_C* UMG_DamageVariation_Fire;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DamageVariation_C* UMG_DamageVariation_Frost;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DamageVariation_C* UMG_DamageVariation_Laser;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DamageVariation_C* UMG_DamageVariation_Melee;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DamageVariation_C* UMG_DamageVariation_Poison;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DamageVariation_C* UMG_DamageVariation_Projectile;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSetBonus;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSetBonusActive;  // 0x02D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item;  // 0x02D8, size 0x1F0

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_ToolDamage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Update(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void UpdateDamage(FText Type, FStatsEnum Damage, FStatsEnum Variation, UUMG_DamageVariation_C* Target, bool& Valid);  // parameters 0x41
};
