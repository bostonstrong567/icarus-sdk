// /Game/UI/Components/FieldGuide/UMG_FieldGuideItems_DamageVariationLarge.UMG_FieldGuideItems_DamageVariationLarge_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x272, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItems_DamageVariationLarge_C : public UUserWidget, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSetBonus;  // 0x0270, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSetBonusActive;  // 0x0271, size 0x1

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItems_DamageVariationLarge(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(int32 Min, int32 Max, FText Type);  // parameters 0x20
};
